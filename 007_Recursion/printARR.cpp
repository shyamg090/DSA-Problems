#include <iostream>
using namespace std;

int arrayEl(int n)
{

    if (n == 0)
    {
        return 0;
    }
    cout << n <<" ";
    arrayEl(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans = arrayEl(n);
    cout << ans;
}