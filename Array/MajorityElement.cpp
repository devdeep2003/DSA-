// Majority Element using Moore's Voting Algorithm

#include <iostream>
#include <vector>

using namespace std;

int moore(vector<int> nums)
{
    int f = 0, n = nums.size(), ans;
    for (int i = 0; i < n; i++)
    {
        if (f == 0)
            ans = nums[i];

        if (ans == nums[i])
            f++;
        else
            f--;
    }

    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 4, 3, 2, 2, 2};
    int element = moore(arr);
    cout << "Majority element is : " << element;
}