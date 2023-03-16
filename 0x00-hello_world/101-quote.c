#include <unistd.h>
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = sizeof(str) - 1;
write(STDERR_FILENO, str, len);
return 1;
}
