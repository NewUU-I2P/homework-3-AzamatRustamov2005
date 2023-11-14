#include <algorithm>

float problemSolution1(float consumed_water) {
    float cost;

    cost = 13;

    float t1, t2, t3, t4;
    t1 = std::min(30.0, consumed_water);
    consumed_water -= t1;
    t2 = std::min(20.0, consumed_water);
    consumed_water -= t2;
    t3 = std::min(10.0, consumed_water);
    consumed_water -= t3;
    t4 = consumed_water;
    consumed_water -= t4;
    
    cost += 0.4 * t1 + 0.12 * t2 + 1.4 * t3 + 1.5 * t4;

    return cost;
}
