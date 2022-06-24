#include <iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;

int i;

class cycle
{
	
	public:
		void body();
	
};

void cycle::body()
		{
		 int i=0;
	     for(i=0;i<1300;i++)
		  { 
		    // For cycle
		    setcolor(WHITE);
		 	line(50+i,555,100+i,555);
        	line(75+i,525,125+i,525);
        	line(50+i,555,75+i,525);
         	line(100+i,555,125+i,525);
         	line(150+i,555,100+i,495);
         	line(75+i,525,75+i,520);
        	line(70+i,520,80+i,520);
        	line(80+i,495,100+i,495);
        	
        	// For cycle Wheels
        	circle(150+i,555,30);
           	circle(50+i,555,30);
	
           	setcolor(RED);
           	circle(150+i,555,27);
           	circle(50+i,555,27);
           	
           	//For Roads and Road lines
           	setcolor(WHITE);
        	line(0,536,getmaxx(),536);
        	line(0,650,getmaxx(),650);
           	line(0,538,getmaxx(),538);
	        line(0,652,getmaxx(),652);
	       	rectangle(0,590,50,596);
           	rectangle(100,590,150,596);
        	rectangle(200,590,250,596);
        	rectangle(300,590,350,596);
        	rectangle(400,590,450,596);
         	rectangle(500,590,550,596);
        	rectangle(600,590,650,596);
        	rectangle(700,590,750,596);
         	rectangle(800,590,850,596);
        	rectangle(900,590,950,596);
         	rectangle(1000,590,1050,596);
        	rectangle(1100,590,1150,596);
            rectangle(1200,590,1250,596);
            
            
			//for windmills
			setcolor(YELLOW);
            rectangle(400,200,405,536);
            rectangle(800,200,805,536);
              
              setcolor(WHITE);
            line(403,150,405,200);
            line(405,150,400,200);
            line(403,205,350,230);
            line(400,200,350,230);
            line(403,205,450,230);
            line(450,230,405,200);	
            line(803,150,805,200);
            line(805,150,800,200);
            line(803,205,750,230);
            line(800,200,750,230);
            line(803,205,850,230);
            line(850,230,805,200);
              
              
        	delay(10);
        	cleardevice();
          };
		}



int main()
{
	
	
	int gm,i,a;
	
	
	initwindow(1300,750);


	cycle c;
	c.body();
	
	getch();
	return 0;
	
}
