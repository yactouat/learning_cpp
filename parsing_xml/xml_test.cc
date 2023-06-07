#include <gtest/gtest.h>
#include "xml.h"  // Assuming the XMLParser is defined here

TEST(XMLTest, CanParseNodeId) {
    // Arrange
    std::string xml = R"(
        <UAVariable NodeId="ns=1;i=20" BrowseName="TestNode" SomeField="some_field">
            <DisplayName>TestNode</DisplayName>
            <Description>A test node that you need to parse in cpp</Description>
        </UAVariable>
    )";
    XML parser;

    // Act
    parser.parse(xml);

    // Assert
    ASSERT_EQ(parser.getNodeId(), "ns=1;i=20");
}
