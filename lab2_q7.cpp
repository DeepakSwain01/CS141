#include <iostream>
using namespace std;

int main()
{
  double ang1, ang2;
  cout << "Enter 2 angles: ";
  cin >> ang1 >> ang2;
  cout << "Third angle: " << 180-(ang1+ang2);
  return 0;
}
