int main () 
{
    float velocidadeMedia, horas, litrosGastos, distanciaPercorrida;

    printf("Digite o tempo gasto na viagem (em hr)");
    scanf("%f", &horas);

    printf("Digite a velocidade media da viagem (em km/h)");
    scanf("%f", &velocidadeMedia);

    distanciaPercorrida = horas * velocidadeMedia;
    litrosGastos = distanciaPercorrida / 12;

    printf("Durante a viagem foram gastos %2.f litros de gasolina em %2.fkm.", litrosGastos,distanciaPercorrida);     
}