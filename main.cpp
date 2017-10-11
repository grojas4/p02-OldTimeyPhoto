// Gerardo Rojas
#include<iostream>
#include<string>
#include"bitmap.h"
#include<vector>



using namespace std;

int main()
{
  // Ask user for an image name
  Bitmap image;
  Pixel rgb;
  vector <vector <Pixel> > bmp;
  string filename;  
  cout << "Enter machupicchu.bmp to see something cool!!!" << endl;

  cin >> filename;
  image.open(filename);
  bmp = image.toPixelMatrix();

  cout << "machupicchu.bmp has been loaded. It is " << bmp.size() << "pixels wide and " << bmp[0].size() << "pixels high. " << endl;

  for(int i=0; i<bmp.size(); i++)
  {
    for(int j=0; j<bmp[0].size(); j++)
    {
      int r = rgb.red;
      int g = rgb.green;
      int b = rgb.blue;
      int average = (r+g+b)/3;     
      rgb.red = average;
      rgb.green = average;
      rgb.blue = average;
    }
  }
  image.fromPixelMatrix(bmp);
  image.save("OldTimeyPhoto.bmp");


  
  //convert image pixels to grayscale (average of RGB)
  
 
  //save file as oldtimey.bmp
  
  
  //output image in grayscale 

  
  //Make sure that the image is readable if not let the user know that the file must be 24 bit  BMP file. ask to renter the image name 


  return 0;
}

