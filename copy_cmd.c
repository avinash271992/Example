# FILE concepts
#include<stdion.h>
#include<string.h>
int main(int argc, char *argv)
{
FILE* fp,f2;
f2=fopen("argv[2],"w");

fp=fopen("argv[1],"r");
if(fp<0){
printf("there is no file with name : %s\n",argv[1]);
return ;
}
while((ch=fgetc(fp))!=EOF)
fputc(c,f2);

fclose(fp);
fclose(f2);
}
