#include<iostream>
#include<math.h>
using namespace std;

void linearSearch(int arr[],int size,int num){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cout << "Yess number is found- " << arr[i];
            return;
        }
    }
    cout<<"No number is not found";
}

int main () {

    int arr[12] = {11,22,30,4,50,60,72,86,49,40,61,72};
    int n = 72;
    linearSearch(arr,12,n);
        
   return 0;

}