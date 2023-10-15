#include<iostream>
using namespace std;
void evenodd(int num)
{
if(num%2==0)
{
cout<<"Number " <<num<< " is even";
}
else
{
cout<<"Number " <<num<< " is odd";
}
}
main()
{
int num;
cout<<"Enter a number: ";
cin>>num;
evenodd(num);

}