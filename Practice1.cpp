#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    int n, i, j;
    char s[MAX_LENGTH] = { 0 };
    int a[26] = { 0 }; 
    int total = 0; 

    scanf("%d\n", &n); 
    while (n--) {
        fgets(s, MAX_LENGTH, stdin); 
        for (j = 0; j < strlen(s); j++) {
            if (s[j] >= 'a' && s[j] <= 'z') {
                a[s[j] - 'a']++; 
                total++;
            }
            else if (s[j] >= 'A' && s[j] <= 'Z') {
                a[s[j] - 'A']++; 
                total++;
            }
        }
    }

    for (i = total; i >= 1; i--) {
        for (j = 0; j < 26; j++) {
            if (a[j] == i) {
                printf("%c %d\n", j + 'A', i); 
            }
        }
    }

    return 0;
}

