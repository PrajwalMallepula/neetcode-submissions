class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ele = 1;
        int n = nums.size();
        for(int i = 1; i < n+1; i++){
            bool fnd = false;
            for(int j = 0; j < n; j++){
                if(nums[j] == i){
                    fnd = true;
                }
            }
            if(fnd == false){
                return i;
            }
        }
    }
};