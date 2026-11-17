class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> dimensions(2);
        dimensions[0]=INT_MAX;
        dimensions[1]=0;

        int x=sqrt(area);
        for(int i=1;i<=x;i++){
            if(area%i==0){
                int len=max(i,area/i);
                int bre= min(i,area/i);
                if((dimensions[0]-dimensions[1])>(len-bre)){
                    dimensions[0]=len;
                    dimensions[1]=bre;
                }
            }
        }
        return dimensions;
    }
};