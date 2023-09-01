#include<iostream>
using namespace std;
void mergeArr(int *arr, int s ,int e){
    int mid = s + (e - s) / 2;

    // find length
    int len1 = mid - s + 1;
    int len2 = e - mid;

    //create new array in the haep with len1 and len2 ----dont forget to delete the heap memory---
    int *first = new int[len1]; 
    int *second = new int[len2];

    // to mark the starting position and copy from arr --> first
    int mainArr = s; //start pos
    for (int i = 0; i < len1; i++){
        first[i] = arr[mainArr++];
    }

    // to mark the starting position and copy from arr --> first
    mainArr = mid + 1;
    for (int i = 0; i < len2; i++){
        second[i] = arr[mainArr++];
    }

    //once the two array is created ----merge two sorted array----------
    int i = 0; //starting pos for first
    int j = 0; //starting pos for second
    int k = s; //starting pos for final array --arr

    while( i < len1 && j < len2)
    {
        if(first[i] < second[j]){
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = second[j++];
        }
    }

    //for remaining ele in array if size is greater
    while( i < len1){
        arr[k++] = first[i++];
    }

    // for remaining ele in array if size is greater
    while (j < len2)
    {
        arr[k++] = second[j++];
    }

    //to delete the heap memory
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr , int s, int e){
    if(s >= e){
        return;
    }
    // cout << "hello";

    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid); //left sort

    mergeSort(arr, mid+1, e); //right sort

    mergeArr(arr, s, e);
}

int main(){
    int arr[10] = {10, 30, 15, 25, 5, 3, 2, 40, 50, 100};

    int start = 0;
    int end = 9;

    mergeSort(arr, start, end);

    for (int i = 0; i < 10; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}