#include<iostream>
#include<vector>
#include<strings.h>

using namespace std;

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int size = keysPressed.size();
	int max = releaseTimes[0];
	char max_char = keysPressed[0];
        int idx = 1;
        while(idx < size){
		int difference = releaseTimes[idx] - releaseTimes[idx -1];
		if((difference > max) || (difference == max && keysPressed[idx] > max_char)){
			max = difference;
			max_char = keysPressed[idx];
		}
		++idx;
        }
        
        return max_char;
    }
};


int main(void){
	vector<int> releaseTimes = {12, 23, 36, 46, 62};
	string keysPressed = "spuda";
	Solution s;
	cout << s.slowestKey(releaseTimes, keysPressed) << endl;
	return  0;
}
