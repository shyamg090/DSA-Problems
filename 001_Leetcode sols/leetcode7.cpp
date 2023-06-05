class Solution {
public:
    int reverse(int x) {
//    COMMENT THE BELOW LINE DURING EXECUTION
    int  INT_MAX, INT_MIN;
// -------------WRITTEN C0Z IT SHOW ERROr IN VS CODE----------------   
    int ans=0;
        while(x!=0)
        {
            // 1
            int digit = x % 10;
            // 4 if condition is there 
            if( (ans > INT_MAX / 10)  || ( ans < INT_MIN / 10 ) ){
                return 0;
            }
            // 2
            ans = (ans * 10)+ digit;
            // 3
            x= x / 10;
        }
        return ans; 
    }

};


// class Solution {                      
// public:
//     int reverse(int x) {
//         long r=0;      // decleare r 
//         while(x){
//          r=r*10+x%10; // find remainder and add its to r
//          x=x/10;     // Update the value of x
//         }
//         if(r>INT_MAX || r<INT_MIN) return 0; // check 32 bit range if r is outside the range then return 0  
//         return int(r);  // if r in the 32 bit range return r
//     }
// }; 