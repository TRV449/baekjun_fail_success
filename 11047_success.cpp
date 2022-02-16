/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int N;
    long int K;
    int* mount;
    int count = 0;
    cin >> N >> K;
    
    mount = new int[N];
    
    for(int i = 0; i < N; i++)
        cin >> mount[i];
        
    for(;;){
        for(int i = N - 1; i >= 0; i--){
            if(K >= mount[i]){
                K -= mount[i];
                count++;
                break;
            }
        }
        if(K == 0)
            break;
    }
    
    delete[] mount;
    cout << count;
}
