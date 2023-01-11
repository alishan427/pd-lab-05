#include <iostream>
using namespace std;
int x = 15;
void myFunction()
{  cout << "value of x: "<< x << endl;
  int x = 20;
}
main()
{  myFunction();
  int x = 30;
  cout << "value of x: " << x << endl;
  myFunction();
}