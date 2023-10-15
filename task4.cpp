#include<iostream>
using namespace std;
void add(int num1,int num2)
{
int sum;
sum=num1+num2;
cout<<"Addition: "<<sum<<endl;
}
void multiply(int num1,int num2)
{
int product;
product=num1*num2;
cout<<"Multiplication: "<<product<<endl;
}
void subtract(int num1,int num2)
{
int difference;
difference=num1-num2;
cout<<"Subtraction: "<<difference<<endl;
}
void divide(float num1,float num2)
{
float division;
division=num1/num2;
cout<<"Division: "<<division<<endl;
}
main()
{
int num1,num2;
char op;
cout<<"Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;
cout<<"Enter an operator (+, -, *, /): ";
cin>>op;
if(op=='+')
{
add(num1,num2);
}
if(op=='-')
{
subtract(num1,num2);
}
if(op=='*')
{
multiply(num1,num2);
}
if(op=='/')
{
divide(num1,num2);
}
}