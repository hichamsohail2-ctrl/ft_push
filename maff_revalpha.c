#include <unistd.h>

int main()
{
    char z;
    char Y;
    z = 'z';
    Y = 'Y';
    while(z >= 'a' || Y >= 'a')
    {
        write(1, &z, 1);
        write(1, &Y, 1);
        z -= 2;
        Y -= 2;
    }
    return (0);
}