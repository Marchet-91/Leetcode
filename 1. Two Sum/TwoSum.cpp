#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

// Solution
vector<int> twoSum(vector<int>& nums, int target) {
    int j;
    for(int i = 0 ; i < nums.size() ; i++){
        if(find(nums.begin(), nums.end(), target - nums[i]) != nums.end()){
            j = find(nums.begin(), nums.end(), target - nums[i]) - nums.begin();
            if(i != j) return {i, j};
        }
    }
    return {0};
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n; 
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int target; cin >> target;

    vector<int> ans = twoSum(nums, target);
    for(int i = 0; i < 2; i++) cout << ans[i] << endl;

    return 0;
}