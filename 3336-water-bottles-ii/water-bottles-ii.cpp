class Solution {
public:
    int maxBottlesDrunk(int numBottles, int ex) {
        int fb = 0;
        int em = numBottles;
        int n = 0;
        n = numBottles;

        while (ex <= em) {
            n++;
            em -= ex;
            em++;
            ex++;
        }
        return n;
    }
};