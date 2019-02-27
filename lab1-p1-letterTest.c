//Barbara, Briceno CSC250-SP19
	//Lab1   
    #include <stdio.h>
	#include "gfx2.h"
    #include <math.h>
void drawCharP(double ulCornerX, double ulCornerY, double side)
{

    // calculate x,y coordinates of all corners
   double height = side;
   double width = height*.75;
   double ulx = width - width;
   double uly = height - height;
   double llx = width - width;
   double lly = height;
   double urx = width;
   double ury = height - height;
   double lrx = width;
   double lry = height;

   gfx_line(ulCornerX+width-width,ulCornerY+height-height,ulCornerX+.4*width,ulCornerY+.55*height);
   gfx_line(ulCornerX+.4*width,ulCornerY+.55*height,ulCornerX+.4*width,ulCornerY+height);
   gfx_line(ulCornerX+.4*width,ulCornerY+height,ulCornerX+.6*width,ulCornerY+height);
   gfx_line(ulCornerX+.6*width,ulCornerY+height,ulCornerX+.6*width,ulCornerY+.55*height);
   gfx_line(ulCornerX+.6*width,ulCornerY+.55*height,ulCornerX+urx,ulCornerY+ury);
   gfx_line(ulCornerX+width,ulCornerY+height-height,ulCornerX+.8*width,ulCornerY+height-height);
   gfx_line(ulCornerX+.8*width,ulCornerY+height-height,ulCornerX+.5*width,ulCornerY+.375*height);
   gfx_line(ulCornerX+.5*width,ulCornerY+.375*height,ulCornerX+.2*width,ulCornerY+height-height);
   gfx_line(ulCornerX+.2*width,ulCornerY+height-height,ulCornerX+width-width,ulCornerY+height-height);

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
		drawCharP(170,170,40);
		
		
		while(1) {
			// Wait for the user to press a character.
			c = gfx_wait();
	

			// Quit if it is the letter p.
			if(c=='p') break;
		    }
		
        }
	    


