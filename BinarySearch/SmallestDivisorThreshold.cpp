class Solution {
public:
    int sumbyd(vector<int> &arr, int d){
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=ceil((double)arr[i]/(double)d);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(sumbyd(nums,mid)<=threshold){
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};