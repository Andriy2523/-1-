#include <iostream>


int main() {
    int num;
    std::cout << "enter number of rows: "; //ввести к-сть рядків
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        //виводимо пробіли
        for (int x = 0; x <= i - 1; x++) {
            std::cout << " ";
        }
        for (int x = 1; x <= num - i; x++) {
            std::cout << i;
        }
        for (int x = 2; x <= num - i; x++) {
            std::cout << i;
        }
        std::cout << '\n';
    }
    return 0;
}