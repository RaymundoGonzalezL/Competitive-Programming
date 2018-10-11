#include <stdio.h>
#include <string.h>
int main(){
    char n[1000];
    scanf("%s", n);
    while (strcmp(n, "0") != 0)
    {
        int sum = 0;
        for (int i = 0; i < strlen(n); i += 2)
            sum += (n[i] - '0');
        for (int i = 1; i < strlen(n); i += 2)
            sum -= (n[i] - '0');
        if (sum % 11 == 0)
            printf("%s is a multiple of 11.\n", n);
        else
            printf("%s is not a multiple of 11.\n", n);
        scanf("%s", n);
    }
    return 0;
}
