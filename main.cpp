#include <iostream>
#include "hiredis.h"


int main() {
    std::cout << "Hello, World!" << std::endl;

    redisContext *c = redisConnect("localhost", 6379);
    c != NULL && c->err ? printf("Error: %s\n", c->errstr) : printf("Connected to Redis\n");

    redisReply *reply;
    reply = (redisReply*)redisCommand(c, "AUTH password");
    freeReplyObject(reply);

    reply = (redisReply*)redisCommand(c,"SET %s %s","foo","bar");
    freeReplyObject(reply);

    reply = (redisReply*)redisCommand(c,"GET %s","foo");
    printf("%s\n",reply->str);
    freeReplyObject(reply);


    redisFree(c);
    return 0;
}