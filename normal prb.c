#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[200], b[200];

    scanf("%d",&n);

    for (int i=0; i<n; i++) {
        scanf("%s",a);
        int len = strlen(a);

        for (int i=0; i<len; i++) {
            char ch = a[len-i-1];
            if (ch == 'p') {
                b[i] = 'q';
            } else if (ch=='q') {
                b[i] ='p';
            } else {
                b[i] ='w';
            }
        }
        b[len] = '\0';

        printf("%s\n", b);
    }

    return 0;
}
