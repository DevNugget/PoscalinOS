nasm -f elf32 kernel.asm -o kasm.o
echo "Assembled kernel.asm -> kasm.o"
gcc -m32 -c kernel.c -o kc.o
echo "Compiled  kernel.c   -> kc.o"
ld -m elf_i386 -T link.ld -o Posca/boot/kernel.bin kasm.o kc.o
echo "Linked kasm.o & kc.o -> Posca/boot/kernel.bin"
grub-mkrescue -o posca.iso Posca/
echo "Built iso file       -> posca.iso (from Posca/)"

#qemu-system-i386 -kernel Posca/boot/kernel.bin
