vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int p_index=0,n_index=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[n_index]=nums[i];
                n_index+=2;

            }
            else{
                ans[p_index]=nums[i];
                p_index+=2;
            }
        }
        return ans;
        
    }