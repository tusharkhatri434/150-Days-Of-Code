#include<iostream>
#include<math.h>
using namespace std;
int findDuplicate(int arr[],int size)
{
    int ans = 0;

    // XOR ing all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
        cout<<ans;
    }

    // XOR [1, n-1]
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main () {

    int arr[10] = {1,2,3,4,5,6,7,7,8,9};

    int ans = findDuplicate(arr,10);
    cout<<ans;
        return 0;
}