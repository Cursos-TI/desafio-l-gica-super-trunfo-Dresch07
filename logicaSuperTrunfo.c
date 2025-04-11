#include <stdio.h>

int main() {
    char estado = 'a';
    char codigo[20] = "a01";
    char nome[20] = "Sao Paulo";
    int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int turisticos = 50;
    float densidade = 0;
    float pibpc = 0;
    float super = 0;

    densidade = populacao / area;
    pibpc = 699280000000 / populacao;
    super = populacao + area + pib + turisticos + pibpc - densidade;

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Turísticos: %d\n", turisticos);
    printf("Densidade: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f\n", pibpc);
    printf("Super: %.2f\n\n", super);

    char estadoa = 'b';
    char codigoa[20] = "b01";
    char nomea[20] = "Rio de Janeiro";
    int populacaoa = 6748000;
    float areaa = 1200.25;
    float piba = 300.50;
    int turisticosa = 30;
    float densidadea = 0;
    float pibpca = 0;
    float supera = 0;

    densidadea = populacaoa / areaa;
    pibpca = 300500000000 / populacaoa;
    supera = populacaoa + areaa + piba + turisticosa + pibpca - densidadea;

    printf("Estado: %c\n", estadoa);
    printf("Código: %s\n", codigoa);
    printf("Nome: %s\n", nomea);
    printf("População: %d\n", populacaoa);
    printf("Área: %.2f km²\n", areaa);
    printf("PIB: %.2f bilhões\n", piba);
    printf("Turísticos: %d\n", turisticosa);
    printf("Densidade: %.2f hab/km²\n", densidadea);
    printf("PIB per capita: %.2f\n", pibpca);
    printf("Super: %.2f\n\n", supera);

    int compara, compara2;
    int resultado = 0;
    int resultado2 = 0;
    printf("Comparações dos dados das cartas\n\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade\n6 - PIB per capita\n7 - Super\n\n");

    printf("Escolha a primeira comparação:\n");
    scanf("%d", &compara);

    switch (compara) {
        case 1:
            resultado = populacao > populacaoa? 1 : 0;
                 break;
        case 2:
            resultado = area > areaa? 1 : 0;
            break;
        case 3:
            resultado = pib > piba? 1 : 0;
            break;
        case 4:
            resultado = turisticos > turisticosa? 1 : 0;
            break;
        case 5:
            resultado = densidade > densidadea? 0 : 1;
            break;
        case 6:
            resultado = pibpc > pibpca? 1 : 0;
            break;
        case 7:
            resultado = super > supera? 1 : 0;
            break;
        default:
            printf("Opção invalida\n");
         }   
            
            
    printf("Escolha a segunda comparação:\n");
    scanf("%d", &compara2);        
            
    if (compara==compara2){
    printf("você escolheu o mesmo atributo");
    }else{
    switch (compara2) {
        case 1:
            resultado2 = populacao > populacaoa? 1 : 0;
                 break;
        case 2:
            resultado2 = area > areaa? 1 : 0;
            break;
        case 3:
            resultado2 = pib > piba? 1 : 0;
            break;
        case 4:
            resultado2 = turisticos > turisticosa? 1 : 0;
            break;
        case 5:
            resultado2 = densidade > densidadea? 0 : 1;
            break;
        case 6:
            resultado2 = pibpc > pibpca? 1 : 0;
            break;
        case 7:
            resultado2 = super > supera? 1 : 0;
            break;
        default:
            printf("Opção invalida\n");
                   
        }    
        }    
            
         
         if (resultado && resultado2)
         {
         printf("você ganhou\n");
         }else if (resultado != resultado2){
         printf("empatou");
         }else{
         printf("você perdeu");
         }
         return 0;











}