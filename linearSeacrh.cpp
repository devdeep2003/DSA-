#include <iostream>
using namespace std;

int main()
{
    int key = 49;
    int arr[10] = {1, 2, 4, 2, 5, 56, 44, 49, 90, 17};
    bool found = false;
    for (int i = 0; i < 10; i++)
    {
        if (key == arr[i])
        {

            cout << "The key is found at position : " << i+1 << endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout << "The key is not found in the array" << endl;
    }
}