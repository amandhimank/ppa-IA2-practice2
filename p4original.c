#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void out_put(int sum);

int main(){
  int n, sum;
  n = input_array_size();
  int a[n];
  input_array(n, a);
  sum = sum_composite_numbers(n, a);
  out_put(sum);
  return 0;
}


int input_array_size(){
  int x;
  printf("Enter array size :\n");
  scanf("%d", &x);
  return x;
}

void input_array(int n, int a[n]){
  for(int i = 0; i < n; i++){
    printf("Enter the element%d : ", i + 1);
    scanf("%d", &a[i]);
  }
}

int sum_composite_numbers(int n, int a[n]){
  int sum = 0;
  for(int i = 0; i < n; i++){
    for(int j = 2; j < n; j++){
      if(a[i] == 2){
        break;
      }
      if(a[i] % j == 0){
        sum += a[i];
        break;
      }
      else{
        break;
      }
    }  
  }
  return sum;
}

void out_put(int sum){
  printf("Sum of composite number is %d\n", sum);
}
