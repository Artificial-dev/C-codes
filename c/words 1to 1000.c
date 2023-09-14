#include <stdio.h>
#include <string.h>

char *singleDigit[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char *twoDigits[] = {"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
char *tenToNineteen[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

void printWord(int num){
    if(num>=1000){
        printf("%s thousand ", singleDigit[num/1000]);
        printWord(num%1000);
    }
    else if(num>=100){
        printf("%s hundred ", singleDigit[num/100]);
        printWord(num%100);
    }
    else if(num>=20){
        printf("%s ",twoDigits[num/10]);
        printWord(num%10);
    }
    else if(num>=10)
        printf("%s ",tenToNineteen[num-10]);
    else if(num>0)
        printf("%s ",singleDigit[num]);
}

int main() {
    int num;

    // Accept a number in the range of 1 to 1000
    printf("Enter a number in the range of 1 to 1000: ");
    scanf("%d", &num);

    if(num>0 && num<=1000) {
        printf("The number in words: ");
        printWord(num);
    }
    else
        printf("Invalid input");
    return 0;
}
