#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
setcolor(5);
rectangle(60,80,150,200);
rectangle(95,140,120,200);
line(60,80,100,15);
line(100,15,150,80);
circle(100,60,10);
getch();
closegraph();
}
