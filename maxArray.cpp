#include<iostream>
using namespace std;
//largest in an array
int largest(int arr[],int n){
    if(n<0) return INT_MIN;
    return max(arr[n],largest(arr,n-1));
}
int main(){
    int a[]={414,52,61,7,181};
    int l=largest(a,sizeof(a)/sizeof(int)-1);
    cout<<"largest :"<<l<<endl;
}
