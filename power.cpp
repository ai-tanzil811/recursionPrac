#include<iostream>
#include<math.h>
using namespace std;
double power(int a,int b)
{
    if(abs(b)==0) return 1;
    else return a*power(a,abs(b-1));
    
}
void printPower(int a,int b){
    int x=power(a,abs(b));
    cout<<a<<" to the power of "<<b<<" : ";
    if(b<0) cout<<"1/"<<x;
    else cout<<x;
}

int main()
{
    int c1,c2;
    cin>>c1>>c2;
    printPower(c1,c2);
    return 0;
}