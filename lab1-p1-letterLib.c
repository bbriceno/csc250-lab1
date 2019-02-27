//Prototype function drawCharP used to draw letter 'P'


#include "gfx2.h"
#include <math.h>
#include "lab1-p1-letterLib.h"

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

