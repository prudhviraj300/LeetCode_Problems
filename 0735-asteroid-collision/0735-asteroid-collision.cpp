class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        int len = asteroids.size();

        vector<int> ans;

        for(int i = 0; i < len; i++){
            bool flag = false;

            while(!ans.empty() && ans.back() > 0 && asteroids[i] < 0){
                if(ans.back() < -(asteroids[i])){
                    ans.pop_back();
                }else if(ans.back() == -asteroids[i]){
                    flag = true;
                    ans.pop_back();
                    break;
                }else{
                    flag = true;
                    break;
                }
            }
            if(!flag){
                ans.push_back(asteroids[i]);
            }
        }
        return ans;
    }
};