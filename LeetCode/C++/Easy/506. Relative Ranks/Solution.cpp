class Solution {
public:
   
    vector<string> findRelativeRanks(vector<int>& score) {
        string first  = "Gold Medal";
        string second  = "Silver Medal";
        string third  = "Bronze Medal";
        int n = score.size();

        vector<string> ranks(n);
        priority_queue<pair<int,int>> pq;

            for(int i=0;i<n;i++){
                pq.push({score[i],i});
            }
       
            auto ele = pq.top();
            pq.pop();
            ranks[ele.second]=first;
            if(n==1) return ranks;

            ele = pq.top();
            pq.pop();
            ranks[ele.second]=second;
            if(n==2) return ranks;

            ele = pq.top();
            pq.pop();
            ranks[ele.second]=third;
            if(n==3) return ranks;

        int i=4;

        while(!pq.empty()){
            auto ele = pq.top();
            pq.pop();
            ranks[ele.second] = to_string(i);
            i++;
        }

        return ranks;
    }
};