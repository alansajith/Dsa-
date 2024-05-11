#include <iostream>
using namespace std;

<<<<<<< HEAD
int main(){
    cout<<"hi";
    
=======
// count no . of digits
//  int main()
//  {
//      int count = 0;
//      int n = 3456;
//      while (n > 0)
//      {
//          count += 1;
//          n = n / 10;
//      }
//      cout << count;
//  }

// reverse a number
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int rev_num = 0;
    while (n > 0)
    {
        int ld = n % 10;
        rev_num = (rev_num * 10) + ld;
        n = n / 10;
    }
    cout << rev_num;
>>>>>>> 9d903127d9de39aefd394ca70d5d09562f3931bb
}
