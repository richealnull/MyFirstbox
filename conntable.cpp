#include "conntable.h"
#include <string.h>
     conntable::conntable(){
         fd = -1;
         random = -1;
         stat = -1;
         Time = -1;
         id = NULL;

     }
     conntable::conntable(int fd){
         this->fd = fd;
         random = -1;
         stat = -1;
         Time = -1;
         id = NULL;
     }
     void conntable::setRandom(int random){
         this->random = random;
     }
     void conntable::setFd(int fd){
         this->fd = fd;
     }
     void conntable::setStat(char stat){
         this->stat = stat;
     }
     void conntable::setTime(time_t Time){
         this->Time=time(NULL);
     }
     void conntable::setId(char* id){
         if(id != NULL){
             strcpy(this->id,id);
         }
     }
     void conntable::getRandom(int* random){
         *random = this->random;
     }
     void conntable::getFd(int* fd){
         *fd = this->fd;
     }
     void conntable::getStat(char* stat){
         *stat = this->stat;
     }
     void conntable::getTime(time_t* Time){
         *Time = this->Time;
     }
     void conntable::getId(char* id){
          if(id != NULL){
              strcpy(id,this->id);
          }
     }
