#include <iostream>
int main()
{
    if (!(std::cout << "hello"))
        std::cout << "world";
    else
        std::cout << " else part";
  
    return 0;
}