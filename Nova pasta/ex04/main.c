#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, soma=0, din_quan, din_final, din_fal;
    int desconto,form;
    char perg;


    printf("=====SISTEMA=====");
    do{
        printf("\nDigite o preco do produto R$:");
        scanf("%f", &produto);

        soma = soma+produto;

        printf("Deseja adicionar mais um produto se sim precione <y> para continuar se nao aperte qualquer tecla:");
         fflush(stdin);
          scanf("%c", &perg);

    }while(perg == 'y');

    printf("\nPreco final eh de R$%1.f", soma);

    printf("\n\nQual forma de pagamento deseja:\n");
    printf("\nDinheiro - 1");
    printf("\nCartão credito/debito - 2");
    printf("\n\nQual opcao voce deseja:");
     fflush(stdin);
     scanf("%d", &form);

    switch(form)
    {
        case 1:
            printf("Quantia: ");
             scanf("%f", &din_quan);
              if(din_quan > soma){
              din_final = (din_quan - soma);
               printf("seu troco eh de%.1f", din_final);
              }
              else{
                din_fal = ( din_quan - soma);
                printf("Ta faltando R$%1.f", din_fal);
              }
            break;
        case 2:
             printf("Insira o cartao");

            break;

        default:
            printf("Selecione umas das opceos");



    }


    return 0;
}
