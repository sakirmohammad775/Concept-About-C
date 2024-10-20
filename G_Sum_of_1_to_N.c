/*
Given a number N
. Print the summation of the numbers that is between 1 and N
 (inclusive).

.∑i=1Ni
Input
Only one line containing a number N
 (1≤N≤109)

Output
Print the summation of the numbers that are between 1 and N
 (inclusive).
 
*/
#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld\n",(n*(n+1))/2);  // formula to find sum of first n natural numbers
    return 0;
}
//OR Solve two way
 //1. using formula for summation of first n natural numbers
 //2. using simple loop to add numbers from 1 to n and print the sum
 //3. using formula for summation of first n natural numbers (n*(n+1))/2
 //4. using simple loop to add numbers from 1 to n and print the sum
 //5. using formula for summation of first n natural numbers (n*(n+1))/2
 //6. using simple loop to add numbers from 1 to n and print the sum
#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    long long sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
        printf("%lld ",sum);
    return 0;
}
//this code will show the time limit error so,we will use first  way code