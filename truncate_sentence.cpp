class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> words;
        string temp;
        stringstream ss(s);
        while(getline(ss, temp, ' '))
            words.push_back(temp);

        temp = "";
        for(int idx = 0; idx < k; ++idx) {
            temp += words[idx];
            if(idx < k - 1)
                temp += " ";
        }
        
        return temp;
    }
};