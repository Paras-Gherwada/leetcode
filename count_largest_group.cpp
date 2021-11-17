class Solution {
private:
    int find_sum(int num) {
        int sum = 0;
        while(num) {
            sum += (num % 10);
            num /= 10;
        }
        return sum;
    }
public:
    int countLargestGroup(int n) {
        vector<int> counter(37, 0);
        for(int num = 1; num <= n; ++num)
            ++counter[find_sum(num)];
        
        return count(counter.begin(), counter.end(), *max_element(counter.begin(), counter.end()));
    }
};