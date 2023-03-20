#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int no;
  long fac;

  cout << ("enter a number: ");
  cin >> no;

  fac = 1;
  for(int r=no; r>=1; r--)
    {
      fac = fac * r;
    }
  cout << ("Factorial of ") << no << (" is ") << fac << endl;
  return 0;
}