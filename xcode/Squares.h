//
//  Squares.h
//  MoCapProject1
//
//  Created by Amayrani Luna on 9/8/20.
//
#ifndef Squares_h
#define Squares_h
using namespace cinder;

class squares{
private:
    int n;
    
public:
    squares(){
        n = 10;
    }
    
   void draw(cv::Mat frameDiff)
   {
       int squareWidth = app::getWindowWidth() / n;
       int squareHeight = app::getWindowHeight() / n;
       
       //creating squares
       for(int i = 0 ; i < n ; i++){
           for(int j = 0 ; j < n ; j++){
               int x1 = i * squareWidth;
               int x2 = x1 + squareWidth;
               int y1 = j * squareHeight;
               int y2 = y1 + squareHeight;
               
               Rectf curSquare = Rectf(x1, y1, x2, y2);
               int sum = 0;
               //for curSquare){
               
               //}
               
               gl::color(i/(float)n, j/(float)n, 1, 1);
               
               
               gl::drawSolidRect(curSquare);
           }
       }
 
       
        
 }
 /*
 divide(int n)
 {
    //makes squares
    if(n <= 1 ){return;}
    else
    {
        //draw N x N squares
    }
 }
 
 
 int count()
 {
    //counts white pixels in each square
    (iterate through all the squares)
    {
        int whitePixels = 0;
        if(pixel.color == (0,0,0,0))
        {
            whitePixels++;
        }
    }
    return whitePixels;
 
 }
 
 void color()
 {
    //colors squares
    (iterate through all the squares)
    {
        if(whitePixels > 0)
        {
            change square color to blue
        }
    }
 }
   

   
*/
};


#endif // Squares_h
