#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> arr = {3,4,6,8,0,3,6,1,2,10,5,99,14,55};
    sort(arr.begin(),arr.end());
    for(int val:arr) cout<<val<<" ";
    cout<<endl;
    int n = arr.size(),max,min;
    max=arr[n-1];
    min=arr[0];
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;

return 0;


}