class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask = 0;
        
    // 3
        if(n == 0)
            return 1;

    // 1
        while (m != 0) // if m=5 and bit is 101--> 000--> mask<<1 | 1(3times) 
        {
            mask = (mask << 1) | 1;  //000--> 001 ---> 011 ---> 111
            m = m >> 1; // 5>>1 (5/2) --> 2>>1 --> 1 --> 0 (out of loop)
        }

    // 2
        int ans = (~n) & mask;
        return ans;
    }
};