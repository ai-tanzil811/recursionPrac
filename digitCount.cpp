#include<iostream>
using namespace std;
int countDigits(int m)
{
    if(m==0) return 0;
    else
    return 1+countDigits(m/10);
}
int main(){
    int input;
    cin>>input;
    cout<<countDigits(input);
    return 0;
}