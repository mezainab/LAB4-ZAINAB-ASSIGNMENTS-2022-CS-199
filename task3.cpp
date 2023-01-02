#include <iostream>
using namespace std;

void elligible(int age);
main()
{
 int age;
 while (true)
  {
  cout <<"Enter Age: ";
  cin >>age;
  elligible(age);
  }
}
void elligible(int age)
{
  if (age < 18) 
  {
  cout <<"Not Elligible" <<endl;
  }
  if (age > 17)
  {
  cout <<"Elligible" <<endl;
  }
}