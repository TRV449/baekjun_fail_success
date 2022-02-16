/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n1, n2, n3;
    int num;
    string str;
    cin >> n1 >> n2 >> n3;
    num = n1 * n2 * n3;
    
    str = to_string(num);
    int long_ = str.length();
    int arr[10] = {0};
    for(int i = 0; i < long_; i++){
        for(int j = 0; j < 10; j++){
            if((str[i] - '0') == j){
                arr[j]++;
            }
        }
    }
    for(int i = 0; i < 10; i++)
        cout << arr[i] << "\n";
}
