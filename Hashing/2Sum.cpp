#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> map;
    vector<int> ans;
    int first, second;

    int arr[6] = {4, 5, 3, 2, 1, 6};
    int target = 7;

    for (int i = 0; i < 6; i++)
    {
        first = arr[i];
        second = target - first;
        if (map.find(second) != map.end())
        {
            ans.push_back(i);
            ans.push_back(map[second]);
            break;
        }
        map[first] = i;
    }

    for (auto i : ans)
    {
        cout << ans[i] << " ";
    }
}