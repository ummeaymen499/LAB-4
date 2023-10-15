#include<iostream>
using namespace std;
void feet(float inch)
{
float feet;
feet=inch/12;
cout<<"Equivalent in feet: "<<feet<<endl;
}
main()
{
float inch;
cout<<"Enter the measurement in inches: ";
cin>> inch;
feet(inch);
}


