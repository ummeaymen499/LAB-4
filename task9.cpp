#include<iostream>
using namespace std;
void fuel(float distance)
{
float calculatefuel;
calculatefuel=distance*10;
if(calculatefuel>100)
{
cout<<"Fuel needed: "<<calculatefuel<<endl;
}
else
{
cout<<"Fuel needed: 100";
}
}
main()
{
float distance;
cout<<"Enter the distance: ";
cin>>distance;
fuel(distance);
}

