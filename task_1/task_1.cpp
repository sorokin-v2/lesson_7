#include <iostream>
#include<vector>
#include<set>
#include <algorithm>

std::vector<int> get_unique(const std::vector<int>& src) {
    std::set<int> unique_src(src.cbegin(), src.cend());
    return std::vector<int>(unique_src.cbegin(), unique_src.cend());
}

//Не знаю какой вариант эффективнее

std::vector<int> get_unique2(std::vector<int> src) {
    std::sort(src.begin(), src.end());
    src.erase(std::unique(src.begin(), src.end()), src.end());
    return src;
}

int main()
{
    std::vector<int> src = { 1, 1, 2, 5, 6, 1, 2, 4 };
    for (const auto& val : src) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    std::vector<int> out = get_unique(src);
    for (const auto& val : out) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    out = get_unique2(src);
    for (const auto& val : out) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
