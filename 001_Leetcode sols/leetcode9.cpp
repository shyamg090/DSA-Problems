class Solution {
public:
    bool isPalindrome(int x) {
        int y =x;
        int ans=0;
//    COMMENT THE BELOW LINE DURING EXECUTION
    int  INT_MAX, INT_MIN;
// -------------WRITTEN CZ IT SHOW ERROE IN VS CODE----------------  
        if(x<0)
        {
            return false;
        }
        else{
                while( x !=0)
                {
                    int digit = x % 10;
                    // bcz if x=... will change vale for below x that gives wrong anwer
                    if( (ans > INT_MAX / 10)  || ( ans < INT_MIN / 10 ) ){
                        return false;
                    }
                    
                    ans = (ans * 10) + digit ;
                    x = x / 10;
                }
            }
        
        x= x + y;

        if (x == ans){
            return true;
        }
        else{
            return false;
        }
   
    }
};