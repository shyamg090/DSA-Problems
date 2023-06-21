class Solution {
    private:

    bool isvalid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
            return true;
        }else{
            return false;
        }
    }

    char lower(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }else{
           char temp = ch-'A'+'a';
            return temp;
        }
    }

    bool palindrome(string ch){
        int s=0;
        int e = ch.length()-1;

        while(s<=e){
            if(ch[s] != ch[e]){
                return false;
            }else{
                s++;
                e--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        
        string temp="";

        for(int i=0;i< s.length(); i++){
            if(isvalid(s[i])){
                temp.push_back(s[i]);
            }
        }
        // cout<<temp<<endl;

        for(int i=0;i< temp.length(); i++){
            temp[i]=lower(temp[i]);
        }
        // cout<<temp<<endl;

        return palindrome(temp);
    }
};