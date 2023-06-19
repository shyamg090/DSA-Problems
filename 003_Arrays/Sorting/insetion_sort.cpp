#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[6]={2,53,6,5,13,4};
    int n=6;
    for(int i=0; i<n-1; i++){
        int temp= arr[i];
        int j=i-1 ; ///line 18 j will become local scope if used inside inside for loop
        for(; j>=0 ; j--){
            // to compare the i with the prev values j starts from j=i-1 to j>=0 hance j--
            if(temp < arr[j]){
                arr[j+1]=arr[j]; //right shift the j
            }else{
                break; //else break and come out of for loop dont go further behind
            }
        }
        arr[j+1]=temp; //copy and paste in this location
    }

    for(int i=0; i<n-1; i++){
        cout<<"after inssertion sort: "<<arr[i]<<endl;
    }
}
