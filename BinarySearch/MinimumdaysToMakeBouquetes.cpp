class Solution {
public:
    bool possible(vector<int> &arr,int day,int m,int k){
        int cnt=0;
        int nofb=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                cnt++;
            }
            else{
                nofb+=(cnt/k);
                cnt=0;
            }
        }
        nofb+=(cnt/k);
        return nofb>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val= m*1LL*k*1LL;
        if(val>bloomDay.size()){
            return -1;
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<bloomDay.size();i++){
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }
        int low=mini;
        int high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                
                high=mid-1;
            }
            else{
               low=mid+1;
            }
        }

      return low;        
    }
};