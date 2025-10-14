#include <org/xml/sax/DocumentHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/Locator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AttributeList = ::org::xml::sax::AttributeList;
using $Locator = ::org::xml::sax::Locator;

namespace org {
	namespace xml {
		namespace sax {

$NamedAttribute DocumentHandler_Attribute_var$0[] = {
	{"since", 's', "1.5"},
	{}
};
$CompoundAttribute _DocumentHandler_Annotations_[] = {
	{"Ljava/lang/Deprecated;", DocumentHandler_Attribute_var$0},
	{}
};


$MethodInfo _DocumentHandler_MethodInfo_[] = {
	{"characters", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"startDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _DocumentHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.DocumentHandler",
	nullptr,
	nullptr,
	nullptr,
	_DocumentHandler_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DocumentHandler_Annotations_
};

$Object* allocate$DocumentHandler($Class* clazz) {
	return $of($alloc(DocumentHandler));
}

$Class* DocumentHandler::load$($String* name, bool initialize) {
	$loadClass(DocumentHandler, name, initialize, &_DocumentHandler_ClassInfo_, allocate$DocumentHandler);
	return class$;
}

$Class* DocumentHandler::class$ = nullptr;

		} // sax
	} // xml
} // org