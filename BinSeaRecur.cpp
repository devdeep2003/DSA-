#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>arr,int key,int start,int end)
{

    int mid = start + (end-start)/2;
    if(start<=end)
    {
        if(key==arr[mid]) return mid;
        else if(key<=arr[mid]) return binSearch(arr,key,start,mid-1);
        else return binSearch(arr,key,mid+1,end);
    }
    else return -1;  
}

int main()
{
    vector<int> array = {22,33,44,55,66,77};
    int key = 88;
    int response = binSearch(array,key,0,array.size());
    if(response==-1) cout<<"Not found"<<endl;
    else cout<<"Found at position : "<<response+1<<endl;
}


//here the base case if(start<=end) means that at the end of the search where the recursive function will be left with only one 
//index where start and end both will be equal , then at that particular moment the search should stop because either it's the found 
//element or not , but if start gets greater than end then it will return error as the function will initiate from the start index and 
//go on until the end index but it is an anomaly it self if the start is greater than the end.


//TC=n*WD in each call
//TC=