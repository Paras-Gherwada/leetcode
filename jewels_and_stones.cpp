class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count_jewels = 0;
        for(char jewel : jewels)
            count_jewels += count(stones.begin(), stones.end(), jewel);
        
        return count_jewels;
    }
};