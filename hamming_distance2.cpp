class Solution {
    vector<int> intToBinary(int number){
    	vector<int> bin_stream;
	while(number != 0){
            bin_stream.push_back(number&1);
	    number /= 2;
    	}
	return bin_stream;
    }
    
public:
    int hammingDistance(int x, int y) {
        vector<int> bin_x = intToBinary(x);
    	vector<int> bin_y = intToBinary(y);
	while(bin_x.size() > bin_y.size()) bin_y.push_back(0);
	while(bin_y.size() > bin_x.size()) bin_x.push_back(0);
	int count = 0;
	for(int idx = 0; idx < bin_x.size(); ++idx)
	    if(bin_x[idx] != bin_y[idx]) ++count;
	return count;
    }
};

