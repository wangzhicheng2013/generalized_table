#include "generalized_table.hpp"
int main() {
    generalize_table gt;
    const char* str = "(1,2,[3,[4,5]],6)";
    if (false == gt.init(str)) {
        std::cerr << "generalize_table init failed for expression:" << str << std::endl;
        return -1;
    }
    gt.print();
    std::cout << std::endl;
    std::cout << gt.depth() << std::endl;
    std::cout << gt.size() << std::endl;

    return 0;
}