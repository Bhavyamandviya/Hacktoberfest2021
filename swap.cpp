#include <iostream>
using namespace std;

void reversearry(int arr[], int n)
{
    for (int i = 0; i < n; i=i+2)
    {
        if((i+1)<n)
        swap(arr[i], arr[i+1]);
    }
    
}

void arrayp(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 7};
    int brr[5] = {1, 2, 3, 4, 5};

    reversearry(arr, 6);
    reversearry(brr, 5);

    arrayp(arr, 6);
    arrayp(brr, 5);
    return 0;
}
