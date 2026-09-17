class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(auto it:s){
            m[it]++;
        }
        vector<pair<char,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](auto &a, auto&b){
            return a.second>b.second;
        });
        string ans="";
        for(auto &it:v){
            ans+=string(it.second,it.first);
        }
        return ans;
    }
};