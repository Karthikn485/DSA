class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            map<char,int> m;
            for(int j=i;j<s.size();j++){
                m[s[j]]++;
                int m_f=INT_MIN,l_f=INT_MAX;
                for(auto it:m){
                    m_f=max(m_f,it.second);
                    l_f=min(l_f,it.second);
                }
                ans+=(m_f-l_f);

            }
        }
        return ans;
        
    }
};