//https://codeforces.com/problemset/problem/58/A

#include <stdio.h>

int main(void)
{

    char *hello = "hello";
    char word[101];
    scanf("%s", &word);

    short counter_word = 0;
    short counter_hello = 0;

    while (word[counter_word] != '\0' && word[counter_word] != '\n') {

        if (word[counter_word] == hello[counter_hello]) {
            ++counter_hello;
            ++counter_word;
            continue;
        }
        ++counter_word;
    }

    if (hello[counter_hello] == '\0') {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}