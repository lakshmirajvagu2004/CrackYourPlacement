class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,k=nums.size()-1;
        while(i<=k){
            if(nums[i]==0){
                swap(nums[i],nums[j]);
                j++,i++;
            }
            else if(nums[i]==2){
                swap(nums[k],nums[i]);
                k--;
            }
            else{
           i++;
            }
        }
    }
};
