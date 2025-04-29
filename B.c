#include <stdio.h>
#include <ctype.h>

int main() {
    int x;
    scanf("%d", &x);  
    while (x--) 
    {
        int n;
        scanf("%d", &n);
        char S[n+1];
        scanf("%s", S);

        for (int i = 0; i < n; i++) 
        {
            if (i % 2 == 0)
                putchar(toupper(S[i]));  
            else
                putchar(tolower(S[i]));  
        }
        putchar('\n');  
    }
    return 0;
}
