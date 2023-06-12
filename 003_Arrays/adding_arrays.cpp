// RNUN IN CODESTUDIO 
#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> arr, int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(arr[s], arr[e]);
    }
}

int main(){

    int a1[3]={1,2,3};

    int a2[1]={9}; 

    int i=n-1;
    int j=m-1;
    int sum;
    int carry=0;
    vector<int> ans;

    while(i>=0 && j>=0){
        sum= a1[i]+a2[j]+carry;
        carry= sum / 10;
        sum=sum % 10;
        ans.push_back(sum);

        i--;
        j--;
    }

    while(i>=0){
        sum=a1[i]+carry;
        carry=sum / 10;
        sum=sum % 10;
        ans.push_back(sum);

        i--;
    }
    
    while(j>=0){
        sum=a2[j]+carry;
        carry=sum / 10;
        sum=sum % 10;
        ans.push_back(sum);

        j--;
    }

    while(carry!=0){
        sum=carry;
        carry= sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }

    reverse(ans, n);
    
}