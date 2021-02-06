**UNIVERSIDADE LUSÓFONA DE HUMANIDADES E TECNOLOGIAS**

*Linguagens de Programação I - 2019/2020*

# Ficha de Exercícios - 3

Na resolução destes exercícios deve ser utilizada a Linguagem de Programação C. Para além da correta implementação dos requisitos, tenha em conta os seguintes aspetos:

- O código apresentado deve ser bem indentado. 
- O código deve compilar sem erros ou *warnings* utilizando o *gcc* com as seguintes flags:
- `gcc -Wall -Wextra -Wpedantic -std=c99 -g exercicio1.c -o exercicio1`
- Tenha em atenção os nomes dados das variáveis, para que sejam indicadores daquilo que as mesmas vão conter.
- Evite o uso de constantes mágicas. 
- Evite duplicação de código. 
- Considere a implementação de funções para melhorar a legibilidade, evitar a duplicação e criar soluções mais genéricas.

1.	Implemente um programa que calcule o preço a pagar por uma pessoa pela entrada no ZOO de Lisboa, com base na sua idade.
O preço de cada bilhete deve ser calculado usando a seguinte tabela:

	| Idade | Preço |
	| ----- | ----- |
	| 0-16  |  10€  |
	| 16-65 |  17€  |
	| 65    |  10€  |


O utilizador pode comprar vários bilhetes e no final será mostrado o valor total dos bilhetes;

Segue-se um exemplo de uma sessão de uso do programa (à frente do símbolo > aparece o input do utilizador):

	```bash
	Qual é a idade?
	> 40
	Quer comprar mais algum bilhete?
	> Não
	Preço a pagar: = 17
	```

*Resolução:*

   ```C
void ex1 (void){
    int idade, valor = 0,num_pessoas=0;
    char sair[4];
    printf("\n\t******** Exercicio 1 ********\n");
    printf("--- Sistema de compra de bilhetes para o ZOO de Lisboa ---\n");
    do {
        num_pessoas++;
        printf("Qual e a idade da %da pessoa?\n",num_pessoas);
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
    }while (strcmp("Nao", sair)); /* strcmp retorna 0 quando as strings sao iguais  */
    printf("Preco a pagar: = %d euros\n",valor);
}
   ```

2. Implemente um programa que mostre um menu com 4 opções, cada uma etiquetada com uma letra. O programa deve então usar um switch para selecionar uma ação simples baseada na seleção do utilizador. O seu output deve ser semelhante ao seguinte:
Quando o utilizador inserir uma opção inválida deverá ser mostrado novamente o menu. O menu deverá ter uma opção para a saída do programa;

	```bash
	Por favor insira uma das seguintes opções: 
	p) piano	v) violino 
	t) trompete  	c) contrabaixo
	s) sair
	> p
	O pianista toca piano!
	```


*Resolução:*

   ```C
void ex2 (void){
    char opcao;
    int sair = 1;
    printf("\n\t******** Exercicio 2 ********\n");

    do{
        printf("\nPor favor insira uma das seguintes opcoes:\n");
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
                printf("Opcao invÃ¡lida, tente novamente\n");
        }
    } while (sair);
}

   ```
3.	Um funcionário irá receber um aumento de acordo com o seu plano de trabalho, de acordo com a tabela abaixo: 

	| Plano | Aumento |
	| ----- | ------- |
	| A     |  10%    |
	| B     |  15%    |
	| C     |  20%    |

Faça um programa que leia o plano de trabalho e o salário atual de um funcionário e calcula e imprime o seu novo salário. Use o comando switch.

*Resolução:*

   ```C
void ex3 (void){
    char plano;
    float salario;
    printf("\n\t******** Exercicio 3 ********\n");
    printf("Qual o plano de trabalho? (A, B ou C)\n");
    scanf(" %c",&plano);
    printf("Qual o salario atual?\n");
    scanf("%f",&salario);
    switch(plano) {
        case 'A' :
            printf("O novo salario e: %.2f\n",salario*1.1);
            break;
        case 'B' :
            printf("O novo salario e: %.2f\n",salario*1.15);
            break;
        case 'C' :
            printf("O novo salario e©: %.2f\n",salario*1.20);
            break;
        default:
            printf("Plano de trabalho '%c' invalido\n",plano);
    }
}

   ```
   
4. O menu de um snack-bar é o seguinte: 

	| Especificação | Código | Preço |
	| ------------- | ------ | ----- |
	| Cachorro quente |	100  |	1,20 |
	| Crepe simples |	101	| 1,30 |
	| Crepe com chocolate	| 102	| 1,50 |
	| Hambúrguer | 103 | 1,20 |
	| Cheeseburguer | 104 | 1,30 |
	| Refrigerante | 105 | 1,00 |

Implemente um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Use o comando switch. O utilizador pode comprar vários itens e no final será mostrado o valor total dos itens.

*Resolução:*

   ```C
void print_menu(void){
    printf("\t------------------------------------------------\n");
    printf("\t| Especificacao\t\t| CÃ³digo\t| Preco|\n");
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
        printf("Pretende continuar? (sim->s nao->n)\n");
        scanf(" %c",&continuar);
    } while (continuar == 's');
    printf("Valor a pagar: %.2f\n",valor*quantidade);
}
   ```

5. Escrever um programa que solicite um valor numérico correspondente a um mês do ano (1 a 12) e imprima o mês correspondente por extenso. O programa deve avisar se o valor não for válido.

*Resolução:*

   ```C
void ex5 (void){
    int mes;
    printf("\n\t******** Exercicio 5 ********\n");
    printf("Insira um valor numerico correspondente a um mÃªs (1 a 12):\n");
    scanf("%d",&mes);
    switch(mes) {
        case 1 :
            printf("Janeiro\n");
            break;
        case 2 :
            printf("Fevereiro\n");
            break;
        case 3 :
            printf("Marco\n");
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
```

6.	Escrever um programa que solicite dois números e o símbolo de operação aritmética (+ - * /). O programa deve imprimir o resultado da operação.

*Resolução:*

```C
void ex6 (void){
    int num1, num2;
    char operacao;
    printf("\n\t******** Exercicio 6 ********\n");
    printf("Insira o primeiro numero:\n");
    scanf("%d",&num1);
    printf("Insira o segundo numero:\n");
    scanf("%d",&num2);
    printf("Insira a operacao que quer realizar (+, -, * ou /):\n");
    scanf(" %c",&operacao);
    switch(operacao){
        case '+' :
            printf("O resultado da soma e: %d\n",num1 + num2);
            break;
        case '-' :
            printf("O resultado da subtracao e: %d\n",num1 - num2);
            break;
        case '*' :
            printf("O resultado da multiplicacao e: %d\n",num1 * num2);
            break;
        case '/' :
            printf("O resultado da divisao e: %f\n", (float)num1 / num2);
            break;
        default :
            printf("Operacao invÃ¡lida\n");
    }
}
```

7.	Escreva um programa que verificará se o resto de uma divisão de um número digitado pelo utilizador por 5 é 0, 1, 2, 3 ou 4. Se o resto for zero, a seguinte mensagem será exibida: “A divisão é perfeita!”; Escreva também mensagens personalizadas para os valores 1, 2, 3 e 4.

*Resolução:*

   ```C
void ex7 (void){
    int num,res;
    printf("\n\t******** Exercicio 7 ********\n");
    printf("Insira um numero:\n");
    scanf("%d",&num);
    res = num%5;
    switch (res){
        case 0 :
            printf("A divisaao 
 perfeita!\n");
            break;
        case 1 :
            printf("O resto da divisao e 1\n");
            break;
        case 2 :
            printf("O resto da divisao e 2\n");
            break;
        case 3 :
            printf("O resto da divisao e 3\n");
            break;
        case 4 :
            printf("O resto da divisao e 4\n");
            break;
        default :
            printf("O resto da divisao e %d\n",res);
    }
}

   ```

8.	Faça um programa que leia os valores A, B, C e imprima no ecrã se a soma de A + B é menor que C.

*Resolução:*

   ```C
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
        printf("A soma de A + B e menor que C.\n");
    } else {
		printf("A soma de A + B nao e menor que C.\n");
	}
}

   ```

9. Faça um programa que recebe um número qualquer e informa no ecrã se é par ou ímpar.

*Resolução:*

   ```C
void ex9 (void){
    int num;
    printf("\n\t******** Exercicio 9 ********\n");
    printf("Insira um numero:\n");
    scanf("%d",&num);
    if(num%2){
        printf("O numero e impar!\n");
    } else {
        printf("O numero e par!\n");
    }
}

   ```

10. Faça um programa que encontre o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.

*Resolução:*

   ```C
void ex10 (void){
    int num;
    printf("\n\t******** Exercicio 10 ********\n");
    printf("Insira um numero inteiro positivo ou negativo:\n");
    scanf("%d",&num);
    if (num >= 0){
        printf("O numero introduzido e positivo e o seu dobro e %d\n",num*2);
    } else {
        printf("O numero introduzido e negativo e o seu triplo e %d\n",num*3);
    }
}

   ```

11. Escreva um programa que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.

*Resolução:*

   ```C
void ex11 (void){
    int a,b,c;
    printf("\n\t******** Exercicio 11 ********\n");
    printf("Insira tres valores inteiros e diferentes:\n");
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

   ```

12. O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é

IMC = peso / ( altura )²

Elabore um programa que leia o peso e a altura de um adulto e mostre sua condição de acordo com a tabela abaixo. 

	| **IMC em adultos** | **Condição** |
	| -------------- | -------- |
	| i.	Abaixo de 18,5 | Abaixo do peso | 
	| ii.	Entre 18,5 e 25 | Peso normal |
	| iii.	Entre 25 e 30 | Acima do peso | 
	| iv.	Acima de 30 | obeso |

*Resolução:*

   ```C
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

   ```


13. Elabore um programa que apresente o total da soma obtida dos cem primeiros números inteiros.

*Resolução:*

   ```C
void ex16(void){
    int i = 0, soma = 0;
    printf("\n\t******** Exercicio 16 ********\n");
    for (i = 0; i<=100 ; i++){
        soma = soma + i;
    }
    printf("A soma dos primeiros cem numeros inteiros e: %d\n",soma);
}

   ```

14. Elabore um programa que efetue a leitura sucessiva de valores numéricos e apresente no final o total do somatório, a média e o total de valores lidos. O programa deve fazer as leituras dos valores enquanto o utilizador estiver a fornecer valores positivos. Ou seja, o programa deve parar quando o utilizador fornecer um valor negativo

*Resolução:*

   ```C

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
    printf("Foram introduzidos %d numeros;\nA soma desse numeros e de %d e a media de %f\n",qtd,soma,(float)soma/qtd);
}
   ```
   
15. Elabore um programa que solicite a idade de várias pessoas e imprima: 
   - Total de pessoas com menos de 21 anos. 
   - Total de pessoas com mais de 50 anos. 
   - O programa termina quando idade for =-99.


*Resolução:*

   ```C
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

   ```
