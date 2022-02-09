#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
  int a, b, c, isscalene;
  a = input_side();
  b = input_side();
  c = input_side();
  isscalene = check_scalene(a, b, c);
  output(a, b, c, isscalene);
  return 0;
}

int input_side(){
  int x;
  printf("Enter side :\n");
  scanf("%d", &x);
  return x;
}

int check_scalene(int a, int b, int c){
  if(a != b && a != c && b != c){
    return 1;
  }
  else{
    return 0;
  }
}

void output(int a, int b, int c, int isscalene){
  if(isscalene == 1){
    printf("Triangle is scalene\n");
  }
  else{
    printf("Triangle is not scalene\n");
  }
}


