/*
 * Given numRows, generate the first numRows of Pascal’s triangle.
 * For example, given numRows = 5, the result should be
 *
 *     	   [1]
 *     	  [1,1]
 *     	 [1,2,1]
 *     	[1,3,3,1]
 *     [1,4,6,4,1]
 */

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

	vector<vector<int>> generate(int numRows) {
        vector<int> row;
		vector<vector<int>> triangle;
		int triangle_idx = triangle.size();
		while(triangle_idx < numRows){
			if(triangle_idx == 0)
				row.push_back(1);
			else
				row = nextRow(triangle[triangle_idx-1]);
			triangle.push_back(row);
			triangle_idx = triangle.size();
		}
		return triangle;
	}
};

int main(void){
	int numRows;
	cout << "Enter number of rows: ";
	cin >> numRows;
	Solution s;
	vector<vector<int>> temp = s.generate(numRows);
	cout << endl << "-- Triangle -- " << endl;
	for(vector<int> row : temp){
		for(int val : row)
			cout << val << "\t";
		cout << endl;
	}
	return 0;
}
