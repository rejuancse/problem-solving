#include <stdio.h>
#include <time.h>

int main() {
    struct tm timeStruct = {};

    timeStruct.tm_year = 2013 - 1900;
    timeStruct.tm_mon = 4;
    timeStruct.tm_mday = 29;
    
    mktime(&timeStruct);

    char buffer[100];
    strftime(buffer, sizeof(buffer), "%B %d, %Y %A", &timeStruct);
    printf("%s\n", buffer);

    return 0;
}
