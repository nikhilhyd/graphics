#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

//#include<turboc~1\graphics\noname00.c>

void main()
{
	int gd=DETECT,gm;
	int x,y,x_m,y_m,maxx,maxy,MaxColors;
	int x_c1,y_c1,x_c2,y_c2,x_c3,y_c3,x_c4,y_c4,x_c5,y_c5,x_c6,y_c6,x_c7,y_c7,x_c8,y_c8,x_c9,y_c9;
	float n;
	float am,av,ae,aM,as,aj,aN,au,ap,ag;
	float xt1,yt1,t1,xt2,yt2,t2,xt3,yt3,t3;
	float i,j,z,a[1000],b[1000];

	initgraph(&gd,&gm,"D:\\tc\\bgi");

	printf("Enter number of revolutions : ");
	scanf("%f", &n);
	maxx=getmaxx();
	maxy=getmaxy();
	MaxColors = getmaxcolor() + 1;

	for(i=0;i<1000;i+=1)
	{
		a[i]=random(maxx);
		b[i]=random(maxy);
	}

//o	mouse();
//	getch();
//	clearviewport();
	for(ae=(n*6.28),z=0;ae>=0,z<(n*6.28);ae-=.1,z=z+.1)
	{
		clearviewport();
		for(i=0;i<800;i++)
			putpixel(a[i],b[i],random( MaxColors-1 )+1);
		setcolor(4);
		circle(320,240,15);
		setfillstyle(SOLID_FILL,4);
		floodfill(320,235,4);
		//MERCURY
		x_c1=(50*(cos(am)))+320;
		y_c1=(37.5*(sin(am)))+240;
		setcolor(14);
		circle(x_c1,y_c1,4);
		setfillstyle(1,14);
		floodfill(x_c1,y_c1,14);
		am-=.42;
		//VENUS
		x_c2=(80*(cos(av+0.69)))+320;
		y_c2=(60*(sin(av+0.69)))+240;
		setcolor(6);
		circle(x_c2,y_c2,6);
		setfillstyle(9,6);
		floodfill(x_c2,y_c2+3,6);
		av+=.16;
		//EARTH
		x_c3=(110*(cos(ae+4.55)))+320;
		y_c3=(82.5*(sin(ae+4.55)))+240;
		setcolor(1);
		circle(x_c3,y_c3,12);
		setfillstyle(1,1);
		floodfill(x_c3,y_c3,1);
/*		for(ae=0;ae<6.28;ae+=0.1)
		{
			x_m=(20*(cos(ag)));
			y_m=(20*(sin(ag)));
			circle(x_c3+x_m,y_c3+y+y_m,2);
		}*/
		//MARS
		x_c4=(140*(cos(aM)))+320;
		y_c4=(105*(sin(aM)))+240;
		setcolor(4);
		circle(x_c4,y_c4,7);
		setfillstyle(SOLID_FILL,4);
		floodfill(x_c4,y_c4+6,4);
		aM-=.05;
		//METIORITES
		for(t1=0;t1<6.28;t1+=.15){
		xt1=(151.75*cos(t1))+320;
		yt1=(114.25*sin(t1))+240;
		putpixel(xt1,yt1,14);
		}
		for(t2=0.05;t2<6.28+0.05;t2+=.15){
		xt2=(156.5*cos(t2))+320;
		yt2=(116.5*sin(t2))+240;
		putpixel(xt2,yt2,14);
		}
		for(t3=0.1;t3<6.28+0.1;t3+=.15){
		xt3=(161.25*cos(t3))+320;
		yt3=(118.75*sin(t3))+240;
		putpixel(xt3,yt3,14);
		}
		//JUPITER
		x_c5=(180*(cos(aj+1.09)))+320;
		y_c5=(135*(sin(aj+1.09)))+240;
		setcolor(6);
		circle(x_c5,y_c5,14);
		setfillstyle(LINE_FILL,6);
		floodfill(x_c5,y_c5+13,6);
		aj-=.008;
		//SATURN
		x_c6=(210*(cos(as+1.96)))+320;
		y_c6=(164.5*(sin(as+1.96)))+240;
		setcolor(8);
		circle(x_c6,y_c6,11);
		setfillstyle(SOLID_FILL,8);
		floodfill(x_c6,y_c6+10,8);
		setcolor(15);
		ellipse(x_c6,y_c6,140,400,15,5);
		as-=.003;
		//URANUS
		x_c7=(240*(cos(au+3.9)))+320;
		y_c7=(186*(sin(au+3.9)))+240;
		setcolor(13);
		circle(x_c7,y_c7,8);
		setfillstyle(SOLID_FILL,13);
		floodfill(x_c7,y_c7+7,13);
		au-=0.001;
		//NEPTUNE
		x_c8=(270*(cos(aN)))+320;
		y_c8=(208.5*(sin(aN)))+240;
		setcolor(12);
		circle(x_c8,y_c8,7.5);
		setfillstyle(SOLID_FILL,12);
		floodfill(x_c8,y_c8+6,12);
		aN-=0.0006;
		//PLUTO
		x_c9=(300*(cos(ap+3.14)))+320;
		y_c9=(230*(sin(ap+3.14)))+240;
		setcolor(9);
		circle(x_c9,y_c9,8.4);
		setfillstyle(SOLID_FILL,9);
		floodfill(x_c9,y_c9+7,9);
		ap-=0.0004;
		gotoxy(74,1);
		printf("n=%0.1f",(z/6.28));
		outtextxy(308,238,"SUN");
		delay(5);
	}
getch();
}