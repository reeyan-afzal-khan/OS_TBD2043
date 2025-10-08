   1 #include<stdio.h>
   2 #include<dirent.h>
   3
   4 int main(int argc, char **argv){
   5 DIR *dp;
   6 struct dirent *link; dp=opendir(argv[1]);
   7 printf("\n contents of the directory %s are \n", argv[1]);
   8 while((link=readdir(dp))!=0)
   9   printf("%s",link->d_name); closedir(dp);
  10 }