#include <bits/stdc++.h>

int main() {
    std::string input_string;
    int counter = 0;
    while (std::getline(std::cin, input_string)) {
        for (int i = 0; i < input_string.size(); i++) {
            if (input_string[i] == '.') {
                counter++;
            }
        }
    }
    std::cout << counter << std::endl;
    return 0;
}