// note:the given array is sorted and return -1 if not found and key is given by user
#include <iostream>
using namespace std;

int firstOcuurance(int a[], int n, int key)
{
    int start = 0, end = n - 1;
    /*int mid= (start + end)/2;
    for normal binary search its goes out of range for int if start and end = 2^31 -1;*/
    int mid = start + (end - start) / 2;

    int ans = -1; // initially

    while (start <= end)
    {
        if (key == a[mid])
        {
            ans = mid;     // if found then store in and for first occurance do ,below
            end = mid - 1; // to search left and remaining opertation is same
        }

        if (key > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
}
int lastOcuurance(int a[], int n, int key)
{
    int start = 0, end = n - 1;
    /*int mid= (start + end)/2;
    for normal binary search its goes out of range for int if start and end = 2^31 -1;*/
    int mid = start + (end - start) / 2;

    int ans = -1; // initially

    while (start <= end)
    {
        if (key == a[mid])
        {
            ans = mid;       // if found then store in and for last occurance do ,below
            start = mid + 1; // to search right and remaining opertation is same
        }

        if (key > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
}
int main()
{
    int key, a[7] = {1, 2, 2, 2, 2, 9, 10}; // ascending or descending
    cout << "enter key" << endl;
    cin >> key;
    int ans1 = firstOcuurance(a, 7, key);
    cout << "first ocuurance found index:" << ans1 << endl;

    int ans2 = lastOcuurance(a, 7, key);
    cout << "first ocuurance found index:" << ans2 << endl;
}