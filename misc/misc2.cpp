// given that a string of length n, replaces all occurances of "plus" with "+" and all occurances of "minus" with "-"
#include <iostream>
#include <string>
#include <algorithm>

std::string replaceWords(const std::string &input) {
    std::string result = input;
    std::string::size_type pos = 0;

    while ((pos = result.find("plus", pos)) != std::string::npos) {
        result.replace(pos, 4, "+");
        pos += 1;
    }

    pos = 0;
    while ((pos = result.find("minus", pos)) != std::string::npos) {
        result.replace(pos, 5, "-");
        pos += 1;
    }

    return result;
}

int main() {
    std::string input = "3plus5minus2plus1minus7";
    std::string output = replaceWords(input);

    std::cout << "Input: " << input << std::endl;
    std::cout << "Output: " << output << std::endl;

    return 0;
}
