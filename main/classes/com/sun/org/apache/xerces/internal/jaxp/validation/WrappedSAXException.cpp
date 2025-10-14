#include <com/sun/org/apache/xerces/internal/jaxp/validation/WrappedSAXException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _WrappedSAXException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WrappedSAXException, serialVersionUID)},
	{"exception", "Lorg/xml/sax/SAXException;", nullptr, $PUBLIC | $FINAL, $field(WrappedSAXException, exception)},
	{}
};

$MethodInfo _WrappedSAXException_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/SAXException;)V", nullptr, 0, $method(static_cast<void(WrappedSAXException::*)($SAXException*)>(&WrappedSAXException::init$))},
	{}
};

$ClassInfo _WrappedSAXException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.WrappedSAXException",
	"java.lang.RuntimeException",
	nullptr,
	_WrappedSAXException_FieldInfo_,
	_WrappedSAXException_MethodInfo_
};

$Object* allocate$WrappedSAXException($Class* clazz) {
	return $of($alloc(WrappedSAXException));
}

void WrappedSAXException::init$($SAXException* e) {
	$RuntimeException::init$();
	$set(this, exception, e);
}

WrappedSAXException::WrappedSAXException() {
}

WrappedSAXException::WrappedSAXException(const WrappedSAXException& e) {
}

WrappedSAXException WrappedSAXException::wrapper$() {
	$pendingException(this);
	return *this;
}

void WrappedSAXException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* WrappedSAXException::load$($String* name, bool initialize) {
	$loadClass(WrappedSAXException, name, initialize, &_WrappedSAXException_ClassInfo_, allocate$WrappedSAXException);
	return class$;
}

$Class* WrappedSAXException::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com