#include <sys/types.h>
#include <sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
FILE *fp;
int count=0;
char path[1035];
while(1)
{
char *buff=(char *)malloc(1035*sizeof(char));
printf("%s","ankita>");
scanf("%[^\n]%*c",buff);
//scanf("%s",buff);
if(strcmp(buff,"exit")==0)
{
break;
}
else
{
fp=popen(buff,"r");
//fp=popen("/bin/ls  /home/ankita","r");
while(fp!=NULL)
{
fgets(path,sizeof(path)-1,fp);

printf("%s",path);
}
//wait((pid_t*)fp);
if(count==4)
break;
count++;
free(buff);
}
}

//pclose(fp);
}/*
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
*/













