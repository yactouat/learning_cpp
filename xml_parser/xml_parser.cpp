#include <string>
#include "xml_parser.h"

void XMLParser::parse(const std::string& xml) {
    nodeId = 'x';
}

std::string XMLParser::getNodeId() {
    return nodeId;
}
