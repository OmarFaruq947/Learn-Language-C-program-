#include<stdio.h>



void func4(void){
    printf("E\n");
}
void func3(void){
    printf("D\n");
    func4();
}

void func2(void){
    printf("C\n");
    func3();
}
void func(void){
    printf("B\n");
    func2();
}

int main()
{
printf("A\n");
func();
    return 0;
}