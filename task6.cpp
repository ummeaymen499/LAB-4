#include<iostream>
using namespace std;
void PassOrFail(int score)
{
if(score>50)
{
cout<<"Pass";
}
else
{
cout<<"Fail";
}
}
main()
{
int score;
cout<<"Enter your score: ";
cin>>score;
PassOrFail(score);




}