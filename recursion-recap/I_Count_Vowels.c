#include<stdio.h>

int str_func(char str[],int i){
    if (str[i] == '\0') return 0;

    int ans = str_func(str, i+1);
    if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = str[i]+32;
    }
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
       return ans+1; 
    }
    return ans;
}


int main(){
    char str[205];
    fgets(str, 205, stdin);
    int cnt = str_func(str,0);
    printf("%d\n", cnt);
    return 0;
}

