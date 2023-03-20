#include <iostream>
long Factorial(int no);
long nCr(int n, int r);
int main() {
 int n, r;
  
 std::cout << "Enter a value for n ";
 std::cin >> n;
  
 std::cout << "Enter a value for r ";
 std::cin >> r;
  
 std::cout << "nCr = ";
 std::cout << nCr(n,r);
 std::cout << std::endl;
}
long Factorial(int no)
{
  int i;
  long fact;
  for(i=1; i <= no ; i++)
    {
      fact = fact * i;
    }
  return fact;
}
long nCr(int n, int r)
{
  long nCr;
  long t = n - r;
    nCr =Factorial(n) / Factorial(r) * Factorial(t);
  return nCr;
}
