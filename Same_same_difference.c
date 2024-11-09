#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101], str2[101], str3[101];
    scanf("%s", &str1);
    scanf("%s", &str2);
    scanf("%s", &str3);

    int len = strlen(str1);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        char ch1 = str1[i];
        char ch2 = str2[i];
        char ch3 = str3[i];

        if (ch1 == ch2 && ch2 == ch3)
        {
            continue;
        }
        else if (ch1 == ch2 || ch2 == ch3 || ch1 == ch3)
        {
            count++;
        }
        else
        {
            count += 2;
        }
    }

    printf("%d\n", count);
    return 0;
}