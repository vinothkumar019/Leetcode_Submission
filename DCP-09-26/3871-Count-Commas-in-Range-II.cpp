class Solution {
public:
    long long countCommas(long long n) {
        long long low=1000;
        long long commas=1;
        long long ans=0;
        while(low<=n){
            long long high=low*1000-1;
            long long count=min(n,high)-low+1;
            if(count>0){
                ans += (count*commas);
            }
            low *= 1000;
            commas++;
        }
        return ans;
    }
};