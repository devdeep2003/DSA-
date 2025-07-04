#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){
    vector<int> nums = {3,3,4,2,2,0,1,5,8,5,1,1,3};
    unordered_map<int,int> map;
    int n = nums.size();
    int currEle;

    for(int i=0;i<n;i++){
        currEle = nums[i];
        if(map.find(currEle)!=map.end()) map[currEle]++;
        else {
            map.insert({currEle,1});
        }
    }

    for(int k=0;k<map.size();k++){
        cout<<k<<" : "<<map[k] << endl;
    }
}