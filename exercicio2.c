int main () 
{

    double celsius;
    double fahrenheit;

    printf("Digite a temperatura em graus Celsius: \n");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("Temperatura em graus Fahrenheit: %2.f graus\n", fahrenheit);
}