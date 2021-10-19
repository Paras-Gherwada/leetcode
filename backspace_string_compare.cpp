#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> stack_1, stack_2;
        for(char c : s) {
            if(c == '#') {
                if(stack_1.empty())
                    continue;
                else
                    stack_1.pop_back();
            }
            else {
                stack_1.push_back(c);
            }
        }
        
        for(char c : t) {
            if(c == '#') {
                if(stack_2.empty())
                    continue;
                else
                    stack_2.pop_back();
            }
            else {
                stack_2.push_back(c);
            }
        }
        
	bool is_same = stack_1.empty() && stack_2.empty();
        if(stack_1.size() == stack_2.size()) {
            for(int idx = 0; idx < stack_1.size(); ++idx) {
                is_same = (stack_1[idx] == stack_2[idx]);
                if(!is_same) break;
            }
        }
        
        return is_same;
    }
};

int main(int args_c, char* args_v[]) {
	string s, t;
	cout << "Enter string s : ";
	cin >> s;
	cout << "Enter string t : ";
	cin >> t;

	Solution ss;
	cout << "Result : " << ss.backspaceCompare(s, t) << endl;
	return 0;
}
