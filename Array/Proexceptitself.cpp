#include <vector>
#include <iostream>
using namespace std;

void proExceptItself(vector<int> arr)
{

    
    vector<int> ans;
    int n = arr.size(), pro = 1;
    for (int i = 0; i < n; i++)
    {
        pro = 1;
        for (int j = 0; j < n; j++)
        {
            pro *= arr[j];
        }

        ans.push_back(pro/arr[i]);
    }

    for (int val : ans)
    {
        cout << val << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    proExceptItself(nums);
}