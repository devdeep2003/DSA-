#include <iostream>
using namespace std;
void change_num(int x)
{
    int n;
    cin >> n;
    x = n;
    cout << "The number is changed to = " << x <<endl;
}
void change_arr(int x[])
{
    x[3]=66;
    cout<<"Array value at 4th position changed to --> " << x[3] <<endl;
}

int main()
{

    int x = 10;
    change_num(x);
    cout << "Original Number " << x <<endl;
    int arr[5] = {1,2,3,4,5};
    change_arr(arr);
}


//Theory
//In C++, when you pass an array to a function, it decays into a pointer to
//the first element of the array. So, when you pass an array to a function, you
//are actually passing a pointer to the first element of the array.
//In the function, you can use the array name as a pointer to the first element
//of the array. You can also use the array name as an array, but you cannot
//change the size of the array using the array name.
//Arrays are pass by reference
