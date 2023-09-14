#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main() {
    char array[] = "im";
    char *ptr;
    int i = 2;
    while(1){
        ptr = malloc(pow(500,500));
        if (!ptr)
            return NULL;
        *ptr = strcpy(ptr,array);
        ptr ++;
    }
    return 0;
}