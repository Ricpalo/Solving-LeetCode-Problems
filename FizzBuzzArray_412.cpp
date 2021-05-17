#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
    cout << "How many elements?\n";
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        if((a[i] % 3 == 0) && (a[i] % 5 == 0)){
            cout << "FizzBuzz ";
        } else if(a[i] % 3 == 0){
            cout << "Fizz ";
        } else if(a[i] % 5 == 0){
            cout << "Buzz ";
        } else{
            cout << a[i] << " ";
        }
    }

    system("PAUSE");
    return 0;
}