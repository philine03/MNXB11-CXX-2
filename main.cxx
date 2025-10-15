/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
    /*
    // as 1.1
    int a = 1, b = 2, c = 3;

    int* a_ptr = &a; 
    int* b_ptr = &b;
    int* c_ptr = &c;

    std::cout << a_ptr << " is adress of " << *a_ptr << std::endl;
    std::cout << b_ptr << " is adress of " << *b_ptr << std::endl;
    std::cout << c_ptr << " is adress of " << *c_ptr << std::endl;
    std::cout << "after swaping: \n";

    swap_ptr(a_ptr, b_ptr, c_ptr);
    std::cout << a_ptr << " is adress of " << *a_ptr << std::endl;
    std::cout << b_ptr << " is adress of " << *b_ptr << std::endl;
    std::cout << c_ptr << " is adress of " << *c_ptr << std::endl;

    // as 1.2
    UniqueData unique = 10;
    std::cout << "get() method returns: " << unique.get() << std::endl;
    unique.set(20);
    std::cout << "after using set(), get() returns: " << unique.get() << std::endl;
    */

    // as 2.1
    Knight knight1("Bob");
    knight1.setWeapon("sword");
    knight1.attack();
    std::cout << "knight 1 is called " << knight1.getName() << ". \n";
    auto knight2 = knight1.clone();
    std::cout << "Copied knight 2 is also called " << knight2->getName() << ". \n"; // -> used bacause knight2 is a pointer

    // as 2.2
    Sorcerer sorcerer1("Merlin");
    sorcerer1.setAbility("throwing snowball");
    sorcerer1.attack();
    std::cout << "sorcerer 1 is called " << sorcerer1.getName() << ". \n";
    auto sorcerer2 = sorcerer1.clone();
    std::cout << "Copied sorcerer 2 is also called " << sorcerer2->getName() << ". \n";
    
    // as 2.3
    Duel<Knight, Sorcerer> duel1(&knight1, &sorcerer1);
    auto winner_ptr = duel1.fight();
    std::cout << "Winner: " << winner_ptr->getName() << ". \n";


  
}

