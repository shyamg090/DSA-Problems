#include<iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            if(n&1 == 1){
                count++;
            }
            n=n>>1; //equal to n/2
        }
        return count;
    }
};