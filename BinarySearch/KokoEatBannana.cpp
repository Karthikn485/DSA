class Solution {
public:
    int findmax(vector<int> &v ){
        int n=v.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
        }
        return maxi;
    }
    long long calculateTotalHours(vector<int> &v, int hourly){
        long long total_hours=0;
        int n=v.size();
        for(int i=0;i<n;i++){
            total_hours+=ceil((double)v[i]/hourly);
        }
        return total_hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findmax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long total_hours=calculateTotalHours(piles,mid);
            if(total_hours<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};