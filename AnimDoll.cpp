
#include<iostream>
#include <bits/stdc++.h>

class doll
{
     public:
	void dolldraw(int x)
	{
		int y=100;
		circle(x,y+10,10);
		line(x,y+20,x,y+100);
		line(x,y+40,x-20,y+70);
		line(x,y+40,x+20,y+70);
		line(x,y+100,x-20,y+120);
		line(x,y+100,x+20,y+120);
	}
	void dollmoll(int x)
	{
		int y=100;
		circle(x,y+10,10);
		line(x,y+20,x,y+100);
		line(x,y+50,x-20,y+30);
		line(x,y+50,x+20,y+30);
		line(x,y+100,x-20,y+90);
		line(x,y+100,x+20,y+90);
	}

};
void main()
{
	doll a,b,c,d,e;
	int h,i,j,k;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int w=50;
	while(!kbhit())
	{
		a.dolldraw(w);
		h=w+45;
		b.dolldraw(h);
		j=h+45;
		c.dolldraw(j);
		i=j+45;
		d.dolldraw(i);
		k=i+45;
		e.dolldraw(k);
		delay(500);
		cleardevice();
		w=150;
		a.dollmoll(w);
		b.dollmoll(h);
		c.dollmoll(i);
		d.dollmoll(j);
		e.dollmoll(k);
		delay(500);
		cleardevice();
	}
	getch();
	closegraph();
}

