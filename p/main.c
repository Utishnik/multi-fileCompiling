#include <stdio.h>
#include <Windows.h>

int main(void)
{
	while(1)
	{
		if(GetKeyState(13)>=0)
			printf("1\n");
	}
}
