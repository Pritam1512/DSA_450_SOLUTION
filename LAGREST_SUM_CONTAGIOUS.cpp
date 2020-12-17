#include<bits/stdc++.h>

using namespace std;


int findMaxSum(int a[],int n)
{
    int sum_end_here = 0;
    int max_till_now = 0;

    for(int i=0;i<n;i++)
    {
        sum_end_here = sum_end_here + a[i];


        if(sum_end_here < 0)
            sum_end_here = 0;

        if(max_till_now < sum_end_here)
            max_till_now = sum_end_here;


    }

    return max_till_now;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int c = findMaxSum(a,n);
    cout << "Maximum contagious sum is "<< c;
    return 0;
}
