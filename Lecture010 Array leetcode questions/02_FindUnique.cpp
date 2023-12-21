#include<iostream>
#include<math.h>
using namespace std;
int findUinique(int arr[],int count){
    int ans = 0;
    for (int i = 0; i < count; i++)
    {
        ans = ans^arr[i];
    }

    return ans;
}

int main () {

    int arr[7] = {1,1,2,2,3,3,4};
    
    int ans = findUinique(arr,7);
    cout<<ans;
   return 0;

}