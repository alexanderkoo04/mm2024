#include <bits/stdc++.h>

int main() {
    std::string input_line;
    int counter = 0;
    while (std::getline(std::cin, input_line)) {
        counter++;
    }

    // std::cin >> input_line;

    // auto it = input_line.find("[STOP]");
    // if (it != std::string::npos) {
    //     counter++;
    // }

    std::cout << counter << "\n";
    return 0;
}