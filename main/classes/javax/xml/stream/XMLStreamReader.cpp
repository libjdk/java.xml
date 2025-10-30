#include <javax/xml/stream/XMLStreamReader.h>

#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _XMLStreamReader_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getAttributeCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeName", "(I)Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeNamespace", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributePrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeType", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharacterEncodingScheme", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEventType", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespacePrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPIData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPITarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTextCharacters", "()[C", nullptr, $PUBLIC | $ABSTRACT},
	{"getTextCharacters", "(I[CII)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getTextLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTextStart", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasName", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hasNext", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"hasText", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isCharacters", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEndElement", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isStandalone", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isStartElement", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isWhiteSpace", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"nextTag", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"require", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"standaloneSet", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLStreamReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.XMLStreamReader",
	nullptr,
	"javax.xml.stream.XMLStreamConstants",
	nullptr,
	_XMLStreamReader_MethodInfo_
};

$Object* allocate$XMLStreamReader($Class* clazz) {
	return $of($alloc(XMLStreamReader));
}

$Class* XMLStreamReader::load$($String* name, bool initialize) {
	$loadClass(XMLStreamReader, name, initialize, &_XMLStreamReader_ClassInfo_, allocate$XMLStreamReader);
	return class$;
}

$Class* XMLStreamReader::class$ = nullptr;

		} // stream
	} // xml
} // javax