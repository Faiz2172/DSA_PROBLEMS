class Solution {
public:
    set<vector<int>>s;

    void combSum(vector<int>& candidates,int i,vector<vector<int>>& result,vector<int>& ans,int target){
        int n=candidates.size();
        //base cases
        if(i==n || target<0) return;
        if(target==0) {
            if(s.find(ans)==s.end()){
                result.push_back(ans);
                s.insert(ans);
            }
        } 

        ans.push_back(candidates[i]);
        combSum(candidates,i+1,result,ans,target-candidates[i]);
        combSum(candidates,i,result,ans,target-candidates[i]);
        //backtracking step
        ans.pop_back();
        combSum(candidates,i+1,result,ans,target);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>ans;
        combSum(candidates,0,result,ans,target);
        return result;

    }
};
