#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "spanish.h"


//
// Created by Will on 4/7/2019.
//

void spanish();
void english();

int main() {
    int userIn;
    puts("enter 0 para Spanish");
    puts("enter 1 for English");

    scanf("%i",&userIn);

    if (userIn == 0) {
    spanish();
    }
    else if(userIn==1){
        english();
    }
    else{
        puts("no supported language has been chosen, try again");
    }

   getchar();
    return 0;
}



void spanish() {
    int c, d, conteo, dcbs;
    float valor, r, total;

    total = 0;
    conteo = 1;
    printf("Este programa est%c dise%cado para calcular el total de una compra\n\n", Spanish_a(), Spanish_n());
    printf("Entre la cantidad de art%cculos %cnicos:", Spanish_i(), Spanish_u());

    scanf("%d", &c);

//    puts("Va a haber descuento en esta compra? \t [Y/N]");
//    scanf("%d",&dcbs);

    while (c>=1) {

        printf("\n\nEntre el valor de su art%cculo %i: $", Spanish_i(), conteo);
        scanf("%f", &valor);

        //if(dcbs=='Y') {
                printf("\n\nEntre el porciento de descuento del art%cculo %i (si no aplica escriba 0)\n", Spanish_i(),
                   conteo);
                scanf("%f", &r);
       // }

        printf("Entre cu%cntos art%cculo %i desea:", Spanish_a(), Spanish_i(), conteo);
        scanf("%i", &d);

        total = total + (valor*d)*(1-r/100);

        c = c-1;

        conteo = conteo + 1;
    }

    printf("\n\nSu total ser%c: $ %.2f\n", Spanish_a(), total);
}

void english(){
    int uniqueArticles, numArticles, count, dcb;
    float costProduct, discount, total;
    total = 0;
    count = 1;
    printf("This program is designed to calculate the total cost of a sale\n\n");

//    puts("will there be discounts in this purchase? \t [Y/N]");
//    scanf(" %d",&dcb);

    printf("Enter the amount of unique articles");
    scanf("%i", &uniqueArticles);

    while (uniqueArticles >= 1) {

        printf("\n\nEnter the cost of article %i: $",count);
        scanf("%f", &costProduct);

       // if(dcb=='Y') {
            printf("\n\nEnter the discount percent of the article %i (if the discount doesn't apply for this article enter 0)\n",
                   count);
            scanf("%f", &discount);
       // }

        printf("How many article %i are being purchased: ", count);
        scanf("%i", &numArticles);

        total = total + (costProduct*numArticles)*(1-discount/100);
        uniqueArticles = uniqueArticles-1;
        count = count + 1;
    }
    printf("\n\nYou're total is equal to: $ %.2f\n", total);
}
