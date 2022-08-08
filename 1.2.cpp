#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	int s=1;
	printf(" vui long nhap n: ");
	scanf("%d",&n);
	if(n==1){
		printf(" %d khong la so nguyen to",n);
	}else{
		for(i=2; i<=sqrt(n); i++){
			s =1;
			if(n%i==0){
				s =0;
			}
		}
		if(s==1){
			printf(" %d la so nguyen to", n);
		}else{
			printf("%d khong la so nguyen to", n);
		}
	}
}
