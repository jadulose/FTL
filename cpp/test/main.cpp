//
// Created by hamlet on 2021/9/28.
//

#include "../farraylist.h"
#include <iostream>

void print_list(const fs::ArrayList<int> &list) {
    if (list.isEmpty()) {
        std::cout << "[]" << std::endl;
        return;
    }
    std::cout << "[" << list.get(0);
    for (int i = 1; i < list.length(); ++i)
        std::cout << ", " << list.get(i);
    std::cout << "]" << std::endl;
}

int main() {
    fs::ArrayList<int> my_list{};
    for (int i = 0; i < 30; ++i) {
        my_list.append(i + 1);
    }
    std::cout << my_list.length() << std::endl;
    for (int i = 20; i < 40; ++i) {
        my_list.append(i);
        my_list.set(i - 10, 99);
    }
    for (int i = 4; i < 7; ++i) {
        my_list.remove(i);
    }
    print_list(my_list);
    std::cout << std::endl << my_list.length() << std::endl;
    my_list.clear();
    print_list(my_list);
}
