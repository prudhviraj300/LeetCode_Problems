class Solution {
public:
    bool rotateString(string s, string goal) {
        int strLength = s.length();
        int goalLength = goal.length();

        if( strLength != goalLength)    return false;

        s = s + s;

        for(int i = 0; i < strLength; i++){
            string comp = s.substr(i,goalLength);
            if(comp == goal)    return true;
        }

        return false;        
        
    }
};