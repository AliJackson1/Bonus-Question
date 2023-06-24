#include <stdio.h>
#include <string.h>

void Swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void RecursivePermute(char str[], int k, int n) {
    if (k == n) {
        printf("%s\n", str);
        return;
    }

    for (int i = k; i <= n; i++) {
        Swap(&str[k], &str[i]);
        RecursivePermute(str, k + 1, n);
        Swap(&str[k], &str[i]); // Backtrack
    }
}

void Permute(char str[]) {
    int n = strlen(str);
    RecursivePermute(str, 0, n - 1);
}

int main() {
    char str[] = "abc";
    Permute(str);
    return 0;
}

