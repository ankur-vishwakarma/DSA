%macro sum 2
mov eax,%1
mov ebx,%2
add eax,ebx
add eax,'0'
mov [res],eax
%endmacro

section .text
global _start
_start:
sum a,b
mov eax,4
mov ebx,1
mov ecx,res
mov edx,2
int 0x80

mov eax,1
int 0x80

section .data
a equ 2
b equ 3

section .bss
res resb 1
