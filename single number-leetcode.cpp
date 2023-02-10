class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (auto num: nums){
            result = (result ^ num);
        }
        return result;
    }
};
// time: O(n) and space: O(1)
