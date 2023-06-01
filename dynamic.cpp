#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<direct.h>
#include<time.h>

int main(int argc,char const *argv[]){
    int gm = DETECT,yd;
    initgraph(&gm,&yd,(char*)"");


for(int i = 0;i<2;i++){
for(int j = 0;j<24;j++){
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


//==================================================SUN-RISE=================================================
    if(j == 6){
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    arc(178,113,0,180,30);
    floodfill(171,109,WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(55,55,WHITE);
    //=================================================SUNRISE===================================================
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BLUE);
    line(0,40,750,40);
    floodfill(0,0,WHITE);
    }
//==================================================SUN-SET==================================================
    if(j == 18){
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    arc(528,113,0,180,30);
    floodfill(528,113,WHITE);

    setfillstyle(SOLID_FILL,BLACK);
    floodfill(55,55,WHITE);
    //=================================================SUNSET===================================================
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BLUE);
    line(0,50,750,50);
    floodfill(0,0,WHITE);
    }
    if(j==0){
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLACK);
        line(0,40,750,40);
        floodfill(0,0,WHITE);

    }
    if(j==1){
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLACK);
        line(0,25,750,25);
        floodfill(0,0,WHITE);

    }
    if(j==2){
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLACK);
        line(0,10,750,10);
        floodfill(0,0,WHITE);

    }
    if(j==3){
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);

    }
    if(j==4){
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        line(0,70,750,70);
        floodfill(0,0,WHITE);

    }
    if(j==5){
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        line(0,50,750,50);
        floodfill(0,0,WHITE);

    }
    if(j==7){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(207,80,30);
        floodfill(207,80,WHITE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        line(0,25,750,25);
        floodfill(0,0,WHITE);

    }
    if(j==8){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(236,60,30);
        floodfill(236,60,WHITE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        line(0,10,750,10);
        floodfill(0,0,WHITE);

    }
    if(j==9){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(265,50,30);
        floodfill(265,50,WHITE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(55,55,WHITE);

    }
    if(j==10){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(294,40,30);
        floodfill(294,40,WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        line(0,70,750,70);
        floodfill(0,0,WHITE);

    }
    if(j==11){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(323,30,30);
        floodfill(323,30,WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        line(0,50,750,50);
        floodfill(0,0,WHITE);
        floodfill(400,0,WHITE);

    }
    if(j==12){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(350,30,30);
        floodfill(350,30,WHITE);


        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        line(0,40,750,40);
        floodfill(0,0,WHITE);
        floodfill(400,0,WHITE);

    }
    
    if(j==13){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(379,30,30);
        floodfill(379,30,WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        line(0,25,750,25);
        floodfill(0,0,WHITE);
        floodfill(420,0,WHITE);

    }
    if(j==14){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(408,40,30);
        floodfill(408,40,WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        line(0,10,750,10);
        floodfill(0,0,WHITE);

    }
    if(j==15){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(437,50,30);
        floodfill(437,50,WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);

    }
    if(j==16){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(466,60,30);
        floodfill(466,60,WHITE);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        line(0,70,750,70);
        floodfill(0,0,WHITE);

    }
    if(j==17){
//==================================================SUN======================================================
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(495,80,30);
        floodfill(495,80,WHITE);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        line(0,50,750,50);
        floodfill(0,0,WHITE);

    }
    
    if(j==19){

        setfillstyle(SOLID_FILL,BLACK);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        line(0,25,750,25);
        floodfill(0,0,WHITE);

    }
    if(j==20){
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLUE);
        line(0,10,750,10);
        floodfill(0,0,WHITE);

    }
    if(j==21){
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(55,55,WHITE);

    }
    if(j==22){
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLACK);
        line(0,70,750,70);
        floodfill(0,0,WHITE);

    }
    if(j==23){
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(55,55,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,BLACK);
        line(0,50,750,50);
        floodfill(0,0,WHITE);

    }
    





//=================================================TIME======================================================
    int coordinatesforHourX[24] = {0,20,34,40,34,20,0,-20,-34,-40,-34,-20,0,20,34,40,34,20,0,-20,-34,-40,-34,-20};
    int coordinatesforHourY[24] = {-40,-34,-20,0,20,34,40,34,20,0,-20,-34,-40,-34,-20,0,20,34,40,34,20,0,-20,-34}; 

     //time related variables
    time_t rawTime;
    struct tm * currentTime;
    char a[100];
    
    //to get mid point of graph

    int midx = 100;
    int midy = 300;
    int IMS;    //variable for storing hour,minute and second info
    //time related functions    
    rawTime = time(NULL);
    currentTime = localtime(&rawTime);


    setcolor(LIGHTGREEN);
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
    setcolor(WHITE);
    line(midx,midy,midx+coordinatesforHourX[j],midy+coordinatesforHourY[j]);

    delay(1000);
    cleardevice();


    

    }
    }
getch();
            
        
    




    
}
