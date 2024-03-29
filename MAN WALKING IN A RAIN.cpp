//Problem Statements:-

/*Write C++ program to draw man walking in the rain with an umbrella.
Apply the concept of polymorphism.*/

//Code:-

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

void main()
{

	int gd=DETECT,gm;
	int rhx,rhy,j,i;
	clrscr();

initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
for(i=0;i<500;i+=5)
{

	line(20,380,580,380); //platform

		if(i%2==0)
		{
			line(25+i,380,35+i,340); //leftleg
			line(45+i,380,35+i,340); //rightleg
			line(35+i,315,25+i,330); //left hand
			delay(20);
		}
		else
		{
		line(35+i,380,35+i,340); //left leg
		line(35+i,315,40+i,330); //left hand
		delay(20);
		}

	line(35+i,340,35+i,310); //body
	circle(35+i,300,10); //head
	line(35+i,315,50+i,330); //hand
	line(50+i,330,50+i,280); //umbrella stick
	line(15+i,280,85+i,280); //umbrella right

	arc(50+i,280,0,180,35); //umbrella boby
	arc(55+i,330,180,360,5); //umbrella handle
	rhx=getmaxx();
	rhy=getmaxy();
	for(j=0;j<100;j++)
	{
		outtextxy(random(rhx),random(rhy-50),"|");
		setcolor(WHITE);
	}
	delay(150);
	cleardevice();
	}
	getch();
}
