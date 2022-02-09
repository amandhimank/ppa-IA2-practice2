#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int composite);

int main(){
  int n, composite;
  n = input_number();
  composite = is_composite(n);
  output(n, composite);
  return 0;
}

int input_number(){
  int x;
  printf("Enter number :\n");
  scanf("%d", &x);
  return x;
}

int is_composite(int n){
  int result;
  for(int i = 2; i < n; i++ ){
    if(n % i == 0){
      result = 1;
      break;
    }
    else{
      result = 0;
      break;
    }
  }
  return result;
}

void output(int n, int composite){
  if(composite == 1){
    printf("%d is a composite number\n", n);
  }
  else{
    printf("%d is not a composite number\n", n);
  }
}