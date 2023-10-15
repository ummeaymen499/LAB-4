#include<iostream>
using namespace std;
void add(int num1,int num2)
{
int sum;
sum=num1+num2;
cout<<"Sum: "<<sum<<endl;
}
main()
{
int a,b;
cout<<"Enter number 1: ";
cin>>a;
cout<<"Enter number 2: ";
cin>>b;
char op;
cout<<"Enter Operator(+,-,/,*): ";
cin>>op;
if(op == '+' )
{
add(a,b);
}

}

 