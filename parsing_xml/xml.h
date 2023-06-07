#ifndef xml
#define xml

#include <string>

class XML {
private:
    std::string nodeId;

public:
    void parse(const std::string& xml);
    std::string getNodeId();
};

#endif // xml
