//  Write a function calc_sum using divide-and-conquer algorithm to calculate the sum of an array of 
// n integers. 
#include <iostream>
using namespace std;
int calc_sum(int arr[], int start, int end){
    if(start == end){
        return arr[start];
    }
    int mid = (start + end) / 2;
    return calc_sum(arr, start, mid) + calc_sum(arr, mid + 1, end);

}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << calc_sum(arr, 0, n - 1) << endl;
    return 0;
}