#include<iostream>
using namespace std;

int print(int *arr, int n){
    cout << "size--->" << n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
     }
    cout << endl;
}

bool linearSearch(int *arr, int n, int key){
    print(arr, n);

    if(n == 0){
        return false;
    }
    if(arr[0] == key){
        cout << "blah blah---key ="<<arr[0] << endl;
        return true;
    }
    else{
        int ans = linearSearch(arr + 1, n-1 , key);
        return ans;
    }
}

int main(){
    int arr[5] = {2, 4, 5, 6, 7};
    int key;
    cin >> key;

    bool ans = linearSearch(arr, 5, key);
    if(ans == true){
        cout << "key found";
    }
    else{
        cout << "key not found";
    }
}