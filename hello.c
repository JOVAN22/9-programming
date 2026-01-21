#include <stdio.h>
#include <time.h>

int main() {
    char name[] = "Jovan";
    time_t rawtime;
    struct tm *info;
    char buffer[80];

    time(&rawtime);
    info = localtime(&rawtime);

    // Formats the time into HH:MM:SS
    strftime(buffer, 80, "%H:%M:%S", info);

    printf("Hello %s, right now the time is %s\n", name, buffer);

    return 0;
}
