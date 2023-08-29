#include<iostream>
using namespace std;
bool binarySearch(int *arr, int s, int e, int key){
    
    if(s>e){
        return false;
    }

    int mid = e - (s + e) / 2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid + 1, e, key);
    }
    else{
        return binarySearch(arr, s,mid - 1, key);
    }
}

int main(){
    int arr[5] = {2, 4, 5, 8, 10};
    int key;
    cin >> key;
    int start = 0;
    int end = 5 - 1;

    bool ans = binarySearch(arr, start, end, 5);

    if(ans == true){
        cout << "key found" << endl;
    }
    else{
        cout << "key not found" << endl;
    }
}