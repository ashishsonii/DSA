class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& nums) {
        double mx=-2;
        for(int i=0; i<nums.size()-2; i++){
           
            for(int j=i+1; j<nums.size(); j++){
             
                for(int k=j+1; k<nums.size(); k++){
                   double x1 = nums[i][0], y1 = nums[i][1];
                    double x2 = nums[j][0], y2 = nums[j][1];
                    double x3 = nums[k][0], y3 = nums[k][1];

                    
                   
                    double ar=fabs(x1*(y2-y3)+ x2*(y3-y1)+x3*(y1-y2))/2.0;
                    mx=max(mx,ar);
                }

            }
        }
        return mx;
        
    }
};