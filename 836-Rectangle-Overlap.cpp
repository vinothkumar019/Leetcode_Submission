class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x_min = max(rec1[0],rec2[0]);
        int y_min = max(rec1[1],rec2[1]);
        int x_max = min(rec1[2],rec2[2]);
        int y_max = min(rec1[3],rec2[3]);

        int width = max(0,x_max-x_min);
        int height = max(0,y_max-y_min);
        return width > 0 && height > 0;
    }
};