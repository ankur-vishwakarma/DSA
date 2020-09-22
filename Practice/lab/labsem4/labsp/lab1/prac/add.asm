section .text
global _start
_start:
mov eax,a
mov ebx,b
add eax,ebx
add eax,'0'
mov [res],eax

mov eax,4
mov ebx,1
mov ecx,res
mov edx,2
int 0x80

mov eax,1
int 0x80

section .data
a equ 3
b equ 4

section .bss
res resb 2



