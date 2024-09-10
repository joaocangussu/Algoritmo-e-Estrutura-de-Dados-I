int main () 
{
    float valorFabrica, valorFinal;

    printf("Digite o valor de fabrica (em R$): \n");
    scanf("%f", &valorFabrica);

    valorFinal = valorFabrica * 1.73;

    printf("Valor final pago pelo consumidor: R$%2.f\n", valorFinal);
}