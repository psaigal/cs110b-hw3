#include <iostream>
using namespace std;

int main() {
    int count;
    int arr [100];
    cout << "Please input a count." << endl;
    cin >> count;

    int num1 = 0;
    int num2 = 1;
    int sum  = 1;
    arr[0]   = 0;

    for (int i = 1; i <= count; i++)
    {
        arr[i] = sum;
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }

    for (int i = 0; i <= count; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}