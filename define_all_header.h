#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <linux/input.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <sys/mman.h>
#include <dirent.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/msg.h>
#include <sys/sem.h>
#include <semaphore.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/epoll.h>
#define OPEN_RD_FLAGS  O_RDONLY
#define OPEN_WR_FLAGS  O_WRONLY
#define OPEN_RDWR_FLAGS O_RDWR
#define OPEN_CWD_FLAGS   O_CREAT|O_EXCL|O_RDWR
#define OPEN_TWD_FLAGS   O_RDWR|O_TRUNC
#define OPEN_RWNONBLCK_FLAGS   O_RDWR|O_NONBLOCK