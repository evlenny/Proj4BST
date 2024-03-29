#include <iostream>
#include "tll.cpp" // Include your triplinkedlist header file here



int main() {
    // Create a triplinkedlist
    triplinkedlist<int, string> tll;

    // Test insert function
    Element<int, std::string> elem1(10, "Apple");
    Element<int, std::string> elem2(5, "Banana");
    Element<int, std::string> elem3(15, "Orange");
    Element<int, std::string> elem4(3, "Grapes");
    Element<int, std::string> elem5(7, "Mango");
    Element<int, std::string> elem6(12, "Peach");
    Element<int, std::string> elem7(17, "Kiwi");

    // Test insert function
    tll.insert(elem1);
    tll.insert(elem2);
    tll.insert(elem3);
    tll.insert(elem4);
    tll.insert(elem5);
    tll.insert(elem6);
    tll.insert(elem7);

    // Test empty function
    std::cout << "Is the list empty? " << (tll.empty() ? "Yes" : "No") << std::endl;

    // Test max_key and max_data functions
    auto maxKey = tll.max_key();
    auto maxData = tll.max_data();
    std::cout << "Max Key: " << maxKey << ", Max Data: " << maxData << std::endl;

    // Test min_key and min_data functions
    auto minKey = tll.min_key();
    auto minData = tll.min_data();
    std::cout << "Min Key: " << minKey << ", Min Data: " << minData << std::endl;

    return 0;
}
