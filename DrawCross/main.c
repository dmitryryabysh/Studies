#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main(){
  setlocale( LC_ALL, "Russian");
  FILE *pass;
  pass=fopen("D:\\github\\DrawCross\\Cross.txt", "w");
  int y, x;
  for(y=0;y<40;y++){
    for(x=0;x<30;x++){
     if(y==0||y==39){
      fprintf (pass, "o");
      fprintf (pass, " ");
     }else{
      if(x==0||x==29){
        fprintf (pass, "o");
      }else if((x>3&x<27)&(y>2&y<37)&(x==14||x==15||y==10||y==11)){
        fprintf (pass, "x");
      }else fprintf (pass, " "); fprintf (pass, " ");
     }
    }
    fprintf (pass, "\n");
  }
  fclose(pass);
}
