// You are given a string which consists of opening and closing round brackets.
// Check whether it is a balanced bracket sequence using recursion.
// Input: The only line of input contains a string. Each character in the string will
// be ‘(’or ‘)’.
// Output: Print “YES” if the bracket sequence is balanced, and “NO” otherwise.
#include<iostream>
#include<string>
using namespace std;
bool isBalanced(string str){
    int l=str.length();
    if(l==0) return true;
    if(str[0]=='(' && str[l-1]==')') isBalanced(str.substr(1,l-2));
    else return false;
}
int main(){
    if(isBalanced("()")) cout<<"YES";
    else cout<<"NO";
    return 0;
}