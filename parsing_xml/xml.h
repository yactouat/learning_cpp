#ifndef XML_H
#define XML_H

#include <string>

class XML {
private:
    std::string nodeId;

public:
    void parse(const std::string& xml);
    std::string getNodeId();
};

#endif // XML_H
