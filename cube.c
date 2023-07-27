#include <graphics.h>
#include <dos.h>
int main()
{
    int gd = DETECT, gm;
    int x=0,y=0;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

	moveto(x, y);
	rectangle(0 + x, 0 + y, 100 + x, 100 + y);
	rectangle(30 + x, 30 + y, 130 + x, 130 + y);
	lineto(30 + x, 30 + y);
	moveto(100 + x, 100 + y);
	lineto(130 + x, 130 + y);
	moveto(100 + x, 0 + y);
	lineto(130 + x, 30 + y);
	moveto(0 + x, 100 + y);
	lineto(30 + x, 130 + y);
	closegraph();
}
