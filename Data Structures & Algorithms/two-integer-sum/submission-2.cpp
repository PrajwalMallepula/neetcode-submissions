class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>temp;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            int need = target-nums[i];
            if(temp.find(need)!=temp.end()){
                
                arr.push_back(temp[need]);
                arr.push_back(i);
            }
            temp[nums[i]]=i;
        }
        return arr;
    }
};
