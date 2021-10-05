class NumArray {
public:
    vector<int> nums_vec;
    NumArray(vector<int>& nums) {
        nums_vec = nums;
    }

    int sumRange(int left, int right) {
        int sum = 0;
        while(left <= right) {
            sum += nums_vec[left];
            ++left;
        }

        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */