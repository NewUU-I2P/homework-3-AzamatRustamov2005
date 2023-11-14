#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    std::string result;

    bool is_ff = 1, is_even = 0;
    
    for (int i = 0; i < macAddress.size(); i++) {
        is_ff &= macAddress.substr(i, 2) == "FF";
    }

    char parityDigit = macAddress[1];
    if ('0' <= parityDigit <= '9')
        is_even = (parityDigit - '0') % 2 == 0;
    if ('A' <= parityDigit <= 'F')
        is_even = (parityDigit - 'A') % 2 == 0;

    if (typeA) result = "Broadcast";
    else if (typeB) result = "Unicast";
    else result = "Multicast";

    return result;
}
