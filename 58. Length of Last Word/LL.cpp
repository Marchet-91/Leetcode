#include <bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s) {
    for(int i = s.size() - 1; i >= 0; i--){
        int ans = 0;
        while(i >= 0 && s[i] != ' '){
            ans++;
            i--;
        }
        if(ans != 0) return ans;
    }
    return 0;
}

int main(){
    string s;

    return 0;
}