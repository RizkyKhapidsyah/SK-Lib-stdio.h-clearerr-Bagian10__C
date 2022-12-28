#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    int c;
    errno_t err;

    putc('c', stdin);

    if (ferror(stdin)) {
        perror("Write error");
        err = clearerr_s(stdin);
        
        if (err != 0) {
            abort();
        }
    }

    printf("Will input cause an error? ");
    c = getc(stdin);

    if (ferror(stdin)) {
        perror("Read error");
        err = clearerr_s(stdin);

        if (err != 0) {
            abort();
        }
    }

    _getch();
    return 0;
}