.PHONY: all

all:
	yasm -f elf64 -g dwarf2 readfile.asm
	ld readfile.o -o readfile