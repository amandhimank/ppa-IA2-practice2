#include <stdio.h>

int input();
int gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
  int a, b, hcf;
  a = input();
  b = input();
  hcf = gcd(a, b);
  output(a, b, hcf);
  return 0;
}

int input(){
  int x;
  printf("Enter the numbers :\n");
  scanf("%d", &x);
  return x;
}

int gcd(int a, int b){
  int number, gcd;
  if(a < b){
    number = a;
  }
  else{
    number = b;
  }
  for(int i = number; i > 0; i--){
    if(a % i == 0 && b % i == 0){
      gcd = i;
      break;
    }
    else{
      continue;
    }
  }
  return gcd;
}

void output(int a, int b, int gcd){
  printf("HCF of %d and %d is %d\n", a, b, gcd);
}