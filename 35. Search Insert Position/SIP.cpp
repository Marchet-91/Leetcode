#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int d = 0, s = nums.size() - 1;
    while(d <= s){
        int m = ((s - d) / 2) + d;
        if(nums[m] == target) return m;
        if(nums[m] < target) d = m + 1;
        else s = m - 1;
    }
    return d;
}

int main(){

    vector<int> nums;
    int target;

    return 0;
}