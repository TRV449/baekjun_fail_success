/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string S;
    int num[26] = {0};
    cin >> S;
    for(int j = 0; j < S.length(); j++)
        for(int i = 0; i < 26; i++)
            if(S[j] == (char)(i + 97))
                num[i]++;
    for(int i = 0; i < 26; i++)
        cout << num[i] << " ";
    
}
