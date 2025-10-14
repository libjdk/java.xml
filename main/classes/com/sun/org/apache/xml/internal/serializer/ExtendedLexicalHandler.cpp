#include <com/sun/org/apache/xml/internal/serializer/ExtendedLexicalHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _ExtendedLexicalHandler_MethodInfo_[] = {
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ExtendedLexicalHandler_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.ExtendedLexicalHandler",
	nullptr,
	"org.xml.sax.ext.LexicalHandler",
	nullptr,
	_ExtendedLexicalHandler_MethodInfo_
};

$Object* allocate$ExtendedLexicalHandler($Class* clazz) {
	return $of($alloc(ExtendedLexicalHandler));
}

$Class* ExtendedLexicalHandler::load$($String* name, bool initialize) {
	$loadClass(ExtendedLexicalHandler, name, initialize, &_ExtendedLexicalHandler_ClassInfo_, allocate$ExtendedLexicalHandler);
	return class$;
}

$Class* ExtendedLexicalHandler::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com