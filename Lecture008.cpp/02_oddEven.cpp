#include<iostream>
#include<math.h>
using namespace std;

bool checkNum(int num){
     if(num&1){
        return 0;
     }
     return 1;
}

int main () {

    int n = 100;
     
    bool result = checkNum(n);
    cout<<"is it even-1 or odd-0 : "<< result;
   return 0;

}