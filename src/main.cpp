#include <iostream>
#include "../libs/my_lib/src/say.h"
#include <string>
#include <conio.h>

using namespace std;

int main() {
    string name;
    int x;
    std::cout << "Hello World!!" << std::endl;
    cout << "Enter your name : ";
    std::cin >> name;
    greeting(name);
    getch();
}