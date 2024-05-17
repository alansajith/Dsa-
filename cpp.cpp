#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cout << "enter how many numbers you want to insert: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout << "how many queries do u want to take: ";
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << " ";
    }
}
