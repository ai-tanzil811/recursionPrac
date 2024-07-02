#include <iostream>
using namespace std;
int fibonacci(int x)
{
    if (x <= 1)
        return x;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}
int main()
{
    int input;
    cin >> input;
    cout << fibonacci(input);
    return 0;
}