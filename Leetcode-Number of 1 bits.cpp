// using kerninghan algorithm
// find out right most set bit and subtract it from given number
// By doing it, we are making the rst to 0
// we will do it untill the given number becomes 0
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n != 0){
            uint32_t rsb = n & (-n);
            n -= rsb;
            count++;
        }
        return count;
    }
};
