#include<stdio.h>
#include<string.h>
void substring(char [], char[], int, int);

int main()
{
 char str[100]="hello";
 char strnew[100],strnew1[100];
 int len,i;
 //printf("%s",str);
 len=strlen(str);
 //printf("%d",len);
 for(i=1;i<len-1;i++)
 {
    substring(str, strnew, 1, i);
     printf("%s\n",strnew);
 }
 //for(i=len;i>0;--i)
 for (i = len; i>= 0;i--)
 {
     
     substring(str, strnew1, 1, i);
     printf("%s\n",strnew1);
     
 }

 return 0;
}

// C substring function definition
void substring(char s[], char sub[], int p, int l) {
   int c = 0;
   
   while (c < l) {
      sub[c] = s[p+c-1];
      c++;
   }
   sub[c] = '\0';
}