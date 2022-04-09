#include <stdio.h>
#include <string.h>

int main()
{
    char string[100][100000];
	int i,n,size,c=0;
	scanf("%d", &n);
    for(i=0; i< n ; i++)
    {c=0;
		scanf("%s",string[i]);
		size=strlen(string[i]);
		for(int j=0; j< (size-1) ; j++)
        {

            if(string[i][j]!=string[i][j+1])
            {
                j++;
                c++;
            }
        }
        printf("%d\n",c);
	}
    return 0;
}
