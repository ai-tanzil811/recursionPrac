// Calculate the sum from 1 to n
#include<iostream>
using namespace std;
int sum(int x)
{
    if(x==0) return 0;
    else return x+sum(x-1);
}
int printFac(int x)
{
    if(x==0) return 1;
    else
    {
     return x * printFac(x-1); }
}
int main()
{
    int input;
    cin>>input;
    cout<<sum(input)<<endl;
    cout<<printFac(input);
    return 0;

}