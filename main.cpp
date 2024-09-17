// asks user for street, city, etc. and prints out address
// code by Ryuya Hirota

#include <iostream>
#include <string>

int main() {
    std::string street;
    std::string city;
    std::string state;
    int zipcode;
    std::cout << "Street name? " << std::endl;
    std::cin >> street;
    std::cout << "City? " << std::endl;
    std::cin >> city;
    std::cout << "State? " << std::endl;
    std::cin >> state;
    std::cout << "Zip code? " << std::endl;
    std::cin >> zipcode;
    
    std::cout << "You live on " << street << " street in " << city << ", " << state << " with zipcode " << zipcode << "." << std::endl;
    return 0;
}
