class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(auto &p:hash){
            if(p.second>=2){
                return true;
            }
        }
        return false;
        
    }
};