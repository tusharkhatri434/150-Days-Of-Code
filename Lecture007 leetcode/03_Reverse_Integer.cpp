//!! Q - 7 Reverse Integer in Leetcode-

#include<iostream>
#include<math.h>
using namespace std;

int reverseNumber(int num){
    int newNumber = 0;

    while (num!=0)
    {
        int digit = num % 10;
        newNumber = (newNumber*10) + digit;
        
        num = num / 10;
    }
     
     return newNumber;
}

int main () {

    int n = 1234;
    int result = reverseNumber(n);
    cout<<result;

   return 0;
}