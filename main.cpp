#include <iostream>

void test() {
    static int counter = 1;
    counter++;
    std::cout << counter << std::endl;
    test();
}

int main() {
    test();
    return 0;
}
