#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int secondDigit = n % 10;
    int firstDigit = n / 10;

    if(secondDigit==0){
        //corner Case
        printf("YES");
        return 0;  // If the second digit is 0, the result can't be divisible by the first digit. So, no need to check further.  // added this line to optimize the code.
    }
    else if (secondDigit % firstDigit==0 || firstDigit % secondDigit ==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

// 39 output yes
// 63 output no