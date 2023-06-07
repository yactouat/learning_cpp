#include <gtest/gtest.h>
#include "xml_parser.h"

TEST(XMLTest, CanParseNodeId) {
    // Arrange
    // the syntax `std::string xml = R"(...)"` is used to create a raw string literal, 
    // which is useful when you want to include special characters in a string without needing to escape them
    std::string xmlStr = R"(
        <UAVariable NodeId="ns=1;i=20" BrowseName="TestNode" SomeField="some_field">
            <DisplayName>TestNode</DisplayName>
            <Description>A test node that you need to parse in cpp</Description>
        </UAVariable>
    )";
    xml_parser::XMLParser parser;

    // Act
    parser.parse(xmlStr);

    // Assert
    ASSERT_EQ(parser.getNodeId(), "ns=1;i=20");
}
