class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> char_counter {
            {'b', 0},
            {'a', 0},
            {'l', 0},
            {'o', 0},
            {'n', 0},
        };
        
        for(char c : text) {
            switch(c) {
                case 'b':
                case 'a':
                case 'l':
                case 'o':
                case 'n':
                    ++char_counter[c];
            }
        }

        int min_val = 99999;
        for(auto x : char_counter) {
            if(x.first == 'l' || x.first == 'o')
                min_val = min(x.second / 2, min_val);
            else
                min_val = min(x.second, min_val);
        }
        
        return min_val;
    }
};