#include<stdio.h>

int main(){
    int n=10, i, vet[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    //printf("Digite um numero:");
    //scanf("%d", &n);
    for(i=0; i < n; i++){
        if(vet[i] % 2 == 1){
           printf("%d\n", vet[i]);
           
        }
            
    }
        
    return 0;   
}
