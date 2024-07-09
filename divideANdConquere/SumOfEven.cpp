#include<iostream>
using namespace std;
int evenSum(int array[], int start, int end) {
    if (start > end) return 0; 
    if (start == end) {
        return array[start] % 2 == 0 ? array[start] : 0; 
    } else {
        int mid = (start + end) / 2; 
        int sumRight = evenSum(array, start, mid);
        int sumLeft = evenSum(array, mid + 1, end);
        return sumLeft + sumRight; 
    }
}
int main()
{
    int array[]={ 1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<evenSum(array,0,size-1);
    return 0;
}