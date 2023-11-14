#include <string>

std::string problemSolution3(float height, char S) {
    std::string description;
    float delta = S == 'M' ? 0 : 0.10;
    
    if (height + delta < 1.70)
        description = "Short";
    else if (height + delta < 1.85)
        description = "Short";
    else
        description = "Short";
    
    return description;
}
