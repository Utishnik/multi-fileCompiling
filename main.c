#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int lens=0;
char CONFIG[2000]="";

int find(char str[],char pstr[],int start_index)
{
    int index=-1;
    int lenn=strlen(pstr);
    for(int i = start_index;i<strlen(str);i++)
    {
        for(int j = 0;j<strlen(pstr);j++)
        {
            if(lenn==0)
            {
                return index;
            }
            if(str[j+i]==pstr[j])
            {
                lenn--;
                index=i;
            }
            else
            {
                index=-1;
                lenn=strlen(pstr);
                break;
            }
        }
    }
    return index;
}

void Intepritator(char code[])
{
	int codepos=0;
	int countends=0;//counter end str
	for(int i=0;i<lens;i++){
		if((find(code,";",codepos+1))!=-1) {countends++;
		printf("--D__ %d\n",find(code,";",codepos+1));codepos=find(code,";",codepos+1);}
	}
	if(countends<lens)
		{printf("ERROR");return;}	
}


int main(void)
{

	char Path[50]="Config.txt";
	char c[1000];
	FILE *f;
    	f=fopen(Path,"r");
    		while(!feof(f))
		{
			if(fgets(c,1000,f) != NULL)
			{
				strcat(CONFIG,c);
				lens++;	
			}
		}

	fclose(f);

	printf("%s\n",CONFIG);
	Intepritator(CONFIG);
}
	
