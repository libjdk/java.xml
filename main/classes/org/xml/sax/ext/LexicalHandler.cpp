#include <org/xml/sax/ext/LexicalHandler.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$MethodInfo _LexicalHandler_MethodInfo_[] = {
	{"comment", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _LexicalHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.ext.LexicalHandler",
	nullptr,
	nullptr,
	nullptr,
	_LexicalHandler_MethodInfo_
};

$Object* allocate$LexicalHandler($Class* clazz) {
	return $of($alloc(LexicalHandler));
}

$Class* LexicalHandler::load$($String* name, bool initialize) {
	$loadClass(LexicalHandler, name, initialize, &_LexicalHandler_ClassInfo_, allocate$LexicalHandler);
	return class$;
}

$Class* LexicalHandler::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org