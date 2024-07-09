#include <iostream>
using namespace std;
int merge(int arr[], int start, int mid, int end){
    int i = start, j = mid + 1, k = 0;
    int temp[end - start + 1];
    int count = 0;
    while(i <= mid && j <= end){
        if(arr[i] > arr[j]){
            count += mid - i + 1;
            temp[k++] = arr[j++];
        }else{
            temp[k++] = arr[i++];
        }
    }
    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= end){
        temp[k++] = arr[j++];
    }
    for(int i = start, k = 0; i <= end; i++, k++){
        arr[i] = temp[k];
    }
    return count;
}
int count_inversion(int arr[], int start, int end){
    if(start >= end){
        return 0;
    }
    int mid = (start + end) / 2;
    int count = 0;
    count += count_inversion(arr, start, mid);
    count += count_inversion(arr, mid + 1, end);
    count += merge(arr, start, mid, end);
    return count;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "#inversions: " << count_inversion(arr, 0, n - 1) << endl;
    return 0;
}