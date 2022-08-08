#include <stdio.h>
int main(){
    int n;
    int start = 0;
    int end = n;
    printf(" vui long nhap n: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("nhap mang:\n ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
     }
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("\n\nMANG DUOC DAO NGUOC\n");
    for(int i = 0; i < n; i++){
        printf("%d \t",arr[i]);
    }
}
