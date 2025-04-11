#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

char IncFlag;
int PolygonPoints[3][2] =
{{10, 100}, {110, 100}, {110, 200}};

void PolyLine()
{
    int iCnt;
    cleardevice();
    line(0, 240, 640, 240);
    line(320, 0, 320, 480);
    for (iCnt = 0; iCnt < 3; iCnt++)
    {
        line(PolygonPoints[iCnt][0], PolygonPoints[iCnt][1], PolygonPoints[(iCnt + 1) % 3][0], PolygonPoints[(iCnt + 1) % 3][1]);
    }
}

void Reflect()
{
    int iCnt;
    for (iCnt = 0; iCnt < 3; iCnt++)
    {
        PolygonPoints[iCnt][0] = (640 - PolygonPoints[iCnt][0]);
    }
}

int main()
{
    int gd = DETECT, gm;
    int iCnt;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    for (iCnt = 0; iCnt < 3; iCnt++)
    {
        PolygonPoints[iCnt][0] += 320;
        PolygonPoints[iCnt][1] = 240 - PolygonPoints[iCnt][1];
    }

    Reflect();
    PolyLine();
    getch();

    closegraph();
    return 0;
}


