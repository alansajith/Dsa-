#include <iostream>
using namespace std;


//count question 
int main()
{
    int count = 0;
    int n = 3456;
    while (n > 0)
    {
        count += 1;
        n = n / 10;
    }
    cout << count;
}