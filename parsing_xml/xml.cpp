#include <string>
#include "xml.h"

void XML::parse(const std::string& xml) {
    nodeId = 'x';
}

std::string XML::getNodeId() {
    return nodeId;
}
