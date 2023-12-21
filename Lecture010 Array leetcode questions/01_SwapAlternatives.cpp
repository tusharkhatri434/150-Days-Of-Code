#include<iostream>
#include<math.h>
using namespace std;
void swapAlter(int arr[] , int size){
    for(int i = 0; i<size-1; i+=2){

        swap(arr[i],arr[i+1]);
    }

}
 
void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
} 
int main () {

    int arr1[6] = {1,2,3,4,5,6};
    int arr2[5] = {1,2,3,4,5};
       
       swapAlter(arr1,6);
       swapAlter(arr2,5);

       printArr(arr1,6);
       printArr(arr2,5);
     
   return 0;

}