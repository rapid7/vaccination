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

RESOURCES = $(OBJDIR)/empty.exe $(OBJDIR)/empty.dll $(OBJDIR)/vbox.exe
RESOBJECTS = $(RESOURCES:%=%.o)

default: $(VBOXH) build/test.exe

$(OBJDIR):
	mkdir $@

$(VBOXH): utils/shot2code.py data/regshot_output_vbox.txt
	python utils/shot2code.py data/regshot_output_vbox.txt > $@

$(OBJDIR)/vbox.exe: $(SRCDIR)/virtualbox/vbox.c
	$(CC) $(CFLAGS) $(DIRS) -o $@ $^ $(LIBS)

$(OBJDIR)/empty.exe: $(SRCDIR)/empty.c
	$(CC) $(CFLAGS) $(DIRS) -o $@ $^ $(LIBS)

$(OBJDIR)/empty.dll: $(SRCDIR)/empty.c
	$(CC) $(CFLAGS) $(DIRS) $(DLL) -o $@ $^ $(LIBS)

$(OBJDIR)/empty.exe.o: $(OBJDIR)/empty.exe
	$(OBJCOPY) $^ $@
$(OBJDIR)/empty.dll.o: $(OBJDIR)/empty.dll
	$(OBJCOPY) $^ $@
$(OBJDIR)/vbox.exe.o: $(OBJDIR)/vbox.exe
	$(OBJCOPY) $^ $@

build/test.exe: $(SRCDIR)/test.c $(RESOBJECTS)
	$(CC) $(CFLAGS) $(DIRS) -o $@ $^ $(LIBS)

clean:
	rm $(RESOBJECTS) $(RESOURCES) $(VBOXH) build/test.exe
