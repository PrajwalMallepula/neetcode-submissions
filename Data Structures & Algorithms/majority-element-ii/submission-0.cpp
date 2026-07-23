class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>hash;
        int n = nums.size();
        int limit = n/3;
        set<int>ans;
        for(int x:nums){
            hash[x]++;
            if(hash[x] > limit){
                ans.insert(x);
            }
        }
        vector<int>v(ans.begin(),ans.end());
        
        return v;
    }
};