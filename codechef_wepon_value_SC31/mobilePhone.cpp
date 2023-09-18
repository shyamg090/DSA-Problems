// For instance, suppose you have 4 potential customers and 
//their budgets are 30, 20, 53 and 14. In this case, 
//the maximum revenue you can get is 60 .

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long maxi(vector<long long> arr)
{

    sort(arr.begin(), arr.end());

    int n = arr.size();
    long long maxNum = arr[n - 1];
    int count = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        count = count + 1;
        if ((arr[i] * count) > maxNum)
        {
            maxNum = arr[i] * count;
        }
    }

    return maxNum;
}

int main()
{
    // your code goes here

    vector<long long> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        arr.push_back(val);
    }

    cout << maxi(arr);
    return 0;
}
