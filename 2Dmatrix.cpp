#include <iostream>
#include <vector>
using namespace std;

int diagonal(vector<vector<int>> matD)
{
    int digaSum = 0;

    int n = matD.size();
    for (int i = 0; i < matD.size(); i++)
    {
        for (int j = 0; j < matD[i].size(); j++)
        {
            if (i == j)
                digaSum += matD[i][j];
            else if (j == n - 1 - i)
            {
                digaSum += matD[i][j];
            }
        }
    }
    return digaSum;
}

int main()
{
    cout << "Enter the size" << endl;
    int n;
    cin >> n;
    cout << "Enter elements" << endl;
    

    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cin >> mat[i][j];
        }
    }

    int result=diagonal(mat);
    cout<<result;
}