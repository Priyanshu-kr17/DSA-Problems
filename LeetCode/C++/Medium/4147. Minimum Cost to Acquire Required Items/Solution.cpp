class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long cost=0;
        long long alltake = 0;
        long long partialtake=0;

        if(costBoth<cost1 && costBoth<cost2) return (long long)costBoth*max(need1,need2);
        if(costBoth>cost1 && costBoth>cost2){
            
            
            alltake+= (long long)costBoth*max(need1,need2);


            cost+= (long long)cost1*(long long)need1;
            cost+= (long long)cost2*(long long)need2;

            // both taking for less need
           if(need1>=need2){
            partialtake+= (long long)need2*(long long)costBoth;
            partialtake+= (need1-need2)*(long long)cost1;
           }

           else{
            partialtake+= (long long)need1*(long long)costBoth;
            partialtake+= (long long)(need2-need1)*(long long)cost2;
           }
            return (long long)min(cost,min(alltake,partialtake));

        }

        if(costBoth>=cost2){            

            if(need1>=need2)return (long long)costBoth*(long long)need1;

            else {
                alltake+= (long long)costBoth*(long long)need2;
                partialtake+= (long long)need1*(long long)costBoth;
                partialtake+= (long long)(need2-need1)*(long long)cost2;
            }

            return (long long)min(alltake,partialtake);

        }
            
            
        if(costBoth>=cost1){            

            if(need2>=need1) return (long long)costBoth*need2;
            else {
                alltake+= (long long)costBoth * (long long)need1;
                partialtake+= (long long)need2 * (long long)costBoth;
                partialtake+= (long long)(need1-need2) * (long long)cost1;
            }
            return (long long)min(alltake,partialtake);
        }
        return 0;

    }
};