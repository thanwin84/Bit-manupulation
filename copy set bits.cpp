class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        if (x == y){
            return x;
        }
        int mask = 0;
        if (r - l + 1 == 32){
             mask = ((1 << (r - l)) -1);
        }
        else {
            mask = (1 << (r - l + 1)) -1;
        }
        mask = mask << (l - 1);
        int bits = mask & y;
        x = x | bits;
        return x;
    }
};
