#include <graphics.h>
// Note: This is not a disk-sector reader.
int main()
{
   int gd = DETECT, gm;
   int x = 320, y = 240, radius, loop;
       
   initgraph(&gd, &gm, "C:\\TC\\BGI");
       
   for ( radius = 25; radius <=125 ; radius = radius + 20){
      circle(x, y, radius);
      setfillstyle(LINE_FILL,BLACK);
      for (loop=45/5;loop <=360;loop=loop+45/5) sector(x,y, loop-45/5,loop, radius,radius);
   }
   getch();
   closegraph();
   return 0;
}
