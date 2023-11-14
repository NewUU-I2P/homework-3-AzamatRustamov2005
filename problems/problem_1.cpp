#include <algorithm>

float problemSolution1(float consumed_water) {
    float cost;

    cost = 13;

    float t1, t2, t3, t4;
    t1 = std::min(static_cast<float>(30), consumed_water);
    consumed_water -= t1;
    t2 = std::min(static_cast<float>(20), consumed_water);
    consumed_water -= t2;
    t3 = std::min(static_cast<float>(10), consumed_water);
    consumed_water -= t3;
    t4 = consumed_water;
    consumed_water -= t4;
    
    cost += 0.4 * t1 + 0.12 * t2 + 1.4 * t3 + 1.5 * t4;

    return cost;
}
