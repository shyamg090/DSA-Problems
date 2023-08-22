#include <iostream>
#include <typeinfo>
#include <vector>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    // vector<char> ans;
    string s = "shyam";
    reverse(s.begin(), s.end());
    cout << s << endl;

// interview question: given string that contains chars of -,(),/ take out only numbers upto 10 numbers and return in string format
// isdigit(string) must be used to check -----vvimp----

    string s2 = "(123)-456-7890";
    int count = 0;
    string ans = "";

    for (int i = 0; i < s2.size(); i++)
    {
        if (isdigit(s2[i]))
        {
            // count++;
            ans = ans + s2[i];
        }
    }
    // cout << "count: " << count << endl;
    cout << "ans: " << ans << endl;
    // cout << typeid(ans).name() << endl;

    // string reverse= "malayalam";
    // reverse(reverse.begin() , reverse.end());
    // cout<<reverse; ---no two reverse will work gives error

    // if(reverse == reversed){
    //     cout<<"palindrome";
    // }else{
    //     cout<<"not palindrome";
    // } ----will not work!!!
}