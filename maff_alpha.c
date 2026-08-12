#include <unistd.h>

int main()
{
    char a;
    char b;
    a = 'B';
    b = 'a';
    while(b <= 'z' || a <= 'Z')
    {
        write(1, &b, 1);
        write(1, &a, 1);
        b += 2;
        a += 2;
    }
    write(1, "\n", 1);
    return (0);
}