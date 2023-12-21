#include<iostream>
#include<math.h>
using namespace std;

bool check_prime(int num){
    for (int i = 1; i < num; i++)
    {
        if(num%i==0){
            return false;
        }
    }
    return true;    
}

int main () {

    int n = 12;
    bool result = check_prime(n);
    cout<<"Is it a prime : "<<result<<endl;
   return 0;

}