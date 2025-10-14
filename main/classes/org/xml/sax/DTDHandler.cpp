#include <org/xml/sax/DTDHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {

$MethodInfo _DTDHandler_MethodInfo_[] = {
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _DTDHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.DTDHandler",
	nullptr,
	nullptr,
	nullptr,
	_DTDHandler_MethodInfo_
};

$Object* allocate$DTDHandler($Class* clazz) {
	return $of($alloc(DTDHandler));
}

$Class* DTDHandler::load$($String* name, bool initialize) {
	$loadClass(DTDHandler, name, initialize, &_DTDHandler_ClassInfo_, allocate$DTDHandler);
	return class$;
}

$Class* DTDHandler::class$ = nullptr;

		} // sax
	} // xml
} // org