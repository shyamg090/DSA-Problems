#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
//   int gives the last bit as 0 refer notes
  float ans=0;
  int i=0;
  while(n!=0){
    int bit=n & 1;
    ans = (bit * pow(10,i) ) + ans;
    n=n>>1; //refers to divide by 2 and stores remainder
    i++;
  } 
  cout<<ans;
} 
