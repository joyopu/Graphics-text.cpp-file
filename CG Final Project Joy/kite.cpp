
#include<iostream>
#include<graphics.h>
int main()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");



   //For J
   line(50,50,70,50);
   line(70,50,70,90);
   line(70,90,55,80);

   //For O
   line(80,50,80,90);
   line(100,50,100,90);
   line(80,50,100,50);
   line(80,90,100,90);

   //For Y
   line(110,50,120,70);
   line(130,50,120,70);
   line(120,70,120,90);

    //For C
    line(50,110,50,150);
    line(50,110,70,110);
    line(50,150,70,150);

    //For S
    line(85,110,105,110);
    line(85,110,85,130);
    line(85,130,105,130);
    line(105,130,105,150);
    line(105,150,85,150);

    //For E
    line(120,110,120,150);
    line(120,110,135,110);
    line(120,130,135,130);
    line(120,150,135,150);

    //For 2
    line(150,110,170,110);
    line(170,110,170,130);
    line(170,130,150,130);
    line(150,130,150,150);
    line(150,150,170,150);

    //For 0
    line(185,110,185,150);
    line(185,110,200,110);
    line(185,150,200,150);
    line(200,110,200,150);

    //For 0
    line(215,110,215,150);
    line(215,110,230,110);
    line(215,150,230,150);
    line(230,110,230,150);

    //For 1
    line(245,110,245,150);

    //For 0
    line(260,110,260,150);
    line(260,110,275,110);
    line(260,150,275,150);
    line(275,110,275,150);

    //For 1
    line(290,110,290,150);

    //For 9
    line(310,110,330,110);
    line(330,110,330,130);
    line(310,110,310,130);
    line(310,130,330,130);
    line(330,130,330,150);

    //For 0
    line(340,110,340,150);
    line(355,110,355,150);
    line(340,110,355,110);
    line(340,150,355,150);


    //For 4
    line(360,110,360,130);
    line(375,110,375,150);
    line(360,130,375,130);

    //For 8
    line(390,110,390,150);
    line(410,110,410,150);
    line(390,110,410,110);
    line(390,150,410,150);
    line(390,130,410,130);


     setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    line(150,200,110,260);
    line(150,200,190,260);
    line(110,260,150,320);
    line(190,260,150,320);
    floodfill(150,260,YELLOW);

    setcolor(BLACK);
    line(150,200,150,320);
    setcolor(BLACK);
    line(110,260,190,260);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    line(150,320,130,350);
    line(150,320,170,350);
    line(130,350,170,350);
    floodfill(150,335,GREEN);






    getch();
    closegraph();
    return 0;
}







