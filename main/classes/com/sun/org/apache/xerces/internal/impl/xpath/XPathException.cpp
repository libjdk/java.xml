#include <com/sun/org/apache/xerces/internal/impl/xpath/XPathException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {

$FieldInfo _XPathException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XPathException, serialVersionUID)},
	{"fKey", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XPathException, fKey)},
	{}
};

$MethodInfo _XPathException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPathException::*)()>(&XPathException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathException::*)($String*)>(&XPathException::init$))},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPathException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPathException",
	"java.lang.Exception",
	nullptr,
	_XPathException_FieldInfo_,
	_XPathException_MethodInfo_
};

$Object* allocate$XPathException($Class* clazz) {
	return $of($alloc(XPathException));
}

void XPathException::init$() {
	$Exception::init$();
	$set(this, fKey, "c-general-xpath"_s);
}

void XPathException::init$($String* key) {
	$Exception::init$();
	$set(this, fKey, key);
}

$String* XPathException::getKey() {
	return this->fKey;
}

XPathException::XPathException() {
}

XPathException::XPathException(const XPathException& e) {
}

XPathException XPathException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XPathException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XPathException::load$($String* name, bool initialize) {
	$loadClass(XPathException, name, initialize, &_XPathException_ClassInfo_, allocate$XPathException);
	return class$;
}

$Class* XPathException::class$ = nullptr;

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com