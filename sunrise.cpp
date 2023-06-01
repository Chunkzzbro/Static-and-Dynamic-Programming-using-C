#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<direct.h>
#include<time.h>

int main(int argc,char const *argv[]){
    int gm = DETECT,yd;
    initgraph(&gm,&yd,(char*)"");

//================================================Mountain=================================================//

    //1st triangle
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(0,150,100,75);
    line(100,75,200,150);


    //2nd triangle
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(175,131,275,75);
    line(275,75,375,150);

    
    //3rd triangle
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(350,131,450,75);
    line(450,75,550,150);
    
    //4th triangle
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(525,131,600,75);
    line(600,75,750,180);

    line(0,150,750,150);    //Bottom line of mountain
    floodfill(100,136,WHITE);   //Take any two coordinates of 1st Triangle
    floodfill(275,136,WHITE);   //2nd triangle
    floodfill(450,136,WHITE);   //3rd triangle
    floodfill(600,136,WHITE);   //4th triangle


//==================================================SUN======================================================
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    arc(178,113,0,180,30);
    floodfill(171,109,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    floodfill(55,55,WHITE);

//=================================================SUNRISE===================================================
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    line(0,50,750,50);
    floodfill(0,0,WHITE);



//=================================================TIME======================================================
    int coordinatesforHourX[24] = {0,20,34,40,34,20,0,-20,-34,-40,-34,-20,0,20,34,40,34,20,0,-20,-34,-40,-34,-20};
    int coordinatesforHourY[24] = {-40,-34,-20,0,20,34,40,34,20,0,-20,-34,-40,-34,-20,0,20,34,40,34,20,0,-20,-34};
    int coordsforMinSecX[60] = {0,7,14,21,28,35,42,47,52,56,61,64,66,68,69,70,
                                69,68,66,64,61,56,52,47,42,35,28,21,14,7,0,
                                -7,-14,-21,-28,-35,-42,-47,-52,-56,-61,-64,-66,-68,-69,-70
                                -69,-68,-66,-64,-61,-56,-52,-47,-42,-35,-28,-21,-14,-7};
    int coordsforMinSecY[60] = {-70,-69,-68,-66,-64,-61,-56,-52,-47,-42,-35,-28,-21,-14,-7,0,
                                7,14,21,28,35,42,47,52,56,61,64,66,68,69,70,
                                69,68,66,64,61,56,52,47,42,35,28,21,14,7,0,
                                -7,-14,-21,-28,-35,-42,-47,-52,-56,-61,-64,-66,-68,-69};


    int midx = 100;
    int midy = 300;

    //Drawing the circle
    setcolor(WHITE);
    circle(midx,midy,100);

    outtextxy(midx+40,midy-73,"1");
    outtextxy(midx+73,midy-40,"2");
    outtextxy(midx+85,midy-7,"3");
    outtextxy(midx+71,midy+38,"4");
    outtextxy(midx+40,midy+68,"5");
    outtextxy(midx-3,midy+80,"6");
    outtextxy(midx-45,midy+68,"7");
    outtextxy(midx-76,midy+35,"8");
    outtextxy(midx-90,midy-7,"9");
    outtextxy(midx-83,midy-42,"10");
    outtextxy(midx-53,midy-73,"11");
    outtextxy(midx-6,midy-85,"12");

    setcolor(RED);
    line(midx,midy,midx+coordinatesforHourX[6],midy+coordinatesforHourY[6]);
    setcolor(YELLOW);
    line(midx,midy,midx+coordsforMinSecX[0],midy+coordsforMinSecY[0]);
    setcolor(GREEN);
    line(midx,midy,midx+coordsforMinSecX[0],midy+coordsforMinSecY[0]);

    getch();

    
}
