#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    for (int i = 1; i <= 5; ++i) {
        vec.push_back(i);
    }
    
	std::list<int> lst;
    for (int i = 1; i <= 5; ++i) {
        lst.push_back(i);
    }

	std::deque<int> deq;
    for (int i = 1; i <= 5; ++i) {
        deq.push_back(i);
    }

    try {
        std::cout << "Found in vector at index: " << easyfind(vec, 3) << std::endl;
        std::cout << "Found in list at index: " << easyfind(lst, 3) << std::endl;
        std::cout << "Found in deque at index: " << easyfind(deq, 3) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}