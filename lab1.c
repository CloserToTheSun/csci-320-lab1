/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <lab1.h>
#define MAX_LINE_LEN 100
//char* fileName = "test1.txt"
char* readString(char* fileName) {
    FILE* file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error opening file %s", fileName);

        return NULL;
    }
    
    char* line = malloc(MAX_LINE_LEN);
    if (line == NULL) {
        printf("Error allocating memory for line");

        return NULL;
    }

    if (fgets(line, MAX_LINE_LEN, file) == NULL) {
        printf("Error reading line from file %s", fileName);

        return NULL;
    }

    fclose(file);

    return line;
}

char* mysteryExplode(const char* str){
    int n = strlen(str);
    char* result = malloc(n * (n + 1) / 2);
    if (result == NULL) {
        printf("Error allocating memory for result");

        return NULL;
    }

    int resultIndex = 0;
    

    for(int i = 0; i < strlen(str) - 1; i++){
        for(int j = 0; j <= i; j++){
            result[resultIndex++] = str[j];
        }
    }

    return result;
}


