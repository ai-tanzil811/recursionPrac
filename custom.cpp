// Given an integer n, you have to check if 𝑛==4^𝑥 .
// If 𝑛==4^𝑥 , return true. Else, return false.
#include<iostream>
#include <math.h>
using namespace std;
bool isPowerOfFour(int n)
{
    if(n==1) return true;
    if(n%4!=0) return false;
    return isPowerOfFour(n/4);
}
int main()
{
    int input;
    cin>>input;
    cout<<isPowerOfFour(input);
    return 0;
}