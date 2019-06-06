#include <stdio.h>

void troca(char* p1, char* p2){
    char x;
    x = *p1;
    *p1 = *p2;
    *p2 = x;
}

void main()
{
    char v[10];
    for(int i = 0; i < 10; i++){
        printf("Informe uma letra:");
        scanf("%s", &v[i]);
    }
    char l2 = 'z';
    for(int i = 0; i < 10; i++){
        if(v[i] = 'a'){
            troca(&v[i], &l2);
            printf("Letra: %s\n", v[i]);
        }else{
                printf("Letra: %s\n", v[i]);
        }
    }
    
}
