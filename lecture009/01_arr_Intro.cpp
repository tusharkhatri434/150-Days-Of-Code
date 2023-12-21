#include<iostream>
#include<math.h>
using namespace std;

void printArray(int arr[] , int size){

    for (int i = 0; i < size; i++)
    {
        cout <<arr[i]<<",";
    }
    cout<<endl;
}
void updateArray(int arr[],int size){

     arr[0] = 99;
     printArray(arr,6);
}


int main () {

    int arr[6] = {1,2,3,4,5,6};
    
    cout<<"Before updation -[";
    updateArray(arr,6);
    //  after updation - > arry pass in function its first elemnt address for ex - 100 next will be 104
    cout << "After updation -[";
    printArray(arr,6);
      
   return 0;

}