#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include <stddef.h>
#include "syscall.h"

int main(int argc, char *argv[]) {

     char* r1 = argv[1];
     char* w1 = argv[2];
     int r = atoi(r1);
     int w = atoi(w1);
     int fd;
     int var;
     void* test = 0;
     for (int i = 0; i < r; ++i) {
         fd = read(0, test, 0);
     }
     for (int j = 0; j < w; ++j) {
         fd = write(0, (const void*)test, 0);
     }
     if (fd == 0) {
     }
     struct iostat* iostat = malloc(sizeof(struct iostat));
     var = getiocounts((void*)iostat);
     printf(1, "%d %d %d\n",var,iostat->readcount,iostat->writecount);
     exit();
}
