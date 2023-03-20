#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  float salary, netSalary;
  int etype, otHrs, otRate;

  cout << ("enter employee type: ");
  cin >> etype;

  cout << ("enter salary: ");
  cin >> salary;

  cout << ("enter otHrs: ");
  cin >> otHrs;

  switch(etype)
    {
      case 1: otRate = 1000;
            break;
      case 2: otRate = 1500;
            break;
      default: otRate = 1700;
    }
  netSalary = salary + otHrs* otRate;
  cout << ("net salary is ") << netSalary << endl;

}