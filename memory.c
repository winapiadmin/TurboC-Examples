#include <dos.h>
#include <math.h>
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <bios.h>
main(){
int gd=9,gm=IBM8514HI;
    struct SREGS sregs;
    union REGS regs;
    regs.h.ah = 0x48;
    int86x(0x21, &regs, &regs, &sregs);
    printf("Total memory: %dKB\n", regs.x.bx);
    printf("Free memory: %dKB\n", biosmemory());
getch();
return 0;
}
