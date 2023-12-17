#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main () {
// next number = (n-1) + (n-2)
    int n=6;
    int a = 0; /*Fisrt number*/
    int b = 1;  /*Second number */

   for (int i = 2; i < n; i++)
   {
      int nextNumber = a+b;
      a = b;
      b = nextNumber;
   }
   
   cout<< b;


   return 0;

}