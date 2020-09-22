section .text
   global _start

_start:
  mov eax,a
  mov ebx,b
  mov ecx,c

  add eax,ebx
 add eax,ecx
 add eax, '0'

  mov     [res],eax

;storing
mov edx,4        ;msg len
mov ebx,1       ; tells std out
mov ecx,res    ;store data in ecx

;printing
 mov eax,4
 int 0x80

;exit
mov eax,1
int 0x80

section .data
  a equ 3
  b equ 3
  c equ 3

segment .bss
 res resb 4
