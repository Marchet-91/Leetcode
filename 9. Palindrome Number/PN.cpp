#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int x){
    if(x < 0) return false;

    vector<int> v;
    while(x > 0){
        v.push_back(x % 10);
        x /= 10;
    }
    if(v.size() == 1) return true;
    for(int i = 0; i < v.size() / 2; i++){
        if(v[i] != v[v.size() - 1 - i]) return false;
    }
    return true;
}

int main(){
    cout << "Inserisci: "; 
    int x; cin >> x;

    cout << (isPalindrome(x) ? "YES" : "NO");

    return 0;
}