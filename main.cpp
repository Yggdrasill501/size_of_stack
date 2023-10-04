#include <iostream>

void test() {
    int arr[1000];
    static int counter = 1;
    counter++;
    std::cout << counter << std::endl;
    test();
}

int main() {
    test();
    return 0;
}
