// Calculate the sum of digits of a given number n.
#include<iostream>
using namespace std;
int countDigits(int m)
{
    if(m==0) return 0;
    else
    return m%10+countDigits(m/10);
}
int main(){
    int input;
    cin>>input;
    cout<<countDigits(input);
    return 0;
}