%macro read  0
mov eax,3
mov ebx,2
mov ecx,res
mov edx,2
int 0x80
%endmacro

%macro write 2
mov eax,4
mov ebx,1
mov ecx,%1
mov edx,%2
int 0x80
%endmacro

section .text
global _start
_start:
read 
write res,2

mov eax,1
int 0x80

section .bss
res resb 2
