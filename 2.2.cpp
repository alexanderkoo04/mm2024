#include <bits/stdc++.h>

int main() {
    std::string input_string;

    std::vector<std::string> map;

    int ans = 0;
    int obj_size = 15;

    while (std::getline(std::cin, input_string)) {
        map.push_back(input_string);
    }
    // ACCESS USING [ROW][COLUMN]
    bool flag = true;

    for (int i = 0; i < map.size() - obj_size; ++i) {
        for (int j = 0; j < map[0].size() - obj_size; ++j) {
            flag = true;

            for (int k = i; k < i + obj_size; k++) {
                for (int m = j; m < j + obj_size; m++) {
                    if (map[k][m] != '.') {
                        flag = false;
                        break;
                    }
                }
                if (!flag) {
                    break;
                }
            }
            if (flag) {
                ans++;
            }
        }
    }

    std::cout << "map.size() = " << map.size() << std::endl;
    std::cout << "map[0].size() = " << map[0].size() << std::endl;
    std::cout << "Answer lol = " << ans << std::endl;

    return 0;
}