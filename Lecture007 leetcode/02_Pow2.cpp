#include<iostream>
#include<math.h>
using namespace std;
bool powerOfTwo(int num){
    int count = 0;
    while(num!=0){
        int bit = num & 1;
        cout<<bit;
        if(bit==1){
            if(count>1){
                return 0;
            }
            count++;
        }
       num >> 1;
    }
    return 1;
}

int main () {

    int n = 4;
      
    int result = powerOfTwo(n);
    cout<<result;

   return 0;

}