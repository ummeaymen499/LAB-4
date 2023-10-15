#include<iostream>
using namespace std;
void priceafterdiscount(int total,string day)
{
float discount;
if(day=="Sunday")
{
discount=total-total*10/100;
}
else
{
discount=total;
}
cout<<"Payable Amount: $"<<discount<<endl;
}

main()
{
string day;
int total;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>total;
priceafterdiscount(total,day);

}


