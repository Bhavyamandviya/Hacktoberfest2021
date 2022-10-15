#include <iostream>
using namespace std;
int search(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e=mid-1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid]>key)
        {
            e = mid - 1;
        }
        
        mid = s + (e - s) / 2;
    }
    return ans;
}
int secondsearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[10] = {1, 3, 4, 7, 7,4,5,6,5,7};

    
    cout<<"first occurence"<<search(arr,10,7)<<endl;
    cout << "last occurence" << secondsearch(arr, 10, 7) << endl;
    return 0;
}

/* total no. of occurence =( last index - first index)+1*/
