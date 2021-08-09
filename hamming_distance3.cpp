class Solution {
public:
    int hammingDistance(int x, int y) {
        string bin_x = bitset<32>(x).to_string();
    	string bin_y = bitset<32>(y).to_string();
	    int count = 0;
	    for(int idx = bin_x.size()-1; idx >= 0; --idx)
	        if(bin_x[idx] != bin_y[idx]) ++count;
	    return count;
    }
};

