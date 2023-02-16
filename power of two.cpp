// using while loops
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) {
            return false;
        }
        while(n % 2 == 0){
            n = n / 2;
            
        }
        
        return n == 1;
    }
};

// using bit manupulation
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) {
            return false;
        }
        if (n > 0 && (n & (n - 1)) == 0){
            return true;
        }
        return false;
    }
};
// time and space: O(1)
