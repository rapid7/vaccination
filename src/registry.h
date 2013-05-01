
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

void process_registry(char * startp, char * endp) {
   char * keyp = startp;
   while (keyp < endp && keyp != NULL)
      keyp = process_registry_next(keyp, endp);
}

int registry_add(HKEY hkey, char * key, char * vname, void * value, int vlen, int regtype) {
    LONG lRes;
    HKEY subkey;
    DWORD dwDisposition;

    lRes = RegCreateKeyEx(hkey, key, 0, NULL, 0, KEY_ALL_ACCESS, NULL, &subkey, NULL);
    if (lRes != ERROR_SUCCESS)
      return lRes;

    lRes = RegSetValueEx(subkey, vname, 0, regtype, value, vlen);
    if (lRes != ERROR_SUCCESS)
      return lRes;

    RegCloseKey(subkey);

    return lRes;
}

