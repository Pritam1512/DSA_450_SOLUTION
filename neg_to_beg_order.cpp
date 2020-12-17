//ORDER OF APPEARANCE IS TAKEN CARE OF.
//TIME COMPLEXITY IS O(n^2).
#include <bits/stdc++.h>
using namespace std;

void moveNeg1(int arr[],int n)
{
    for(int k=0;k<n;k++){
                int i=0;
                while(arr[i] < 0)
                    i++;
                for(int j=i;j<n;)
                {
                    if(arr[j+1] <0 && j+1<n){
                        swap(arr[j],arr[j+1]);
                        j++;
                    }

                    else if(arr[j+1] > 0 && j+1 <n)
                    {
                        j++;

                    }
                    else
                        j++;
                }
        }

        for(int i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }


}
int main()
{
	int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
	moveNeg1(arr,9);
	return 0;
}

