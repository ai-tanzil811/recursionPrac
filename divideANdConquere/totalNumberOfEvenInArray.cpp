#include <iostream>
using namespace std;
int counter(int array[], int start, int end)
{
    if (start == end)
    {
        return (array[start]%2==0)? 1:0;
    }
    else
    {
        int mid = (start + end) / 2;
        int c1 = counter(array, start, mid);
        int c2 = counter(array, mid + 1, end);
        return c1 + c2;
    }
}

int main()
{
    int input;
    cin>>input;
    int array[input];
    for(int i = 0; i < input; i++)
    {
        cin >> array[i];
    }
    cout<<counter(array,0,input-1);


    return 0;
}