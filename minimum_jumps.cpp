#include<bits/stdc++.h>

using namespace std;

int minimumSteps(int a[],int n)
{
    int k=0,jumps = 0;
    while(k<n-1){
            int i = k;
            int max = -1;
            for(int j=i+1;j<=i+a[i];j++)
            {
                if(a[j] > max){
                    max = a[j];
                    k = j;
                }
            }
            jumps++;
    }
    return jumps;
}

int main()
{
    int a[] = {1, 3, 6, 1, 0, 9};
    int n = sizeof(a)/sizeof(a[0]);

    int c = minimumSteps(a,n);
    cout << "minimum steps requires to reach end is: " << c;
    return 0;
}
