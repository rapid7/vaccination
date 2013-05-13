#i686-w64-mingw32-gcc -o build/test.exe src/test.c build/empty.dll.o build/empty.exe.o build/vbox.exe.o -ldbghelp
MAKEFLAGS = 
DIRS = 
CC = i686-w64-mingw32-gcc
OBJCOPY = i686-w64-mingw32-objcopy -B i386 -I binary -O pe-i386
CFLAGS = -Wall -s -O2
DLL = -shared
LIBS = -ldbghelp
OBJDIR = build
SRCDIR = src

VBOXH = $(SRCDIR)/virtualbox/virtualbox.h
VMWH = $(SRCDIR)/vmware/vmware.h

RESOURCES = $(OBJDIR)/empty.dll $(OBJDIR)/vbox.exe $(OBJDIR)/vmware.exe $(OBJDIR)/debugger.exe
RESOBJECTS = $(RESOURCES:%=%.o)

default: $(VBOXH) $(VMWH) build/vaccine.exe

$(OBJDIR):
	mkdir $@

$(VBOXH): utils/shot2code.py data/regshot_vbox_reduced.txt
	python utils/shot2code.py virtualbox data/regshot_vbox_reduced.txt > $@

$(VMWH): utils/shot2code.py data/regshot_vmware_reduced.txt
	python utils/shot2code.py vmware data/regshot_vmware_reduced.txt > $@

$(OBJDIR)/vbox.exe: $(SRCDIR)/virtualbox/vbox.c
	$(CC) $(CFLAGS) $(DIRS) -mwindows -o $@ $^ $(LIBS)

$(OBJDIR)/vmware.exe: $(SRCDIR)/vmware/exe.c
	$(CC) $(CFLAGS) $(DIRS) -mwindows -o $@ $^ $(LIBS)

$(OBJDIR)/debugger.exe: $(SRCDIR)/debugger/exe.c
	$(CC) $(CFLAGS) $(DIRS) -mwindows -o $@ $^ $(LIBS)

$(OBJDIR)/empty.dll: $(SRCDIR)/empty.c
	$(CC) $(CFLAGS) $(DIRS) $(DLL) -o $@ $^ $(LIBS)

$(OBJDIR)/empty.dll.o: $(OBJDIR)/empty.dll
	$(OBJCOPY) $^ $@

$(OBJDIR)/vbox.exe.o: $(OBJDIR)/vbox.exe
	$(OBJCOPY) $^ $@

$(OBJDIR)/vmware.exe.o: $(OBJDIR)/vmware.exe
	$(OBJCOPY) $^ $@

$(OBJDIR)/debugger.exe.o: $(OBJDIR)/debugger.exe
	$(OBJCOPY) $^ $@

build/vaccine.exe: $(SRCDIR)/vaccine.c $(RESOBJECTS)
	$(CC) $(CFLAGS) $(DIRS) -o $@ $^ $(LIBS)

clean:
	rm $(RESOBJECTS) $(RESOURCES) $(VBOXH) $(VMWH) build/vaccine.exe
