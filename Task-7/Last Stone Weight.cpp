class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
            while(stones.size() > 1){
            sort(stones.begin(), stones.end(), greater<int>());
            int x = stones[0];
            int y = stones[1];
            
            stones.erase(stones.begin()+1);
            stones.erase(stones.begin()+0);
            
            if (x>y) stones.push_back(x-y);
            else if (x<y) stones.push_back(y-x);
            
        }
        if (stones.size() > 0) return stones[0];
        else return 0;  
     }
};