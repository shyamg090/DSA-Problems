class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int count[26] = {0}; // initially the array has [0,0,0,0......];

        // find all the frequencies (incrementing)
        for (int val : s)
        {                          // for each val in s string
            int index = val - 'a'; // if val= d then d - 'a' =  3
            count[index]++;        // at index 0 it becomes 1;
        }

        // if you find the ele in this decrease the frequency
        for (int val : t)
        {
            int index = val - 'a';
            count[index]--;
        }

        // if the final count[] = {0} then it has cancelled out
        for (int val : count)
        {
            if (val != 0)
            { // every val in count must be zero to be a valid anagram if not 0 return false
                return false;
            }
        }

        return true;
    }
};