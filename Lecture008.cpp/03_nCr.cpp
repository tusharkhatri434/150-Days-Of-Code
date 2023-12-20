/*
  nCr = n! / r!(n-r)!
*/

#include<iostream>
#include<math.h>
using namespace std;
 
 int fact(int num){
    int response = 1;
    for (int i = num; i > 1; i--)
    {
        response = response * i;
    }
    return response;
 }

int factorial(int n, int r){
      
      int n_fac = fact(n);
      int r_fac = fact(r);
      int nR_fac  = fact(n-r);

      int response = n_fac / (r_fac * nR_fac);

      return response;
}


int main () {

    int n = 4;
    int r = 2;
    int result = factorial(n,r);
    cout<<result;
   return 0;

}