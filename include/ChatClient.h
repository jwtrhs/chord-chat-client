#ifndef CHATCLIENT_H
#define CHATCLIENT_H

#include <string>
#include "../include/INode.h"


class ChatClient
{
    public:
        ChatClient(std::string, std::string, unsigned int);
        ChatClient(Node n);
        virtual ~ChatClient();

        void run();
        void receiveMessage(std::string);
    protected:
    private:
        void printUsage();

        Node _n = 0;
        bool send(const ID&, const std::string&);
};

#endif // CHATCLIENT_H
