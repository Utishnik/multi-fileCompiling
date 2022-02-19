#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(void)
{
    char fEnterIf=0;
    char fCICLSIGNL=0;
    char bazapath[100]={"baza.txt"};
    char code[10000]={" "};
    char path[100]={" "};
    char c[2000]={" "};
    int indexbaza=0;
    printf("please enter file code:\n");
    char sym=' ';
    
    while((1)){//условие цикла не сработал
        printf("0000000000000000000000000\n");
        fCICLSIGNL=1;
        fEnterIf=1;
        scanf("%s",path);
        if(scanf("%c",&sym)&&sym=='\n');
    }
    fCICLSIGNL=0;
    fEnterIf=0;
    //сделать так чтобы можно было вести путь к фаулу или выбрать его из предущих строк в буфере
    FILE *f1;
    f1=fopen(bazapath,"a");
        fprintf(f1,"%s\n",path);
    fclose(f1);
    char fl=0;
    


    //*******FILE OPEN***********
            FILE *f;
            f=fopen(path,"r");
                if(f!=NULL)
                {
                    while(!feof(f))
                    {
                        if(fgets(c,2000,f)!=0)
                        {
                            strcat(code,c);
                        }
                    }
                }
                else {printf("ERROR OPEN FILE!\n");fl=1;}
            fclose(f);
            
    //*******FILE OPEN END*******

    if(!fl)
    {
        printf("please enter n number symbol:\n");
        int number=0;
        scanf("%d",&number);
    

        printf("please input 1 if you want to output n character otherwise 0 if you want to output a string from this character:\n");

        int vibor=0;

        scanf("%d",&vibor);

        if(vibor==1)
        {
            printf("%c",code[number]);
        }
        else
        {
            for(int i = number;i<strlen(code);i++)
                printf("%c",code[i]);
        }
    }
}