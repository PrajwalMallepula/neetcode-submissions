class Solution {
    private:
        int findd(vector<int>&piles,int n,int mid){
            int sum = 0;
            for(int i = 0; i < n; i++){
                sum += ceil(double(piles[i])/mid);
            }
            return sum;
        }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int n = piles.size();
        if(n > h){
            return -1;
        }
        int ans = -1;
        int high = *max_element(piles.begin(),piles.end());
        while(low <= high){
            
            int mid = (low+high)/2;
            int midN = findd(piles,n,mid);
            if(midN <= h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }
        return ans;


    }
};
