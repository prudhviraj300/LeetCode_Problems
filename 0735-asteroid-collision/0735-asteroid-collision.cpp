class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        if(asteroids.empty()){
            return {};
        }
        vector<int> ans;

        for(int i = 0; i < n; i++){
            bool alive = true;
            while(!ans.empty() && ans.back() > 0 && asteroids[i] < 0){
                if(ans.back() > -asteroids[i]){
                    alive = false;
                    break;
                }else if(ans.back() < -asteroids[i]){
                    ans.pop_back();
                }else{
                    alive = false;
                    ans.pop_back();
                    break;
                }
            }

            if(alive){
                ans.push_back(asteroids[i]);
            }
        }

        return ans;
    }
};