#include <iostream>

int main() {
    int shoes[4];
    int output = 0;

    for (int i = 0; i < 4; i++) {
        std::cin >> shoes[i];

        for (int j = 0; j < i; j++) {
            if (shoes[i] == shoes[j]) {
                output++;
                break;
            }
        }
    }

    std::cout << output;

    return 0;
}