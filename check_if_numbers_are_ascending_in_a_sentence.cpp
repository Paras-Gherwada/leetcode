class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> numbers;
        stringstream ss(s);
        string word;
        while(getline(ss, word, ' ')) {
            try {
                numbers.push_back(stoi(word));
            } catch(exception e) {} 
        }
        
        for(int idx = 1; idx < numbers.size(); ++idx)
            if(numbers[idx] <= numbers[idx - 1])
                return false;
        
        return true;
    }
};