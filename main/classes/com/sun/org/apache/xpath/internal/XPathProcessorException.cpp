#include <com/sun/org/apache/xpath/internal/XPathProcessorException.h>

#include <com/sun/org/apache/xpath/internal/XPathException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XPathException = ::com::sun::org::apache::xpath::internal::XPathException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _XPathProcessorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XPathProcessorException, serialVersionUID)},
	{}
};

$MethodInfo _XPathProcessorException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathProcessorException::*)($String*)>(&XPathProcessorException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathProcessorException::*)($String*,$Exception*)>(&XPathProcessorException::init$))},
	{}
};

$ClassInfo _XPathProcessorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.XPathProcessorException",
	"com.sun.org.apache.xpath.internal.XPathException",
	nullptr,
	_XPathProcessorException_FieldInfo_,
	_XPathProcessorException_MethodInfo_
};

$Object* allocate$XPathProcessorException($Class* clazz) {
	return $of($alloc(XPathProcessorException));
}

void XPathProcessorException::init$($String* message) {
	$XPathException::init$(message);
}

void XPathProcessorException::init$($String* message, $Exception* e) {
	$XPathException::init$(message, e);
}

XPathProcessorException::XPathProcessorException() {
}

XPathProcessorException::XPathProcessorException(const XPathProcessorException& e) {
}

XPathProcessorException XPathProcessorException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XPathProcessorException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XPathProcessorException::load$($String* name, bool initialize) {
	$loadClass(XPathProcessorException, name, initialize, &_XPathProcessorException_ClassInfo_, allocate$XPathProcessorException);
	return class$;
}

$Class* XPathProcessorException::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com