#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    std::string result;

    bool is_ff = 1, is_even = 0;
    
    for (int i = 0; i + 1 < macAddress.size(); i += 3) {
        is_ff &= macAddress.substr(i, 2) == "FF";
    }

    char parityDigit = macAddress[1];
    if ('0' <= parityDigit && parityDigit <= '9')
        is_even = (parityDigit - '0') % 2 == 0;
    if ('A' <= parityDigit && parityDigit <= 'F')
        is_even = (parityDigit - 'A') % 2 == 0;

    if (is_ff) result = "Broadcast";
    else if (is_even) result = "Unicast";
    else result = "Multicast";

    return result;
}
