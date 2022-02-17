/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num;
    int n1, n2, count;
    int n3;
    int n4;
    count = 0;
    cin >> num;
    int ornum = num;

    for(;;) {
        n1 = num / 10;
        n2 = num % 10;
        n3 = n1 + n2;
        num = n2 * 10 + n3 % 10;
        count++;
        if(num == ornum)
            break;
    }
    cout << count;
}
