class Solution {
public:
    int ans=0;
    void solve(int i,int n,vector<bool>& used){
        if(i > n){
            ans++;
            return;
        }
        for(int j=1;j<=n;j++){
            if(!used[j]&&(j%i == 0 || i%j == 0)){
                used[j]=true;
                solve(i+1,n,used);
                used[j]=false;
            }
        }
    }
    int countArrangement(int n) {
        vector<bool> used(n+1,false);
        solve(1,n,used);
        return ans;
    }
};