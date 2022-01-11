#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("oi, \ntudo \\bem? ");
    printf("\noi, \ttudo \7bem? ");
    printf("\nC é \n\"super\" \nfácil!");
}

