#include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle) {
    if(haystack == needle) return 0;
    if(needle.size() > haystack.size()) return -1;
    for(int i = 0 ; i < haystack.size() - needle.size() + 1; i++){
        if(haystack[i] == needle[0]){
            if(haystack.substr(i, needle.size()) == needle){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    string haystack = "hello", needle = "ll";

    cout << strStr(haystack, needle);


    return 0;
}