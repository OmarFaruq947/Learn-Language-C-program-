// #include<stdio.h>
// #include<string.h>
// #include <ctype.h>
// int main()
// {

// char str[100];
//   scanf ("%s", &str);

// // for (int i = 0; i <strlen(str); i++)
// // {
// // int value = tolower(str[i])-'a';
// // printf("%d  ", value);
// // }


// int count[26]={0};
// for (int i = 0; i < strlen(str); i++)
// {
//    int value = tolower(str[i])-'a';
//     count[value]++;
    
// }

// for (int i = 0; i <26; i++)
// {
//     if (count[i]!= 0)
//     {
//     printf("%c : %d\n",i+'a',count[i]);
//     }
// }

//     return 0;
// }


#include<stdio.h>
#include<math.h>
int main()
{
char c;
int cnt[26]={0};
while ( scanf ("%c", &c) != EOF)
{
    cnt[c-'a']++;
}
for(char i='a'; i<='z'; i++){
    if (cnt[i-'a']> 0)
    {
    printf("%c : %d\n", i,cnt[i-'a']);
    }   
}
    return 0;
}