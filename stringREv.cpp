#include<iostream>
#include<string>
using namespace std;
void revPrint(string X)
{
    int n=0;
    if(X[n] == '\0')
    return;
    else
    revPrint(X.substr(n + 1));
    cout<<X;
}
int main()
{
    string input;
   getline(cin,input);
    revPrint(input);
    return 0;
}