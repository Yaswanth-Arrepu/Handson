#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    char s[1000];
    scanf("%s", s);

    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j < strlen(s); j++) {
            if (s[j] == (i + '0')) {
                count++;
            }
        }
        printf("%d ", count);
        count = 0;
    }

    return 0;
}
