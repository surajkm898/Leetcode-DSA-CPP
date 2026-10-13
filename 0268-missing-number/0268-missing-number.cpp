class Solution {
public:
    int missingNumber(vector<int>& nums) {
       /* int n = nums.size();
        int expectedsum = n * (n+1)/2;
        int actualsum = 0;
        for (int i=0 ;i<n;i++){
            actualsum += nums[i];
        }
        return expectedsum - actualsum; */
        int n = nums.size();
        for(int i=0;i<=n;i++){
            bool flag = false;
            for(int ele:nums){
                if(ele == i){
                    flag = true;
                    break;
                }
            }
            if(flag == false) return i;
        }
        return 0;
    }
};