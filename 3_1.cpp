#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<bool> bardaklar(N, false);

    for (int k = 1; k <= N; ++k) {
        for (int i = k - 1; i < N; i += k) {
            bardaklar[i] = !bardaklar[i];
        }
    }

    for (int i = 0; i < N; ++i) {
        if (bardaklar[i]) {
            std::cout << (i + 1) << std::endl;
        }
    }

    return 0;
}
