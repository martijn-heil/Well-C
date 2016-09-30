#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "well/well_all.h"

void test(char *rikt) {
    printf(rikt);
}

int main(void) {
    int n;
    scanf("%d", &n);

    printf("Hello world!\n");

    char *buf = malloc(18 * sizeof(char));

    char *str1 = buf;
    char *str2 = &buf[6];
    char *str3 = &buf[12];

    strcpy(str1, "test1");
    strcpy(str2, "test2");
    strcpy(str3, "test3");

    char **strArr = malloc(3 * sizeof(char *));

    strArr[0] = str1;
    strArr[1] = str2;
    strArr[2] = str3;
}
