#include <stdio.h>

int main(){
    // omg there is no string type
    // https://www.guru99.com/c-strings.html
    // String x = "10s";

    char x[11] = "Hello World"; 
    printf("%s", x);

    // max int size limit
    int intmax = 2147483647;
    printf("%d", intmax);
    intmax +=1;
    // flipps around to max negitive -21474836478
    printf("%d", intmax);

    int intmin = -2147483648;
    printf("%d", intmin);
    intmin -= 1;
    printf("%s", "\n");
    // flips around to max pos -21474836478
    printf("%d", intmin);
    printf("%s", "\n");
    // what is a pointer type
    printf("%p", x); // print string variable as pointer 
    // dang that worked
printf("%s", "\n");
    char * stringpointer; 
    stringpointer = x;
    printf("%p", stringpointer); // print string variable as pointer

    // ah  https://www.tutorialspoint.com/cprogramming/c_pointer_to_an_array.htm
    // an variable holding an array is just a pointer to the first index
    // therefore you can transfer the array to another pointer just by the first index
}