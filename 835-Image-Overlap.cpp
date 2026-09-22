class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1,
                       vector<vector<int>>& img2) {

        int n = img1.size();

        vector<pair<int,int>> A, B;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                if(img1[i][j])
                    A.push_back({i, j});

                if(img2[i][j])
                    B.push_back({i, j});
            }
        }

        unordered_map<int, int> mp;
        int ans = 0;

        for(auto [i, j] : A) {
            for(auto [x, y] : B) {

                int dx = x - i;
                int dy = y - j;

                // Encode (dx, dy) into one integer
                int key = (dx + n) * (2 * n + 1) + (dy + n);

                mp[key]++;

                ans = max(ans, mp[key]);
            }
        }

        return ans;
    }
};