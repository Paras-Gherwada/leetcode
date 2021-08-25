class Solution {
public:
    int xorOperation(int n, int start) {
        int counter = 0;
        int exor = 0;
        while(counter < n){
            exor ^= (start + (2 * counter));
            ++counter;
        }
        return exor;
    }
};
