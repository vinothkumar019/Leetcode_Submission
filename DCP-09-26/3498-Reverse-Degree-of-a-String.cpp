class Solution {
public:
    int reverseDegree(string s) {
        int i=1;
        int res=0;
        for(char ch:s){
            res += abs(ch-123)*(i++);
        }
        return res;
    }
};