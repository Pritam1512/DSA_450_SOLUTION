#include<iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << ""<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << "" <<endl;
    }

    cout <<"" <<endl;


    int t=0,b=m-1,l=0,r=n-1;
    int flag = 0;
    int d = 0;
    while(d<=(m*n)-1){
            if(flag == 0)
            {
                for(int i=l;i<=r;i++)
                {
                    cout << arr[t][i] <<" ";
                    d++;
                }
                flag = 1;
                t++;
            }
            else if(flag == 1)
            {
                for(int i=t;i<=b;i++)
                {
                    cout << arr[i][r] << " ";
                    d++;
                }
                flag = 2;
                r--;

            }
            else if(flag == 2)
            {
                for(int i=r;i >= l;i--)
                {
                    cout << arr[b][i] << " ";
                    d++;
                }
                flag = 3;
                b--;
            }
            else if(flag == 3)
            {
                for(int i=b;i>=t;i--)
                {
                    cout << arr[i][l] <<" ";
                    d++;
                }
                flag = 0;
                l++;
            }
    }

    return 0;
}
