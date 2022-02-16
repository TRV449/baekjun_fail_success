#include <iostream>
#include <string>

using namespace std;

int* forcheck;
int* forcheck2;
int MAX;
int top = -1;
int top2 = -1;
int something_wrong = 0;

void push(char c);
void pop();
void pop2();
bool sum();
bool check();

int main() {
    int rep;
    cin >> rep;
    int* arr = new int[rep];
    for(int j = 0; j < rep; j++) {
        string str;
        cin >> str;
        MAX = str.length();
        forcheck = new int[MAX];
        forcheck2 = new int[MAX];
        
        for(int i = 0; i < MAX; i++)
            push(str[i]);
        
        if(check() == true)
            arr[j] = 1;
        else if(check() == false)
            arr[j] = 0;
        top = -1;
        top2 = -1;
    }
    for(int i = 0; i < rep; i++){
        if(arr[i] == 1){
            cout << "YES";
        }
        else { 
            cout << "NO";
        }
        cout << "\n";
    }
}

void push(char c) {
    if(c == '(')
        forcheck[++top] = -1;
    else if(c == ')')
        forcheck[++top] = 1;
}

void pop() {
    int temp = forcheck[top--];
    if(temp == 1){
        forcheck2[++top] = temp;
    }
    else {
        if(top2 < 0) {
            something_wrong = 1;
        }
        else {
            pop2();
        }
    }
}

void pop2(){
    top--;
}

bool sum() {
    int temp = 0;
    for(int i = 0; i < MAX; i++)
        temp += forcheck[i];
    
    if(temp == 0)
        return true;
    else
        return false;
}

bool check() {
    if(sum() == false)
        return false;
    else {
        for(int i = 0; i < MAX; i++)
            pop();
        if(something_wrong == 1)
            return false;
        else
            return true;
    }
}
