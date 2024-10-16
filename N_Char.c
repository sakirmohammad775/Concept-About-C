#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if ('a' <= ch && ch <= 'z'){
        ch-=32;
        //lower case letter
    }
    else{
        ch+=32;
        //upper case letter
    }
    printf("%c\n",ch);
    return 0;
}
//for lower case letter => 32 subtraction from letter
//for upper case letter => 32 summation with letter