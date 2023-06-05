#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int start = 0, end = n - 1;
    /*int mid= (start + end)/2;
    for normal binary search its goes out of range for int if start and end = 2^31 -1;*/
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == a[mid])
        {
            return mid;
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
    int key, a[7] = {1, 2, 5, 6, 7, 9, 10}; // ascending or descending
    cout << "enter key" << endl;
    cin >> key;
    int ans = binarySearch(a, 7, key);
    cout << "key found: index:" << ans << " key" << a[ans];
}