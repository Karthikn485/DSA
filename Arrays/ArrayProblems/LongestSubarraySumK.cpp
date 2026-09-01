 int longestSubarray(vector<int> &nums, int k){
         int left=0,right=0;
        int max_len=0;
        int sum=0;
        int n=nums.size();

        while(right<n){

            sum += nums[right];

            while(sum>k && left<=right){
                sum -= nums[left];
                left++;
            }

            if(sum==k){
                max_len=max(max_len,right-left+1);
            }

            right++;
        }

        return max_len;
        
    }