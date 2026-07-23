class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>hash;
        int rr = 0;
        
        for(int x:nums){
            hash[x]++;

        }
        int r = hash.size();
        int i = 0;
        for(auto &it:hash){
            if(i<r){
                nums[i] = it.first;
                i++;
            }
        }
        return r;

    }
};