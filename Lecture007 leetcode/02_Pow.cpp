#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int num){
    int square = 1;
     for (int i = 0; i<=30 ; i++)
     {
        if(num == square ){
            return true;
        }
        if(square < INT_MAX /2)
        square = square * 2;
     } 
    return false;
     
}

int main(){
    int n = 64;
    int result = powerOfTwo(n);
    cout<<"Result of task : "<<result;

    //  second method to solve this question by pre built in pow 
    for(int i = 1; i<31; i++){
        int square = pow(2,i);

        if(n == square){
            cout<<"true"<<endl;
            break;
        }
    }
   cout<<"false";
}