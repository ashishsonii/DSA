class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

       
        int c=numBottles;
        int emp=numBottles;
        while(emp>=numExchange){
            
            numBottles=emp/numExchange;
            c+=numBottles;
            emp=numBottles+(emp % numExchange);
            
            
        }
        return c;

    }
};