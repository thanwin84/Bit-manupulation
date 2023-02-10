class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = 0;
        for (auto num: nums){
            x = x ^ num;
        }
        for (int num = 0; num <= nums.size(); num++){
            x = x ^ num;
        }
        return x;
    }
};
