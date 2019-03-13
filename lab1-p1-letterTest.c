//Barbara, Briceno CSC250-SP19
	//Lab1   
    #include <stdio.h>
	#include "gfx2.h"
    #include <math.h>
void drawCharP(double ulCornerX, double ulCornerY, double side)
{

    // calculate x,y coordinates of all corners
   double height = side;
   double ucornery = ulCornerY - ulCornerY;
   double ucornerx = ulCornerX - ulCornerX;
   double lcornery = ulCornerY;
   double lcornerx = ulCornerX - ulCornerX;
   double lrcornery = ulCornerY;
   double lrcornerx = ulCornerX * 1/3;
   double mmcornery = ulCornerY * 1/2;
   double mmcornerx = ulCornerX * 1/3;
   double mrcornery = ulCornerY * 1/2;
   double mrcornerx = ulCornerX * 4/5;
   double mlcornery = ulCornerY * 2/5; 
   double mlcornerx = ulCornerX; 
   double upcornery = ulCornerY *1/10; 
   double upcornerx = ulCornerX; 
   double trcornery = ulCornerY - ulCornerY; 
   double trcornerx = ulCornerX * 4/5;
   double ilcornery = ulCornerY * 1/10;
   double ilcornerx = ulCornerX * 1/3;
   double ibcornery = ulCornerY * 2/5;
   double ibcornerx = ulCornerX * 1/3;
   double ircornery = ulCornerY * 2/5;
   double ircornerx = ulCornerX * .73;
   double mbcornery = ulCornerY * 3/10;
   double mbcornerx = ulCornerX * 4/5;
   double mtcornery = ulCornerY * 1/5;
   double mtcornerx = ulCornerX * 4/5;
   double itcornery = ulCornerY * 1/10;
   double itcornerx = ulCornerX * .73;

   gfx_line(ucornerx, ucornery, lcornerx, lcornery);
   gfx_line(lcornerx, lcornery, lrcornerx, lrcornery); 
   gfx_line(lrcornerx, lrcornery, mmcornerx, mmcornery);
   gfx_line(mmcornerx, mmcornery, mrcornerx, mrcornery);
   gfx_line(mrcornerx, mrcornery, mlcornerx, mlcornery);
   gfx_line(mlcornerx, mlcornery, upcornerx, upcornery);
   gfx_line(upcornerx, upcornery, trcornerx, trcornery);
   gfx_line(ilcornerx, ilcornery, ibcornerx, ibcornery);
   gfx_line(ibcornerx, ibcornery, ircornerx, ircornery);
   gfx_line(ircornerx, ircornery, mbcornerx, mbcornery);  
   gfx_line(mbcornerx, mbcornery, mtcornerx, mtcornery);
   gfx_line(mtcornerx, mtcornery, mtcornerx, mtcornery);
   gfx_line(mtcornerx, mtcornery, itcornerx, itcornery);
   gfx_line(itcornerx, itcornery, ilcornerx, ilcornery);
}

	int main(int argc, char* argv[])
	{
	    //sets screen size 400 x 400
		int ysize = 400;
		int xsize = 400;
	
		char c;

		// Open a new window for drawing.
		gfx_open(xsize,ysize,"Example Graphics Program");
	
		// Set the current drawing color 
		gfx_color(200,0,0);
		drawCharP(20,20,200);
		gfx_color(0,0,250);
		drawCharP(40,40,40);
		gfx_color(250,0,250);
		drawCharP(80,80,40);
		gfx_color(0,250,0);
		drawCharP(125,125,40);
		gfx_color(100,100,100);
		drawCharP(100,75,100);
		
		
		while(1) {
			// Wait for the user to press a character.
			c = gfx_wait();
	

			// Quit if it is the letter p.
			if(c=='p') break;
		    }
		
        }
	    


