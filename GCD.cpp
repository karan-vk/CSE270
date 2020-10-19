#include <iostream>

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        return gcd(a - b, b);
    }
    return gcd(a, b - a);
}
int main()
{
    int a = 55, b = 65;
    std::cout << "gcd of a " << a << "and " << b << "is " << gcd(a, b);
    return 0;
}