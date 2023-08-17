#include<iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;

        while(n!=0){

            int ld=n%10;
            
            prod=prod*ld;
            sum=sum+ld;

            n=n/10;
        }
        int result=prod-sum;
        return result;
    }
};