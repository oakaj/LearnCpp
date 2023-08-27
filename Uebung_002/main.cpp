#include <iostream>

int main(int argc, char const *argv[])
{
    int a{ 3 };
    int b{ 5 };
    int c{   };

    c =  a + b;

    std::cout << "a+b=c | " << a << "+" << b << "=" << c << std::endl;

    return 0;
}
