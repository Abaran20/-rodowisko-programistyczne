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
#include <stdio.h>

int main() {
    double num1, num2, num3;
    
    printf("Podaj trzy liczby: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    
    if (num1 > num2 && num1 > num3) {
        printf("Największa liczba to %.2lf\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("Największa liczba to %.2lf\n", num2);
    } else {
        printf("Największa liczba to %.2lf\n", num3);
    }
    
    return 0;
}
//zadanie 5
#include <stdio.h>

int main() {
    char ch;
    int code;

    printf("Podaj znak ASCII (char) lub kod ASCII (int): ");
    
    
    if (scanf(" %c", &ch) == 1) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            printf("'%c' jest literą alfabetu.\n", ch);
        } else {
            printf("'%c' nie jest literą alfabetu.\n", ch);
        }
    }

    
    printf("Podaj kod ASCII (int): ");
    if (scanf("%d", &code) == 1) {
        if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122)) {
            printf("Kod %d odpowiada literze alfabetu.\n", code);
        } else {
            printf("Kod %d nie odpowiada literze alfabetu.\n", code);
        }
    }

    return 0;
}
