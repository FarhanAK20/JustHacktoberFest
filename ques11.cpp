// Question LInk : https://leetcode.com/problems/jump-game/
//Level : Medium 
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int last=n-1,i,j;
    for(i=n-2;i>=0;i--){
        if(i+nums[i]>=last)last=i;
    }
    return last<=0;   
    }
};