#include <stdio.h>
#include <math.h>

int main () 
{
    float n1 , n2, result1, result2, result3;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &n1);

    printf("Digite o segundo numero: \n");
    scanf("%f", &n2);

    result1 = n1 * 2;
    result2 = (n1 * 3) + (n2 / 2);
    result3 = sqrt(n1 + n2);

    printf("Primeiro resultado: %2.f \n", result1);
    printf("Segundo resultado: %2.f \n", result2);
    printf("Terceiro resultado: %2.f \n", result3);
    
}