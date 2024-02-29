#include <iostream>
 
int main()
{
    int age = 23;
    std::cout << "Step 1: Age = " << age << '\n';

    age = 24;
    std::cout << "Step 2: Age = " << age << '\n';

    age = 26;
    std::cout << "Step 3: Age = " << age << '\n';

    bool isTrusted = {true}; // by default 1
    std::cout << "Is Very good day " << isTrusted << '\n';

    isTrusted = false; // be value 0
    std::cout << "Now very good day " << isTrusted << '\n';
} 