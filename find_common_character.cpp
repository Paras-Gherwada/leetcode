#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
		vector<int> char_counter(26, 9999999);
		for(string word : words) {
			vector<int> temp_counter(26, 0);
			for(char c : word)
				++temp_counter[c - 'a'];

			for(int idx = 0; idx < 26; ++idx) {
				if(temp_counter[idx] < char_counter[idx])
					char_counter[idx] = temp_counter[idx];
			}
		}

		vector<string> result;
		for(int idx = 0; idx < 26; ++idx) {
			for(int val = char_counter[idx]; val > 0; --val) {
				result.push_back(string(1, 'a' + idx));
			}
		}

        return result;
	}
};

int main(int args_c, char* args_v[]) {
	vector<string> input = {
// 		"bella", "label", "roller"
		"cool","lock","cook"
// 		"acabcddd","bcbdbcbd","baddbadb","cbdddcac","aacbcccd","ccccddda","cababaab","addcaccd"
	};

	Solution s;
	for(string val : s.commonChars(input))
		cout << val << "\t";

	cout << endl;
	return 0;
}
