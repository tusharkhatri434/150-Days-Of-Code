#include<iostream>
#include<math.h>
using namespace std;

void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
    }
    
}
int main () {

    int arr[5] ={1,5,2,7,3};
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        // round from 1 to n-1 
        for (int j = 0; j < n - i; j++)
        {
              if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
              }
        }
        
    }
    
    printArr(arr,5);


   return 0;

}