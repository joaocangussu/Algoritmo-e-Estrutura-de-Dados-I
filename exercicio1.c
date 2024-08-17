int main () 
{
    float lado;
    float area;

    printf("Digite o valor de um dos lados do quadrado (em cm): \n");
    scanf("%f", &lado);

    area = lado * lado;

    printf("Valor da area: %.2fcm\n", area);
}