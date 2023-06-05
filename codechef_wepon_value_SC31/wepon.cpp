#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    cout<<"this is t :"<<t<<endl;
    int count=0;
    string s1="";
    
    while(t--){
        int n,i,j;
        cin>>n;
        // n is the participants
        cout<<"this is n participants:"<<n<<endl;
        
        cin>>s1;
        cout<<"s1 :"<<s1<<endl;
        // s1 is given as first contestant values
        // since n=3 input is given 3 times
        /*one for s1
          two for s2 if n>=2 paricipants >=2
          again for s2 after a for-loop which is considered as third participant
          */
        if(n>=2){
        
         for( j=0; j<n; j++){
            //  input iterates 3 times
             string s2="";
             cin>>s2;
             cout<<"this is s2 :"<<s2<<endl;
             for( i=0;i<10; i++)
             {
                 if(s1[i]=='1' && s2[i]=='1')  
                 {
                     s1[i]='0';
                 }
                 else if(s1[i]=='0' && s2[i]=='1')
                 {
                     s1[i]='1';
                 }
            }
            cout<<"after"<<j<<"loop s1 is updated to:"<<s1<<endl;
        }
            

    }
    for( i=0; i<10;i++)
    {
        if(s1[i]=='1'){
            count++;
        }
        
    }
    
    }
    cout<<"this is final s1 :"<<s1<<endl;
    cout<<count;
	return 0;
}
