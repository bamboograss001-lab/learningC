#include <stdio.h>

void print(int);
int addTwoNumber(int, int);

int main()
{
    int firstNumber = 11;
    int secondNumber = 14;
    int value = addTwoNumber(firstNumber,secondNumber);
    return 0;
}

void print(int result){
    printf("The addition of two number is %d ",result);
}

int addTwoNumber(int x, int y){
    int result = x + y ;
    print(result);
    return result;
}