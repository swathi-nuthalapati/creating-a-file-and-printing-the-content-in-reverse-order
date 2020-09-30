#include<stdio.h>
void main()
{
   FILE*fp;
   char ch;
   int i,pos;
   fp=fopen("file1.txt""r");
   if(fp=NULL)
   {
      printf("File does not exis...");
   }
   fseek(fp,0,SEEK_END);
   pos=ftell(fp);
   i=o;
   while(i<pos)
   {
      i++;
      fseek(fp,-i,SEEK_END);
      ch=fgetc(fp);
      printf("%c",ch);
   }
   getch();
}
