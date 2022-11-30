#include<stdio.h>
int main()
{
    int a;
    scanf ("%d", &a);
    switch(a)
    {
        case 1:{printf ("Balance,call Rate&FnF \n\n\n");
        break;
        }
        case 2:{printf ("GP STAR\n\n\n");
        break;
        }
        case 3:{printf ("enter pack\n\n\n");
        break;
        }
        case 4:{printf ("talk time/minute packs\n\n\n");
        break;
        }
        case 5:{printf ("My offers\n\n\n");
        break;
        }
        case 6:{printf ("welcome tune, VAS and Roaming\n\n\n");
        break;
        }
        default :{
            printf ("your choice is wring , please first cheak your choice\n\n\n\n");
        break;
        }
    }
    return 0;
}
