#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = true;
            }
        }
        if (!flag)
            break;
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
    bubbleSort(arr, n);
}
