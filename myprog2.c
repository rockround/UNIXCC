#include <fcntl.h>
#include <stdio.h>
int main(){
mkdir("workspace",0755);
chdir("workspace");
mkdir("dir1",0755);
mode_t mode = S_IWUSR | S_IRUSR | S_IXUSR;
int fd = creat("dir1/file10",mode);
mkdir("dir2",0755);
int fd2 = creat("dir2/file20",mode);
creat("file1",mode);
symlink("dir2/file20","link1");
return 0;
}
