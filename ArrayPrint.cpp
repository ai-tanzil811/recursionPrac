#include<iostream>
using namespace std;

void printArray(int arr[],int idx){
    if(idx<0) return;
    printArray(arr,idx-1);
    cout<<arr[idx]<<endl;
}
int main(){
    int a[]={4,5,6,7,8,9,10};
    printArray(a,sizeof(a)/sizeof(a[0]));
}

