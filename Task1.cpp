#include <iostream>
using namespace std;
void sum(int number1 , int number2);
main()
{
int number1, number2;

cout <<"Number one is: ";
cin >>number1;
cout <<"Number two is: ";
cin >>number2;
    sum(number1, number2);

cout <<"Number one is: ";
cin >>number1;
cout <<"Number two is: ";
cin >>number2;
    sum(number1, number2);
   
}
void sum(int number1 ,int number2)
{
int sum;
sum = number1+number2;
cout <<"Sum is: "<<sum <<endl;

}