#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

//Logic 1
    // vector<int> revarr;  
    // for(int i=n-1;i>=0;i--)
    // {
    //     revarr.push_back(arr[i]);
    // }
    // for(int val:revarr) cout<<val<<" ";
  

   //Logic 2

   for(int i=0;i<n/2;i++){
    swap(arr[i],arr[n-i-1]);
   }

   for(int val:arr){
    cout<<val<<" ";
   }

    return 0;
}