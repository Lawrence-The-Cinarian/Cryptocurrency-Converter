#include <stdio.h>
#include <string.h>

int main() {

/*CUSD = USDT = USD, All are One Peg
CUSD = $1*/
int choice
double num;
const double ETH/USDT = 2000; /*ETH TO USDT or USDT TO ETH*/
const double BTC/USDT = 75000; /*BTC TO USDT or USDT TO BTC*)
const double CN/CUSD = 1000; /*CN TO CUSD or CUSD TO CN*/

printf("Cinel Network");
printf("What conversion are you doing today: ");
  printf("(1) BTC TO USDT\n");
  printf("(2) USDT TO BTC\n");
  printf("(3) ETH TO USDT\n");
  printf("(4) USDT TO ETH\n");
  printf("(5) CN TO CUSD\n");
  printf("(6) CUSD TO CN\n");
  printf("\n");
  printf("Enter: ");
  scanf("%d", &choice);
  printf("\n");
  printf("Enter Number: ");
  scanf("%lf", &num);
  switch(choice) {
    case 1: 
      num * BTC/USDT;
     
    
  }

    return 0;
}
