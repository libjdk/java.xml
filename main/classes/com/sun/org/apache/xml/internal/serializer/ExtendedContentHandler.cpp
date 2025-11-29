#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>

#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <jcpp.h>

#undef HTML_ATTREMPTY
#undef HTML_ATTRURL
#undef NO_BAD_CHARS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ExtendedContentHandler_FieldInfo_[] = {
	{"NO_BAD_CHARS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExtendedContentHandler, NO_BAD_CHARS)},
	{"HTML_ATTREMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExtendedContentHandler, HTML_ATTREMPTY)},
	{"HTML_ATTRURL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExtendedContentHandler, HTML_ATTRURL)},
	{}
};

$MethodInfo _ExtendedContentHandler_MethodInfo_[] = {
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"addAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"addUniqueAttribute", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"addXSLAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"characters", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"entityReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"getNamespaceMappings", "()Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURI", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURIFromPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"setSourceLocator", "(Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ExtendedContentHandler_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.ExtendedContentHandler",
	nullptr,
	"org.xml.sax.ContentHandler",
	_ExtendedContentHandler_FieldInfo_,
	_ExtendedContentHandler_MethodInfo_
};

$Object* allocate$ExtendedContentHandler($Class* clazz) {
	return $of($alloc(ExtendedContentHandler));
}

$Class* ExtendedContentHandler::load$($String* name, bool initialize) {
	$loadClass(ExtendedContentHandler, name, initialize, &_ExtendedContentHandler_ClassInfo_, allocate$ExtendedContentHandler);
	return class$;
}

$Class* ExtendedContentHandler::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com