#include<iostream>
using namespace std;
void fuel(float distance)
{
float fuelamount;
fuelamount=10*distance;
cout<<"Fuel needed: "<<fuelamount;
}
main()
{
float distance;
cout<<"Enter the distance: ";
cin>>distance;
fuel(distance);
}
