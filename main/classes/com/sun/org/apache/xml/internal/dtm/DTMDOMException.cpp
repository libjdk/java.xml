#include <com/sun/org/apache/xml/internal/dtm/DTMDOMException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/DOMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$FieldInfo _DTMDOMException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DTMDOMException, serialVersionUID)},
	{}
};

$MethodInfo _DTMDOMException_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DTMDOMException::*)(int16_t,$String*)>(&DTMDOMException::init$))},
	{"<init>", "(S)V", nullptr, $PUBLIC, $method(static_cast<void(DTMDOMException::*)(int16_t)>(&DTMDOMException::init$))},
	{}
};

$ClassInfo _DTMDOMException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.DTMDOMException",
	"org.w3c.dom.DOMException",
	nullptr,
	_DTMDOMException_FieldInfo_,
	_DTMDOMException_MethodInfo_
};

$Object* allocate$DTMDOMException($Class* clazz) {
	return $of($alloc(DTMDOMException));
}

void DTMDOMException::init$(int16_t code, $String* message) {
	$DOMException::init$(code, message);
}

void DTMDOMException::init$(int16_t code) {
	$DOMException::init$(code, ""_s);
}

DTMDOMException::DTMDOMException() {
}

DTMDOMException::DTMDOMException(const DTMDOMException& e) {
}

DTMDOMException DTMDOMException::wrapper$() {
	$pendingException(this);
	return *this;
}

void DTMDOMException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* DTMDOMException::load$($String* name, bool initialize) {
	$loadClass(DTMDOMException, name, initialize, &_DTMDOMException_ClassInfo_, allocate$DTMDOMException);
	return class$;
}

$Class* DTMDOMException::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com