#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int* data = malloc(100 * sizeof(int)); 
    free(data);
    printf("%d\n", data[0]);
}