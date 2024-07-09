// Count total vowels in a string using divide and conquer technique
#include<iostream>
#include<string>
using namespace std;
int countVowels(string str, int start, int end){
    if(start == end){
        if(str[start] == 'a' || str[start] == 'e' || str[start] == 'i' || str[start] == 'o' || str[start] == 'u'){
            return 1;
        }else{
            return 0;
        }
    }
    int mid = (start + end) / 2;
    int left = countVowels(str, start, mid);
    int right = countVowels(str, mid + 1, end);
    return left + right;
}
int main(){
    string str;
    cin >> str;
    cout << countVowels(str, 0, str.length() - 1) << endl;
    return 0;
}