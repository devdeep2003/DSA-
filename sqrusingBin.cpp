#include<iostream>
#include <vector>
using namespace std;


int squareBinary(int num)
{
    int start=0;
    int end = num;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(mid*mid>num) {end=mid-1;}
        else if(mid*mid<num) start=mid+1;
        else return mid;
    }
    return -1;
}


double precision(int precise, int num,int square)
{
    double factor=1;
    double final=num;
    for(int i=1;i<=precise;i++)
    {
        factor=factor/10;
        for(double i=num; i*i<=square;i+=factor)
        {
            final=i;
        }
    }
    return final;
}

int main()
{
    int n = 50;
    vector<int>arr;
    int result = squareBinary(n);
    cout<<precision(6,result,n);
}