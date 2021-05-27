#include <iostream>
#include <memory>
#include "user_interface.h"

int main()
{
    std::unique_ptr<UserInterface> interface;
    while (interface->sign_in());

    return 0;
}
