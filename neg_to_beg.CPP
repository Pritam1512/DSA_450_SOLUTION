//order of appearance is not important
#include <bits/stdc++.h>
using namespace std;

void moveNeg(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        while(arr[i] < 0)
            i++;
        while(arr[j] > 0)
            j--;
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }




}
int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    moveNeg(arr,9);
    return 0;
}
