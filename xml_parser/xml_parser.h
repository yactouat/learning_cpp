#ifndef xml_parser
#define xml_parser

#include <string>

class XMLParser {
private:
    std::string nodeId;

public:
    void parse(const std::string& xml_parser);
    std::string getNodeId();
};

#endif // xml_parser
