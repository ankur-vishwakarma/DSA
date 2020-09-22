%macro paste 2
mov eax,4
mov ebx,1
mov ecx,%1
mov edx,%2
int 0x80
%endmacro

section .text
global _start
_start:

paste name,len
paste dept,len1
paste rn,len2
paste year,len3

mov eax,1
int 0x80

section .data
name db 'ankur vishwakarma' ,0xA,0xD
len equ  $ -name
dept db 'cse' ,0xA,0xD
len1 equ $ -dept
rn db 'BT17CS017' ,0xA,0xD
len2 equ $ -rn
year db '2019' ,0xA,0xD
len3 equ $ -year
