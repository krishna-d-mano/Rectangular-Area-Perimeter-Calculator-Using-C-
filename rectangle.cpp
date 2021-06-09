// calculate the permiter and area of a triangle
// from the main function call the perimeter & area functions
// the main should only display the perimeter & area
// the main also needs to call a function which gets the input for the rect
#include <iostream>
using namespace std;

int calcArea(int width, int height)
{
  int area = 0;
  area = width * height;
  return area;
}

int calcPerimeter(int width, int height)
{
  int perimeter = 0;
  perimeter = 2 * (width + height);
  return perimeter;
}

void getRectInput(int &w, int &h) {
  cout << "Enter the width of the rectangle: ";
  cin >> w;
  cout << "Enter the height of the rectangle: ";
  cin >> h;
}

int main()
{
  int width = 0;
  int height = 0;
  getRectInput(width, height);
  int perimeter = calcPerimeter(width, height);
  int area = calcArea(width, height);
  cout << "The area of the rectangle is " << area << " and the perimeter is " << perimeter << endl;
  return 0;
}