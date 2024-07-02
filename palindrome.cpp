// Check whether a given string or digit is palindrome or not by using typecast
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
#include<iostream>
#include<string>
using namespace std;
bool palindrome(string str){
    int l=str.length();
    if(l==0) return true;
    if(str[0]==str[l-1]) palindrome(str.substr(1,l-2));
    else return false;
}
bool digitPalindrome(int n){
    int temp=n;
    int rev=0;
    {
        if(n==0) return temp==rev;
        else{
            rev=rev*10+n%10;
            digitPalindrome(n/10);
        }

    }
}
int main(){
    if(palindrome("abeeba")) cout<<"palindrome";
    else cout<<"not palindrome";
}
