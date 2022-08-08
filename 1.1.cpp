#include<stdio.h>
int main(){
  int n;
  float S;
  S = 0;
  {
    printf("Nhap vào so n: ");
    scanf("%d", &n);
  	for(int i = 1; i <= n; i++){
    S = S + 1.0 / i;
  }
  printf("Tong S = %f",S);
}
}
