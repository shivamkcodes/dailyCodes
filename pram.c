#include <stdio.h>
#define cube(x) (x * x * x)
int main()

{

    // char *const p = "abcd";

    // clrscr();

    // while (*p != '\0')

    // {

    //     ++(*p);

    //     p++;
    // }

    // printf("%s", p);

    // int a = 2, *f1, *f2;

    // // clrscr();

    // f1 = f2 = &a;

    // *f2 += *f2 += a += 2.5;

    // printf("%d %d %d", a, *f1, *f2);

    int a, b = 3;

    // clrscr();

    a = cube(b++) / b++;

    printf("a=%d b=%d", a, b);

    // getch();
    return 0;
}