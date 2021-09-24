#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int size  = *max_element(arr.begin(), arr.end()) + 1;
		vector<int> lucky(size, 0);

// 		cout << endl << "Size : " << size;

        for(int val : arr)
            ++lucky[val];

        --size;
        while(size > 0){
// 			cout << endl << "Size : " << size << "\t lucky[size] : " << lucky[size];
            if(size == lucky[size])
                break;
            --size;
        }

// 		cout << endl << endl;
        return (size == 0) ? -1 : size;
    }
};

int main(int args_c, char* args_v[]) {
	vector<int> data = {
// 		2, 2, 3, 4
// 		1,2,2,3,3,3
// 		2,2,2,3,3
// 		5
// 		7,7,7,7,7,7,7
		4,3,2,2,4,1,3,4,3
	};

	Solution s;
	cout << endl << "Lucky number : " << s.findLucky(data) << endl;
	return 0;
}
