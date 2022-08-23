#include<stdio.h>
#include<string.h>

void daonguoctu(char s[])
{
	int len=strlen(s);
	int i=0;
	strrev(s);
	while(i<len)
	{
		int oldi=i;
		while(i<len&&s[i]!=' ')
			i++;
		for(int j=0;j<=int((i-oldi)/2)-1;j++)
		{
			int tam=s[j+oldi];
			s[j+oldi]=s[i-j-1];
			s[i-j-1]=tam;	
		}
		i++;
	}
}
char inhoa(char s[])
{
	int i,len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			printf("%c\n",s[i]);
		}
	}
}
char TuDaiNhat(char s[]) 
{
	int i;
	int maxx=0, maxi=0;
 	int len=strlen(s);
  	if(s[0]==' ') 
  	{
   		for(i=0; i<len-1; i++) 
	   	{
     		if((s[i]==' ') && (s[i+1]!=' ')) 
	 		{
    			int j=i+1;
       			int dem=0;
          		while((s[j]!=' ') && (s[j]!='\0')) 
	  			{
    				dem++;
   					j++;
      			}
         		if(dem>maxx) 
		 		{
    				maxx=dem;
        			maxi=i+1;
           		}
     			i=j-1;
        	}
         }
    } 
	else 
	{
 		i=0;
   		int dem=0;
     	while((s[i]!=' ') && (s[i]!='\0'))
 	 	{
    		dem++;
      		i++;
      	}
       	if(dem>maxx) 
   		{
     		maxx=dem;
       		maxi=0;
         }
         for(i=maxx-1; i<len-1; i++) 
	 	 {
    		if((s[i]==' ') && (s[i+1]!=' ')) 
			{
      			int j=i+1;
         		int de=0;
           		while((s[j]!=' ') && (s[j]!='\0')) 
  				{	
      				de++;
          			j++;
             	}
              	if(de>maxx) 
			  	{
      				maxx=de;
          			maxi=i+1;
           		}
             	i=j-1;
             }
          }
      }
      int k;
      for(k=maxi; k<(maxi+maxx); k++) 
	  {
   			printf("%c",s[k]);
      }
}
void khoangtrang(char s[])
{
	for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]==' '&&s[i+1]==' ')
        {

            strcpy(&s[i], &s[i + 1]);
            i--;
        }

    }  	
}
int main()
{
	int n,maxlength = 0;
	char s[100];
	gets(s);
	puts(s);
	daonguoctu(s);
	puts(s);
	inhoa(s);
	TuDaiNhat(s);
	khoangtrang(s);
	puts(s);

	
}