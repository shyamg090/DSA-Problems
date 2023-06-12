class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        int count=0;

        for(int i=1 ; i < n ; i++){
            // keep i=1 bcz if i=0 then nums[0-1]= nums[-1] gives runtime error
            // hence start with 1.
            if(nums[i-1] > nums[i]){ 
                count++;
            }
        }
        if(nums[n-1] > nums[0]){ 
            //if array is sorted and rotated to 0 position i.e not rotated.
            count++;
        }

        if(count<=1){
            // count <=1 bcz if all are equal [1,1,1] then count will be zero.
            return true;
        }else{
            return false;
        }
     
    }
};