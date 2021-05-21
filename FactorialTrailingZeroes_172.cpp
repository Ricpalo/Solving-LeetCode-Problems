#include<bits/stdc++.h>
using namespace std;

int trailing_zeroes(int);

int main(){
    int n, m;

    cin >> n;
    m = trailing_zeroes(n);

    cout << m << "\n";

    system("PAUSE");
    return 0;
}

int trailing_zeroes(int n){
    int count = 0;

    while(n > 0){
        n /= 5;
        count += n;
    }

    return count;
}