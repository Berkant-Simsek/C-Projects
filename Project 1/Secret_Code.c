#include <stdio.h>

int askFirstQuestion();
int askSecondQuestion();
int askThirdQuestion();
void askFourthQuestion();
void askFifthQuestion();

int number, number1, ascii, power, res=1, res1, prime, prime1, prime_number;
int a, i, j, fibo, fibo1, first=0, second=1, age, code, code1;
char letter;

int main()
{
    printf("1) Please enter your birthday between 1 and 7(example Mon=1, Tue=2..):\n");
    scanf(" %d", &number);
    printf("%d\n", number);
    number = askFirstQuestion(number);
    printf("2) What is the %dth power of %d?\n", number, number1);
    power = askSecondQuestion(number, number1);
    printf("3) How many prime numbers can you count until %d?\n", res);
    prime = askThirdQuestion(res);
    printf("4) Enter %dth element of the Fibonacci series:\n", prime);
    askFourthQuestion(prime);
    printf("5) What is the result of %d * %d?\n", fibo, age);
    askFifthQuestion(fibo, age);
}

int askFirstQuestion(int number)
{
    if ((number<1) || (number>7))
    {
        printf("Please enter an appropriate day!\n");
        scanf(" %d", &number);
        printf("%d\n", number);
        number = askFirstQuestion(number);
    }
    
    else
    {
        printf("Enter initial letter of your name, (capital english letters only)\n");
        scanf(" %c", &letter);
        ascii = letter;
        number1 = ascii%4;
        printf("%c --> %d\n", letter, number1);
    }
    
    return number;
}

int askSecondQuestion(int number, int number1)
{
    for (; number > 0; number--)
    {
        res = res*number1;
    }
    
    scanf("%d", &res1);
    
    if (res == res1)
    {
        printf("%d\n", res);
    }
    
    else
    {
        printf("%d\n", res1);
        printf("It is not correct!\n");
        number = 0;
        power = askSecondQuestion(number , number1);
    }
        
    return res;
}

int askThirdQuestion(int res)
{
    for (i = 1; i <= res; i++)
    {
        a = 0;
        
        for (j = 1; j <= i; j++)
        {
            prime_number = i%j;
            
            if (prime_number == 0)
            {
                a = a+1;
            }
        }
        
        if (a == 2)
        {
            prime = prime+1;
        }
    }
    
    scanf("%d", &prime1);
    if (prime1 == prime)
    {
        printf("%d\n", prime);
    }
    
    else
    {
        printf("%d\n", prime1);
        printf("It is not correct!\n");
        res = 0;
        prime = askThirdQuestion(res);
    }
    
    return prime;
}

void askFourthQuestion(int prime)
{
    if (prime==0)
    {
        fibo = 0;
    }
    
    else if (prime==1)
    {
        fibo = 1;
    }
    
    else
    {
        for (a = prime; a >= 2; a = a - 1)
        {
            res = first + second;
            fibo = res;
            first = second;
            second = res;
        }
    }
    
    scanf("%d", &fibo1);
    printf("%d\n", fibo1);

    if (fibo1 == fibo)
    {
        printf("Enter your age(between 1-100):\n");
        scanf("%d", &age);
        printf("%d\n", age);
    }
    
    else
    {
        printf("It is not correct!\n");
        prime = -1;
        askFourthQuestion(prime);
    }
}

void askFifthQuestion(int fibo, int age)
{
    code = fibo * age;
    
    scanf("%d", &code1);
    printf("%d\n", code1);
    
    if (code1 == code)
    {
        printf("Congratulations! You found the code! The code is %d", code);
    }
    
    else
    {
        printf("It is not correct!\n");
        askFifthQuestion(fibo, age);
    }
}
