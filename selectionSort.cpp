#include <iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIdx = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[smallestIdx])
            {
                smallestIdx=j;
               
            }
        }
        swap(a[i],a[smallestIdx]);
      
    }

    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[] = {2, 3, 6, 8, 1};
    selectionSort(arr, n);
}
