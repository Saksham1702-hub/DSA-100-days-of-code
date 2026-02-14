#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    
    printf("Enter the code name: ");
    scanf("%s", str);

    int length = strlen(str);

    printf("Mirrored code name: ");

    
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
