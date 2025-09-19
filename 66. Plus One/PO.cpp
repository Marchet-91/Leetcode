#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int i = digits.size() - 1;
    digits[i]++;
    while(digits[i] == 10){
        digits[i] = 0;
        i--;
        if(i < 0){
            digits.insert(digits.begin(), 1);
            return digits;
        } else digits[i]++;
    }     
    return digits;
}

int main(){

    vector<int> digits = {9};
    digits.push_back(8);
    cout << digits[1];

    digits = plusOne(digits);

    return 0;
}