#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    for(int i = 0 ; i < nums.size() ; i++){
        if(i == nums.size() - 1) break;
        if(nums[i] == nums[i+1]){
            nums.erase(nums.begin() + i);
            i--;
        }
    }
    return nums.size();  
}

int main(){
    vector<int> nums = {1,1,2};

    cout << removeDuplicates(nums);

    return 0;
}