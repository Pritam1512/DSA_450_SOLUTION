#include<iostream>
using namespace std;
//CONTAGIOUS SUBARRAY WITH SUM EQULAS ZERO

int subarrayZero(int arr[],int n)
{
    int sum;
    for(int i=0;i<n;i++)
    {
        sum = 0;
        for(int j=i;j<n;j++)
        {
            sum = sum  + arr[j];
            if(sum == 0)
            {
                return 1;
            }
        }
    }
    return 0;


}
int main()
{
    int arr[] = {3,1,-4,6,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int c = subarrayZero(arr,n);
    if(c)
        cout << "YES there exist a sub array with sum equals zero"<<endl;
    else
        cout << "NO"<<endl;
    return 0;
}
