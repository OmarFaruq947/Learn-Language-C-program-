#include<stdio.h>
#include<string.h>
int main()
{
char str1[1001], str2[1001]; 
  
scanf ("%s %s", &str1, &str2);
    
int len_ofstr1= strlen(str1);
int len_ofstr2= strlen(str2);

printf("%d %d\n", len_ofstr1, len_ofstr2);
printf("%s %s\n",str1, str2);  
    return 0;
}