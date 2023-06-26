#include <stdio.h>
#include <stdlib.h>

void primeNumberSieve(int m, int n) {

    int* arr = (int*)malloc(sizeof(int) * (n + 1));

    if (m == 1)
        m++;
  
    for (int i = 2; i <= n; i++) {
        arr[i] = i;
    }

    for (int i = 2; i <= n; i++) {
        if (arr[i] == 0) continue;

        for (int j = 2 * i; j <= n; j += i) {
            arr[j] = 0;
        }
    }

    for (int i = m; i <= n; i++) {
        if (arr[i] != 0) printf("%d\n", arr[i]);
    }

    free(arr);
}

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);

    primeNumberSieve(m, n);
    return 0;
}
