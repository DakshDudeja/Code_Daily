#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter rows and column";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter elements";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0, ans = INT16_MAX, i = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < arr[i][count])
            {
                count = j;
            }
        }
        bool flag = true;
        for (int k = 0; k < n; k++)
        {
            if (arr[k][count] > arr[i][count])
            {
                flag = false;
                break;
            }
            if (flag == true)
            {
                return arr[i][count];
            }
        }
    }
    cout << "nahi mila bhai";
    return 0;
}