#include<stdio.h>
#include <limits.h>
#include <string.h>

void ex1 (void);
void ex2 (void);
void ex3 (void);
void ex4 (void);
void ex5 (void);
void ex6 (void);
void ex7 (void);
void ex8 (void);
void ex9 (void);
void ex10 (void);
void ex11 (void);
void ex12 (void);
void ex13 (void);
void ex14 (void);
void ex15 (void);
void ex16 (void);
void ex17 (void);
void ex18 (void);


int main(void){
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();
    ex7();
    ex8();
    ex9();
    ex10();
    ex11();
    ex12();
    ex13();
    ex14();
    ex15();
    ex16();
    ex17();
    ex18();
    return 0;
}

void ex1 (void){
    int idade, valor = 0,num_pessoas=0;
    char sair[4];
    printf("\n\t******** Exercicio 1 ********\n");
    printf("--- Sistema de compra de bilhetes para o ZOO de Lisboa ---\n");
    do {
        num_pessoas++;
        printf("Qual Ã© a idade da %dÂª pessoa?\n",num_pessoas);
        scanf("%d",&idade);
        if ((idade > 0 && idade <=16) || idade > 65){
            valor = valor + 10;
        } else if (idade > 16 && idade < 65) {
            valor = valor + 17;
        } else {
			printf("idade invÃ¡lida.\n");
		}
        printf("Quer comprar mais algum bilhete? (Sim / Nao)\n");
        scanf("%s",sair);
    }while (strcmp("Nao", sair)); /* strcmp retorna 0 quando as strings sÃ£o iguais  */
    printf("PreÃ§o a pagar: = %d euros\n",valor);
}

void ex2 (void){
    char opcao;
    int sair = 1;
    printf("\n\t******** Exercicio 2 ********\n");

    do{
        printf("\nPor favor insira uma das seguintes opÃ§Ãµes:\n");
        printf("p) piano\tv)violino\n");
        printf("t) trompete\tc) contrabaixo\n");
        printf("s) sair\n");
        scanf(" %c",&opcao);

        switch(opcao) {
            case 'p' :
            case 'P' :
                printf("O pianista toca piano!\n");
                break;
            case 'v' :
            case 'V' :
                printf("O violinista toca violino!\n");
                break;
            case 't' :
            case 'T' :
                printf("O trompetista toca trompete!\n");
                break;
            case 'c' :
            case 'C' :
                printf("O contrabaixista toca contrabaixo!\n");
                break;
            case 's' :
            case 'S' :
                sair = 0;
                printf("FIM\n");
                break;
            default:
                printf("OpÃ§Ã£o invÃ¡lida, tente novamente\n");
        }
    } while (sair);
}

void ex3 (void){
    char plano;
    float salario;
    printf("\n\t******** Exercicio 3 ********\n");
    printf("Qual o plano de trabalho? (A, B ou C)\n");
    scanf(" %c",&plano);
    printf("Qual o salÃ¡rio atual?\n");
    scanf("%f",&salario);
    switch(plano) {
        case 'A' :
            printf("O novo salÃ¡rio Ã©: %.2f\n",salario*1.1);
            break;
        case 'B' :
            printf("O novo salÃ¡rio Ã©: %.2f\n",salario*1.15);
            break;
        case 'C' :
            printf("O novo salÃ¡rio Ã©: %.2f\n",salario*1.20);
            break;
        default:
            printf("Plano de trabalho '%c' invÃ¡lido\n",plano);
    }
}

void print_menu(void){
    printf("\t------------------------------------------------\n");
    printf("\t| EspecificaÃ§Ã£o\t\t| CÃ³digo\t| PreÃ§o|\n");
    printf("\t------------------------------------------------\n");
    printf("\t| Cachorro quente\t| 100\t\t| 1,20 |\n");
    printf("\t| Crepe simples\t\t| 101\t\t| 1,30 |\n");
    printf("\t| Crepe com chocolate\t| 102\t\t| 1,50 |\n");
    printf("\t| HambÃºrguer\t\t| 103\t\t| 1,20 |\n");
    printf("\t| Cheeseburguer\t\t| 104\t\t| 1,30 |\n");
    printf("\t| Refrigerante\t\t| 105\t\t| 1,00 |\n");
    printf("\t------------------------------------------------\n");

}
void ex4 (void){
    int codigo, quantidade;
    char continuar;
    float valor = 0.0;
    printf("\n\t******** Exercicio 4 ********\n");

    do {
        print_menu();
        printf("\nInsira o cÃ³digo:\n");
        scanf("%d",&codigo);
        printf("Insira a quantidade:\n");
        scanf("%d",&quantidade);

        switch(codigo) {
            case 100 :
            case 103 :
                valor = valor + 1.2;
                break;
            case 101 :
            case 104 :
                valor = valor + 1.3;
                break;
            case 102 :
                valor = valor + 1.5;
                break;
            case 105 :
                valor = valor + 1.0;
                break;
            default:
                printf("CÃ³digo invÃ¡lido\n");
		}
        printf("Pretende continuar? (sim->s nÃ£o->n)\n");
        scanf(" %c",&continuar);
    } while (continuar == 's');
    printf("Valor a pagar: %.2f\n",valor*quantidade);
}


void ex5 (void){
    int mes;
    printf("\n\t******** Exercicio 5 ********\n");
    printf("Insira um valor numÃ©rico correspondente a um mÃªs (1 a 12):\n");
    scanf("%d",&mes);
    switch(mes) {
        case 1 :
            printf("Janeiro\n");
            break;
        case 2 :
            printf("Fevereiro\n");
            break;
        case 3 :
            printf("MarÃ§o\n");
            break;
        case 4 :
            printf("Abril\n");
            break;
        case 5 :
            printf("Maio\n");
            break;
        case 6 :
            printf("Junho\n");
            break;
        case 7 :
            printf("Julho\n");
            break;
        case 8 :
            printf("Agosto\n");
            break;
        case 9 :
            printf("Setembro\n");
            break;
        case 10 :
            printf("Outubro\n");
            break;
        case 11 :
            printf("Novembro\n");
            break;
        case 12 :
            printf("Dezembro\n");
            break;
        default:
            printf("Valor invÃ¡lido\n");
    }
}

void ex6 (void){
    int num1, num2;
    char operacao;
    printf("\n\t******** Exercicio 6 ********\n");
    printf("Insira o primeiro numero:\n");
    scanf("%d",&num1);
    printf("Insira o segundo numero:\n");
    scanf("%d",&num2);
    printf("Insira a operaÃ§Ã£o que quer realizar (+, -, * ou /):\n");
    scanf(" %c",&operacao);
    switch(operacao){
        case '+' :
            printf("O resultado da soma Ã©: %d\n",num1 + num2);
            break;
        case '-' :
            printf("O resultado da subtraÃ§Ã£o Ã©: %d\n",num1 - num2);
            break;
        case '*' :
            printf("O resultado da multiplicaÃ§Ã£o Ã©: %d\n",num1 * num2);
            break;
        case '/' :
            printf("O resultado da divisÃ£o Ã©: %f\n", (float)num1 / num2);
            break;
        default :
            printf("OperaÃ§Ã£o invÃ¡lida\n");
    }
}

void ex7 (void){
    int num,res;
    printf("\n\t******** Exercicio 7 ********\n");
    printf("Insira um numero:\n");
    scanf("%d",&num);
    res = num%5;
    switch (res){
        case 0 :
            printf("A divisÃ£o Ã© perfeita!\n");
            break;
        case 1 :
            printf("O resto da divisÃ£o Ã© 1\n");
            break;
        case 2 :
            printf("O resto da divisÃ£o Ã© 2\n");
            break;
        case 3 :
            printf("O resto da divisÃ£o Ã© 3\n");
            break;
        case 4 :
            printf("O resto da divisÃ£o Ã© 4\n");
            break;
        default :
            printf("O resto da divisÃ£o Ã© %d\n",res);
    }
}

void ex8 (void){
    int a,b,c;
    printf("\n\t******** Exercicio 8 ********\n");
    printf("Introduza o valor de 'A':\n");
    scanf("%d",&a);
    printf("Introduza o valor de 'B':\n");
    scanf("%d",&b);
    printf("Introduza o valor de 'C':\n");
    scanf("%d",&c);

    if(a+b<c){
        printf("A soma de A + B Ã© menor que C.\n");
    } else {
		printf("A soma de A + B nÃ£o Ã© menor que C.\n");
	}
}
void ex9 (void){
    int num;
    printf("\n\t******** Exercicio 9 ********\n");
    printf("Insira um numero:\n");
    scanf("%d",&num);
    if(num%2){
        printf("O numero Ã© impar!\n");
    } else {
        printf("O numero Ã© par!\n");
    }
}
void ex10 (void){
    int num;
    printf("\n\t******** Exercicio 10 ********\n");
    printf("Insira um numero inteiro positivo ou negativo:\n");
    scanf("%d",&num);
    if (num >= 0){
        printf("O numero introduzido Ã© positivo e o seu dobro Ã© %d\n",num*2);
    } else {
        printf("O numero introduzido Ã© negativo e o seu triplo Ã© %d\n",num*3);
    }
}
void ex11 (void){
    int a,b,c;
    printf("\n\t******** Exercicio 11 ********\n");
    printf("Insira trÃªs valores inteiros e diferentes:\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b || a==c || b==c){
        printf("Erro: existem valores duplicados\n");
    } else if(a>b && a>c){
        if(b>c){
            printf("%d, %d, %d\n", a,b,c);
        } else{
            printf("%d, %d, %d\n", a,c,b);
        }
    } else if (b>a && b>c){
        if (a>c){
            printf("%d, %d, %d\n", b,a,c);
        } else {
            printf("%d, %d, %d\n", b,c,a);
        }
    } else if (c>a && c>b){
        if (a>b){
            printf("%d, %d, %d\n", c,a,b);
        } else {
            printf("%d, %d, %d\n", c,b,a);
        }
    }
}
void ex12 (void){
    float peso, altura,imc;
    printf("\n\t******** Exercicio 12 ********\n");
    printf("Insira o seu peso:\n");
    scanf("%f",&peso);
    printf("Insira a sua altura:\n");
    scanf("%f",&altura);
    imc = peso / (altura*altura);
    if(imc<18.5){
        printf("Abaixo do peso\n");
    } else if(imc<25){
        printf("Peso normal\n");
    } else if(imc<30){
        printf("Acima do peso\n");
    } else {
        printf("Obeso\n");
    }
}
void ex13(){
    char nome[50];
    int i;
    printf("\n\t******** Exercicio 13 ********\n");
    printf("Introduza um nome:\n");
    scanf("%s",nome);

    for (i = 0; nome[i]!='\0' ; i++){
        if (i%2==0){
            printf("%c",nome[i]);
        }
    }
    printf("\n");
}
void ex14(void){
    char nome[50];
    int i;
    printf("\n\t******** Exercicio 14 ********\n");
    printf("Introduza um nome:\n");
    scanf("%s",nome);

    for (i = 0; nome[i]!='\0' ; i++){
        printf("%s\n",nome);
    }
    printf("\n");
}
void ex15(void){
    char nome[50];
    int i;
    printf("\n\t******** Exercicio 15 ********\n");
    printf("Introduza um nome:\n");
    scanf("%s",nome);
    for (i = strlen(nome)-1; i>=0 ; i--){
        printf("%c",nome[i]);
    }
    printf("\n");
}
void ex16(void){
    int i = 0, soma = 0;
    printf("\n\t******** Exercicio 16 ********\n");
    for (i = 0; i<=100 ; i++){
        soma = soma + i;
    }
    printf("A soma dos primeiros cem numeros inteiros Ã©: %d\n",soma);
}
void ex17(void){
    int num = 0,sair = 1, soma = 0, qtd = 0;
    printf("\n\t******** Exercicio 17 ********\n");
    do{
        printf("Introduza um numero positivo (ou negativo para sair):\n");
        scanf("%d",&num);
        if (num < 0){
            sair = 0;
        } else {
            soma = soma + num;
            qtd++;
        }
    } while (sair);
    printf("Foram introduzidos %d numeros;\nA soma desse numeros Ã© de %d e a mÃ©dia de %f\n",qtd,soma,(float)soma/qtd);
}
void ex18(void){
    int countMenos20 = 0, countMais50 = 0,idade;
    printf("\n\t******** Exercicio 18 ********\n");
    do{
        printf("Insira uma idade (para terminar insira -99):\n");
        scanf("%d",&idade);
        if (idade > 0){
            if (idade < 21){
                countMenos20++;
            }else if (idade > 50){
                countMais50++;
            }
        }
    }while(idade != -99);
    printf("Idades com menos de 21 anos: %d\nIdades com mais de 50 anos: %d\n",countMenos20,countMais50);
}
