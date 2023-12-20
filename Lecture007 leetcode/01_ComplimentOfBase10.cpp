// Q - 1009 -> leetcode

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int m = n;
    int mask = 0;
    int ans = 0;
    while(m!=0){
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    cout<<~n<<endl;
   ans = (~n) & mask;
  cout<<"answer is:"<<ans;
     
}
