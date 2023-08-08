#include <dos.h>
#include <math.h>
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <bios.h>
main(){
    char buffer[5*512];

    printf("%d\n",biosdisk(_DISK_READ,2,0,0,0,5,(void *)buffer));
    for(int i=0;i<sizeof(buffer)/sizeof(char);i++)
    {
      printf("The byte index %d of the sector is %02X\n", i, buffer[i]);
    }
getch();
return 0;
}
