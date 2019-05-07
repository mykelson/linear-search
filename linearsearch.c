#include <stdio.h>
#include <string.h>

char * search_linearly(char* a[], int size, char* keyword);

int main (void)
{
    char* crate[10] = {"coke", "fanta", "sprite", "limca", "pepsi", "mirinda", "7up", "mountaindew", "maltina", "malta_guiness"};
    printf("What soda will like to have? ");
    char soda[20];
    scanf("%[^\n]s", soda);
    char *res = search_linearly(crate, 10, soda);
    printf("%s", res);
}

char* search_linearly(char* a[], int size, char* keyword)
{
    for (int i = 0, n = size; i < n; i++)
    {
        if (strcmp(a[i], keyword) == 0)
           return "Here's your drink";
        
    }
    return "Not available at the moment, check back later";   
}