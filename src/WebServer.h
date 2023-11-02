//
// Created by AvvakumovAS on 02.11.2023.
//

#ifndef TEST2710_WEBSERVER_H
#define TEST2710_WEBSERVER_H

#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/sendfile.h>
#include<fcntl.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<assert.h>
#include<unistd.h>

namespace alwebsrv {

    class WebServer {
    public:int startSrv(int port);
    };

} // alwebsrv

#endif //TEST2710_WEBSERVER_H
