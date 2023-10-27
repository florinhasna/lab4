#include <iostream>
using namespace std;

int main(){
  cout << "Enter three integers: ";
  int x, y, z;
  cin >> x >> y >> z;

  if (x > y && y > z)
    cout << "The numbers are in descending order" << endl;
  else if (z > y && y > x)
    cout << "The numbers are in ascending order" << endl;
  else
    cout << "Not ordered" << endl;

  return 0;
}
