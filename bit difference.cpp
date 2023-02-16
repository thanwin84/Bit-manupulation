// Take xor values of a and b and then count number of set bits present in xor value.

//Calculate (A XOR B), since 0 XOR 1 and 1 XOR 0 is equal to 1. So calculating the number of set bits in A XOR B will give us the count of the number of unmatching bits in A and B,
// which needs to be flipped.
class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int _xor = a ^ b;
        int count = 0;
        while(_xor > 0){
            int rmsb = _xor & (-_xor);
            _xor -= rmsb;
            count++;
        }
        return count;
        
    }
};
