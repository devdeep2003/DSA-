#include <iostream>
using namespace std;

void sortArr(int a[], int n)
{
    int z=0, o=0, t=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            z++;
        else if (a[i] == 1)
            o++;
        else
            t++;
    }

    int index=0;

    for(int i=0;i<z;i++)
    a[index++]=0;

     for(int i=0;i<o;i++)
    a[index++]=1;

     for(int i=0;i<t;i++)
    a[index++]=2;

    

    for(int x=0;x<n;x++)
    {
        cout<<a[x]<<" ";
    }
}

int main()
{
    int arr[] = {0, 1, 2, 0, 0, 0, 1, 1, 1, 1, 2, 2, 1, 1, 0, 0, 2, 2, 1, 1};
    int s = 20;
    sortArr(arr, s);
}