#include<iostream>
using namespace std;



int gcdEuc(int a , int b)
{
       if(b==0) return a;
       else return gcdEuc(b,a%b);
}

int main()
{
    int result = gcdEuc(20,28);
    cout<<result;
    return 0;
}