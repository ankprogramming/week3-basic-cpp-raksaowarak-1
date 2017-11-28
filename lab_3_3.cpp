#include <iostream>

using namespace std;

int main() {
 const float pi = 3.14315926536;
 float r;
 float h=15;
 float Area;
 float Around;
 float Cylinder ;

 cout << "Please enter radius : ";
 cin>> r;
 Area = pi *r*r;
 cout << "Area of Circle : " << Area <<endl;

 Around = 2 *pi*r;
 cout << "Around of Circle : " << Around <<endl;

 Cylinder = pi *r*h;
 cout << "Cylinder of Circle : " << Cylinder <<endl;
return 0;
}
