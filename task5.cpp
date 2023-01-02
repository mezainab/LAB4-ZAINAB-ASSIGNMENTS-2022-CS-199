#include <iostream>
using namespace std;

void calculatebill(string everyday, int price);

main()
{
  while(true)
 {

   string day;
   int amount;

   cout << "Enter the amount";
   cin >>amount;
   cout << "Enter the day";
   cin >>day;

   calculatebill(day, amount);
  }
}

  void calculatebill(string everyday, int price)
 {
  int calculatebill;
  calculatebill = price * 0.9;

  float calculatebill2;
  calculatebill2 = price * 0.95;

  if(everyday == "sunday")
  {
   cout <<"The total payable amount is: "<<calculatebill<<endl;
  }

  if(everyday != "sunday")
  {
   cout <<"The total payable amount is: "<<calculatebill2<<endl;
  }
}

