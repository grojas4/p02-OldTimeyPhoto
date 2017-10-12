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
  // check if file is in .bmp format
  

  cout << "machupicchu.bmp has been loaded. It is " << bmp.size() << "pixels wide and " << bmp[0].size() << "pixels high. " << endl;

  bool validBmp = image.isImage();
  while( validBmp == true)
  {
  //convert image pixels to grayscale (average of RGB)

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
  }
  while(validBmp == false)
  {
    cout << "The file is not in the correct format. Please make sure its a >BMP file. " << endl;
  }
  //save file as oldtimey.bmp
  
  image.fromPixelMatrix(bmp);
  image.save("OldTimeyPhoto.bmp");


  
  
 
  
  

  


  return 0;
}

