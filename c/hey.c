#include<stdio.h>

{
int hr =atoi(strok(s, ":"));
int min =atoi(strok(NULL, ":"));
int sec =atoi(strok(NULL, ""));
 char ampm[3];
 ampm[0]=s[8];
 ampm[1]='M';

 char *time= malloc(128*sizeof(char));
 if(strcmp(ampm,"AM")==0 && hr==12)
 sprintf(time, "00:%.2d:%.2d",min,sec);
 else if(strcmp(ampm,"AM")==0)
 sprintf(time, "%.2d:%.2d:%.2d",hr,min,sec);
  else if(strcmp(ampm,"PM")==0){
  if(hr!=12)
  hr=hr+12;
  sprintf(time, "%.2d:%.2d:%.2d",hr,min,sec);
  }
  return time;
  }


