class Solution {
public:
    int finalValueAfterOperations(vector<string> &op) {
        int tx=0;

        for(auto x: op ){
            if(x=="--X" ||x=="X--" ) tx-=1;
            else tx++;
        }
        return tx;
        
    }
};