//
// Created by hamlet on 2021/9/28.
//

#include "farraylist.h"
#include <iostream>

int main() {
    fs::ArrayList<int> my_list{};
    for (int i = 0; i < 10; ++i) {
        my_list.append(i + 1);
    }
    std::cout << my_list.length() << std::endl;
    for (int i = 0; i < my_list.length(); ++i) {
        std::cout << my_list.get(i) << " ";
    }
}
