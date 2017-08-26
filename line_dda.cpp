#include<stdio.h>
#include<graphics.h>
#include<iostream>
#include<complex.h>
using namespace std;

int main()
{
	int x0,y0,x1,y1,i,len1,len2,steps,gdriver=DETECT,gmode,errorcode;
	float incx,incy,x,y;
	
	//clrscr();
	cout << "enter the value of x0,y0,x1,y1"<< endl;
	cin >>x0>>y0>>x1>>y1;
	initgraph(&gdriver,&gmode,NULL);
	
	len1 = abs(x1-x0);
	len2 = abs(y1-y0);
	if(len1>len2)
		steps = len1;  //m>1 i.e slope is greater than 1 in this case
	else
		steps = len2;  //m<1 i.e slope is less than 1 in this case
	incx = (x1-x0)/(float)steps;
	incy = (y1-y0)/(float)steps;
	x = x0;
	y = y0;
	for(i=1;i<=steps;i++) {
		putpixel(x,y,WHITE);
		x=x+incx;
		y=y+incy;
	}
	getch();
	return 0;
}
