int main() 
{
    float kgPescado, valorExcedente, multa;

    printf("Digite a quantidade em Kg de peixe: \n");
    scanf("%f", &kgPescado);

    valorExcedente = kgPescado - 50;
    multa = valorExcedente * 4;

    if (kgPescado>50) { 
        printf("Excedeu em %2.f kilos conforme a Legislalacao n 24.826. \n", valorExcedente);
        printf("Multa aplicada de R$%2.f \n", multa);
    }

    else {
        printf("Nao ha multas a pagar.");
    }
}