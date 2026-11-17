class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {     
        int total = numBottles, empty = numBottles;
        while (empty >= numExchange) {
            int full = empty / numExchange;
            total += full;
            empty = empty % numExchange + full;
        }
        return total;
    }
};