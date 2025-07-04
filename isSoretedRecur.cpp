#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>arr, int x)
{
    if(x==0||x==1) return true; //constant work (if)
    else 
    {
        if(arr[x-1]>arr[x-2]) return false;//constant work(if)
        else return isSorted(arr,x-1);
    }
}

int main()
{
    vector<int>arr={1,3,4,2,3};
    int n = arr.size();
    cout<<isSorted(arr,n)<<endl;

}


//if the calls are n , and since here we are seeing that the total work done in each call is constant inside the function then
//TC = T.calls*WD in each call
//TC = n*O(1) = O(n)
//SC = T.calls*Space used in each call
//SC = n*O(1) = O(n) (since we have no variables used in the function)