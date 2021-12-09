class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int row = 0; row < image.size(); ++row) {
            for(int col = 0; col < image.size() / 2; ++col) {
                image[row][col] ^= image[row][image.size() - col - 1];
                image[row][image.size() - col - 1] ^= image[row][col];
                image[row][col] ^= image[row][image.size() - col - 1];
            }
            
            for(int col = 0; col < image.size(); ++col)
                image[row][col] = !image[row][col];
        }
        
        return image;
    }
};