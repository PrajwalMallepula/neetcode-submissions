class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int limit = n/2;
        map<int,int>hash;
        int rr = 0;
        for(int i = 0; i<n; i++){
            hash[nums[i]]++;
            if(hash[nums[i]] > limit){
                rr = nums[i];
            }
        }
        return rr;
        
    }
};