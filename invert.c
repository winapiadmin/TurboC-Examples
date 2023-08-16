#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main()
{
   int i, j = 0, gd = DETECT, gm;
   int x=0,y=0;
   int value=0;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
      for (x=0;x<getmaxx();x++){
        for(y=0;y<getmaxy();y++){
            value=(x+y)%15;//Change value to any math calls, must mod by 15
            putpixel(x,y,value);
        }
      }
   while (1==1){
       for (x=0;x<getmaxx();x++){
            for(y=0;y<getmaxy();y++){
                putpixel(x,y,15-getpixel(x,y));
            }
       }
       getch();
   }
   closegraph();// <- note: unreachable code so don't use infity loop
   return 0;
}
