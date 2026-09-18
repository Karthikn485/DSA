class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp=s+s;
        if(s.length()!=goal.length()){
            return false;
        }
        return temp.find(goal)!=string::npos;
        
    }
};