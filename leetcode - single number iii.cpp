class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // find two single number. suppose x and y
        long int xxory = 0;
        for (auto num : nums) {
            xxory = xxory ^ num;
        }
        // now we have two number in xxory
        // find right most set bit
        long int rsb_mask = xxory & (-xxory);
        // in xor operation, if bit is 1
        // that means in that position, the two number bit is not equal
        // we will filter the list into two part based on rsb
        long int x = 0;
        long int y = 0;
        for (auto num : nums) {
            if ((num & rsb_mask) == 0) {
                x = x ^ num;
            }
            else {
                y = y ^ num;
            }
        }
        vector<int> result;
        result.push_back(x);
        result.push_back(y);
        return result;
    }
};
