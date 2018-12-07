#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
FILE *fp;
char buffer[1024],ch[10],*cmd;
cmd=(char *)malloc(sizeof(char)*100);
while(1)
{
printf("~/ankita/ ");
strcpy(cmd,"/bin/");
scanf("%s",ch);
strcat(cmd,ch);
if(strcmp(ch,"exit")==0)
{
return 0;
}
fp=popen(cmd,"r");
while(fgets(buffer,sizeof(buffer)-1,fp)!=NULL)
{
printf("%s",buffer);
}
pclose(fp);
}
}














