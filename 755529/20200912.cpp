#include <iostream>
using namespace std;

int main() {
    string str;
    std::cout << "請輸入你的名字:";
    std::cin >> str;
    std::cout << "你的名字是" + str;
}