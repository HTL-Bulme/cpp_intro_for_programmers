#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>

int main(); {
  // TODO: fix this program
  double radius
  cout << "Enter a radius: ";
  cin >> radius;
  double area(radius * radius * M_PI);
  double perimeter(2 * radius * M_PI);
  cout << std::setprecision(2) << std::fixed;
  cout << "The circle has an area of " << area << "\n";
  cout << "The perimeter of this circle is " << perimeter << "\n";
  return 0
}
