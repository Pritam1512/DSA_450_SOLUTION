#include<bits/stdc++.h>
//with O(1) extra space
using namespace std;
void mergeTwo(int arr1[],int arr2[],int n1,int n2)
{

    int j=0;
    for(int k=0;k<n1;k++)
    {
        if(arr1[k] > arr2[j])
        {
            swap(arr1[k],arr2[j]);
            sort(arr2,arr2+n2);
        }
    }


}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    mergeTwo(arr1,arr2,4,5);

    for(int i=0;i<4;i++)
    {
        cout << arr1[i] << " ";
    }
    cout <<""<<endl;

    for(int i=0;i<5;i++)
    {
        cout << arr2[i] << " ";
    }


    return 0;
}
