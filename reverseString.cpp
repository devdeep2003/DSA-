#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String:" << endl;
    getline(cin, str);
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i] << " ";
    }
}