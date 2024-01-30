#include <ctype.h>
#include <ncurses.h>

int main (void)
{
    int ch;
    int age = 0;

    initscr();
    cbreak();
    noecho();

    printw("Enter your age : ");

    while (1) {
        ch = getch();

        if (ch == 10) {
            break;
        }
        if (isdigit(ch)) {
            printw("%c", ch);
            refresh();
            age = age * 10 + (ch - '0');
        }
    }
    endwin();
    printf("Your entered age is %d\n", age);
    return 0;
}