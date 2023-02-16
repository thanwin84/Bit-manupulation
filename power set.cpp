class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        int subsetSize = nums.size();
        int numberOfSubsets = 1 << subsetSize;
        for (int subsetMask = 0; subsetMask < numberOfSubsets; subsetMask++){
            vector<int> subset;
            for (int i = 0; i < subsetSize; i++){
                if ((subsetMask & (1 << i)) != 0){
                    subset.push_back(nums[i]);
                }
            }
            subsets.push_back(subset);
        }
        return subsets;
    }
};

// time: O(n * 2^n)
