#include <string>
#include "xml.h"

class XMLParser {
private:
    std::string nodeId;

public:
    void parse(const std::string& xml) {
        nodeId = 'x';
    }

    std::string getNodeId() {
        return nodeId;
    }
};
