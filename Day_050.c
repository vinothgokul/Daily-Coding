#include<stdio.h>
#include<math.h>
int main()
{
    long long int getInput,temp,sumAndOriginal,reversed=0;
    scanf("%lld",&getInput);
    int _decimal = 0, counter = 0, _remainder,sumOfDecimal=0;
    
    temp = getInput;
    while (temp) {
        _remainder = temp % 10;
        temp /= 10;
        _decimal += _remainder * pow(2, counter);
        ++counter;
    }
    
    counter=0;
    temp = _decimal;
    while(temp)
    {
        sumOfDecimal+=temp%10;
        temp/=10;
        counter++;
    }
    sumAndOriginal = (sumOfDecimal*(pow(10,counter))) + _decimal;
    
    temp = sumAndOriginal;
    while (temp != 0) {
        _remainder = temp % 10;
        reversed = reversed * 10 + _remainder;
        temp /= 10;
    }
    printf("%lld", reversed%101);
}