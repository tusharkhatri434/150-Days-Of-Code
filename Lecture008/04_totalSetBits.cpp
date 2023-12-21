#include<iostream>
#include<math.h>
using namespace std;
int main () {
    int n = 10;
    int count = 0;
    while (n!=0)
    {
        int bit = n & 1;
        if(bit==1){
            count++;
        }
        n = n>>1;
    }
    cout<<"No of setBits 1 - "<<count<<endl;

   return 0;
}