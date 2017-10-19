#ifndef __CONNTABLE_H__
#define __CONNTABLE_H__
#include <time.h>
class conntable{

public:
    conntable();
    conntable(int fd);
    void setRandom(int random);
    void setFd(int fd);
    void setStat(char stat);
    void setTime(time_t Time);
    void setId(char* id);
    void getRandom(int* random);
    void getFd(int* fd);
    void getStat(char* stat);
    void getTime(time_t* Time);
    void getId(char* id);
private:
    int random;
    int fd;
    char stat;
    time_t Time;
    char* id;
};
#endif
