for (int i = 1; i <=n; i++){
// one line
    for (int j = 1; j<=s; j++){
    printf(" "); 
    }
    s++;

    for (int j = 2*n-1; j<=star; j++){
    printf("*"); 
    }
    star -=2;
    printf("\n");
}