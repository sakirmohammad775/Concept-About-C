#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101], str2[101], str3[101];
    scanf("%s %s %s", &str1,&str2,&str3);

    int count = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        char ch1 = str1[i],ch2 = str2[i],ch3 = str3[i];

        if (ch1 == ch2 && ch2 == ch3)
        {
            continue;
        }
        else if (ch1 == ch2 || ch2 == ch3 || ch1 == ch3)
        {
            count++;
            continue;
        }
        else
        {
            count += 2;
            
        }
    }

    printf("%d\n", count);
    return 0;
}