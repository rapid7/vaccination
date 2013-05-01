#include <windows.h>
#include <tchar.h>
#include <stdio.h>

extern char foo_data      asm("_binary_registry_values_txt_start");
extern char foo_data_end  asm("_binary_registry_values_txt_end");
extern unsigned int foo_data_size asm("_binary_registry_values_txt_size");


    lRes = RegCreateKeyEx(hKey, // handle to an open key
              cName,        // name of the subkey
              0,                 // Reserved, must be 0
              "",                // class or object type of this key, may be ignored
              0,                // Options
               KEY_ALL_ACCESS, // Access right for the key
              &sa,              // Pointer to security attribute structure, can be inherited or not. NULL is not inherited
              &hkSub,       // variable that receives a handle to the opened or created key
              &dwDisposition);  // variable that receives:
                             // REG_CREATED_NEW_KEY - create new key (non-exist)
                             // REG_OPENED_EXISTING_KEY - just open the existing key (already exist)
       // If successful

char * process_registry_next(char * keyp, char * endp) {
   char * valuep = strstr(keyp, ": ");
   char * eolp = strstr(keyp, "\n");
   char buf[200];

   if (valuep == NULL) return eolp+1;
   if (eolp == NULL) eolp = endp;

   memset(buf, 0, 200);
   snprintf(buf, valuep-keyp, "%s", keyp);
   printf("key: %s\n", buf);

   memset(buf, 0, 200);
   snprintf(buf, eolp-valuep, "%s", valuep);
   printf("value: %s\n", buf);

   return eolp+1;
}

void process_registry() {
   char * keyp = &foo_data;
   while (keyp < &foo_data_end && keyp != NULL)
      keyp = process_registry_next(keyp, &foo_data_end);
}

int __cdecl main(int argc, char **argv)
{
   printf("data %08x\n", &foo_data);
   printf("data size %08x\n", &foo_data_size);
   printf("data end %08x\n", &foo_data_end);
   process_registry();
   return 0;
}
