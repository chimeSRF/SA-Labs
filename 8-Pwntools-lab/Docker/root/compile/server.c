#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printFlag(void) {
    char flag[40];
    FILE *fp = fopen("/flag.txt", "r");
    
    if (!fp)
    {
        perror("flag.txt");
        return;
    }
    
    fgets(flag, sizeof(flag), fp);
    fclose(fp);
    
    printf("%s\n", flag);
}

void start(void) {
    char buffer[16];

    printf("Address of start(): %p\n", start);
    puts("Enter password to get access:");
    
    
    scanf("%s", buffer);
}

int main(void) {
    start();
    puts("Wrong password entered!");
    return 0;
}