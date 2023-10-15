#include<iostream>
using namespace std;
void no_ofstickers(int n)
{
int no_ofstickers;
no_ofstickers=n*n*6;
cout<<"Number of stickers needed: "<<no_ofstickers<<endl;
}
main()
{
int n;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>> n;
no_ofstickers(n);
}


