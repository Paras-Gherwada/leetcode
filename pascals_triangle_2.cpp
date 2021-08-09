#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	vector<int> nextRow(vector<int> prev){
		vector<int> next;
		int idx = 0;
		while(next.size() <= prev.size()){
			if(idx == 0 || idx == prev.size())
				next.push_back(1);
			else
				next.push_back(prev[idx-1]+prev[idx]);
			++idx;
		}
		return next;
	}

    	vector<int> getRow(int rowIndex) {
        	vector<int> row;
		row.push_back(1);
		while(row.size() < rowIndex+1)
			row = nextRow(row);
		return row;
    	}
};


int main(void){
	int rowIdx;
	cout << "Enter rowIdx: ";
	cin >> rowIdx;
	Solution s;
	vector<int> result = s.getRow(rowIdx);
	cout << endl << "-- Row -- " << endl;
	for(int val : result) cout << val << "\t";
	cout << endl;
	return 0;
}
