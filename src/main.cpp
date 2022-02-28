#include <iostream>
#include "../libs/my_lib/src/say.h"
#include <string>

using namespace std;

int main() {
    string name;
    std::cout << "Hello World!!" << std::endl;
    cout << "Enter your name : ";
    std::cin >> name;
    greeting(name);
}