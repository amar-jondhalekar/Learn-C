/*
We can write assembly program code inside c language program. 
In such case, all the assembly code must be placed inside asm{} block.
*/
#include<stdio.h>
void main()
{
    
    int a = 10, b = 20, c;
    
    asm {
        mov ax,a
        mov bx,b
        mov ax,bx
        add c,cx
        }
    printf("C = is %d", c);

}