#include <stdio.h>
#include <stdlib.h>

void primeNumberSieve(int m, int n) {
    int isdecimal = -1;
    int result = 0;
    int min = 10001;

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
        if (arr[i] != 0)
        {
            isdecimal = 0;

            if (min > i)
                min = i;

            result += i;
        }
    }
    
    if (isdecimal == -1)
    {
        printf("-1");
        return;
    }
    printf("%d\n%d", result, min);

    free(arr);
}

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);

    primeNumberSieve(m, n);
    return 0;
}
