#include <com/sun/org/apache/xml/internal/serializer/DOM3Serializer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSSerializerFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $Node = ::org::w3c::dom::Node;
using $LSSerializerFilter = ::org::w3c::dom::ls::LSSerializerFilter;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _DOM3Serializer_MethodInfo_[] = {
	{"getErrorHandler", "()Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeFilter", "()Lorg/w3c/dom/ls/LSSerializerFilter;", nullptr, $PUBLIC | $ABSTRACT},
	{"serializeDOM3", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setErrorHandler", "(Lorg/w3c/dom/DOMErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setNewLine", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setNodeFilter", "(Lorg/w3c/dom/ls/LSSerializerFilter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DOM3Serializer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.DOM3Serializer",
	nullptr,
	nullptr,
	nullptr,
	_DOM3Serializer_MethodInfo_
};

$Object* allocate$DOM3Serializer($Class* clazz) {
	return $of($alloc(DOM3Serializer));
}

$Class* DOM3Serializer::load$($String* name, bool initialize) {
	$loadClass(DOM3Serializer, name, initialize, &_DOM3Serializer_ClassInfo_, allocate$DOM3Serializer);
	return class$;
}

$Class* DOM3Serializer::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com