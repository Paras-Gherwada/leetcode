class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
            return "0";
        string mul = "";
        int size1 = num1.size(), size2 = num2.size(), c = 0;
        vector<int> count(size1 + size2 - 1, 0);
        for(int i = 0; i < size1; i ++)
            for(int j = 0; j < size2; j ++)
                count[i + j] += (num1[i] - '0') * (num2[j] - '0');
        
        for(auto i = count.rbegin(); i != count.rend(); i ++){
            int tmp = *i + c;
            mul.insert(mul.begin(), tmp % 10 + '0');
            c = tmp / 10;
        }
        if(c)
            mul.insert(mul.begin(), c + '0');
        return mul;
    }
};
