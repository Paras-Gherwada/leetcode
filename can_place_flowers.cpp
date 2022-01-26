class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int idx = 0;
        int size = flowerbed.size();
        while(idx < size && n > 0) {
            if(flowerbed[idx]) {
                idx += 2;
                continue;
            }
            if(((idx + 1) < size) && (flowerbed[idx + 1])) {
                idx += 1;
                continue;
            }
            
            flowerbed[idx] = 1;
            --n;
            idx += 2;
        }
        
        return (n == 0);
    }
};