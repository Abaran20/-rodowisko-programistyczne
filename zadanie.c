#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
//zadanie 2






//zadanie 3

#include <stdio.h>
int main(){
    double num1,num2;
    printf("podaj dwie liczby");
    scanf("%lf %lf",&num1, &num2);
    if (num1>num2)
        printf("Wieksza liczba to : %.2lf\n",num1);
    else if (num2>num1)
        printf("Wieksza liczba to : %.2lf\n",num2);
    else printf("obie liczby są rowne.\n");
    return 0;
}
//zadanie 4
