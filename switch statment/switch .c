#include<stdio.h>
int main()
{
    int c;
    printf ("\n\nplease prese the switch:    ");
    scanf("\n\n%d",&c);
    switch (c){
        case 1:{

            printf ("\n\n one ");
            break;
        }
        case 2:{

            printf ("\n\n Two");
            break;
        }
        case 3:{

            printf ("\n\n Three");
            break;
        }
        case 4:{

            printf ("\n\n fore");
            break;
        }
         case 5:{

            printf ("\n\n Five");
            break;
        }
        default:{
            printf ("\n\n unwanted \n\n");
            break;
        }
    }
    return 0;
}
