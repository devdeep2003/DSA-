#include <iostream>
using namespace std;

void dnf(int arr[], int n)
{
    // using the Dutch National Flag Algorithm
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
         
            high--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int nums[] = {0, 1, 2, 0, 1, 2, 0, 1, 2, 2, 1, 1, 1, 0, 0, 0};
    int s = sizeof(nums) / sizeof(nums[0]);
    dnf(nums, s);
}