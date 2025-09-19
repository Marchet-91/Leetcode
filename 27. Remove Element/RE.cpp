#include <bits/stdc++.h>

using namespace std;

// Solution
int removeElement(vector<int>& nums, int val) {
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] == val){
            nums.erase(nums.begin() + i);
            i--;
        }
    }
    return nums.size();  
}

int main(){
    vector<int> nums = {1,1,2};

    cout << removeElement(nums, 3);

    return 0;
}