#include <fcntl.h>
#include <stdio.h>
int main(){
mkdir("workspace",0755);
mkdir("workspace/dir1",0755);
int fd = open("workspace/dir1/file10",O_CREAT, 0755);
mkdir("workspace/dir2",0755);
int fd2 = open("workspace/dir2/file20",O_CREAT, 0755);
open("workspace/file1",O_CREAT);
link("workspace/dir2/file20","workspace/link1");
return 0;
}
