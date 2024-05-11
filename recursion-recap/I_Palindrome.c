#include<stdio.h>
#include<string.h>
int main()
{
char str[1001], str_2[1001];
scanf ("%s", &str);

strcpy(str_2,str);

int i=0, j=strlen(str_2)-1;
while(i<j){
    char temp = str_2[i];
    str_2[i]=str_2[j];
    str_2[j] = temp;
    i++;
    j--;
}

if (strcmp(str,str_2) == 0 ) printf("YES");
else printf("NO");

return 0;
}