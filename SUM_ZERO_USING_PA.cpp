#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int arr[] = {6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr2[n];
    arr2[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        arr2[i] = arr[i] + arr2[i-1];
    }
    cout << "Prefix sum array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout << arr2[i] <<" ";
    }
    cout <<""<<endl;
    int hashT[50] = {0};
    for(int i=0;i<n;i++)
    {
        hashT[arr2[i]]++;
    }
    for(int i=1;i<50;i++)
    {
        if(hashT[i] == 2)
        {
            cout << "YES there exist a sub array"<<endl;
            exit(0);
        }
    }
    cout << "NO there does not exist a sub array"<<endl;
    return 0;
}
