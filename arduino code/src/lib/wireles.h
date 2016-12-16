#ifndef wireles_h
#define wireles_h

#include <inttypes.h>

class Wireles
{
   public:
     void Send(char *message,int message_length);
     void Connect();
   private:
     int _speed;
};

#endif