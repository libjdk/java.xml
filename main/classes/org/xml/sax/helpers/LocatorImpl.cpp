#include <org/xml/sax/helpers/LocatorImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/Locator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locator = ::org::xml::sax::Locator;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _LocatorImpl_FieldInfo_[] = {
	{"publicId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LocatorImpl, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LocatorImpl, systemId)},
	{"lineNumber", "I", nullptr, $PRIVATE, $field(LocatorImpl, lineNumber)},
	{"columnNumber", "I", nullptr, $PRIVATE, $field(LocatorImpl, columnNumber)},
	{}
};

$MethodInfo _LocatorImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocatorImpl::*)()>(&LocatorImpl::init$))},
	{"<init>", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $method(static_cast<void(LocatorImpl::*)($Locator*)>(&LocatorImpl::init$))},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setColumnNumber", "(I)V", nullptr, $PUBLIC},
	{"setLineNumber", "(I)V", nullptr, $PUBLIC},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LocatorImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.helpers.LocatorImpl",
	"java.lang.Object",
	"org.xml.sax.Locator",
	_LocatorImpl_FieldInfo_,
	_LocatorImpl_MethodInfo_
};

$Object* allocate$LocatorImpl($Class* clazz) {
	return $of($alloc(LocatorImpl));
}

void LocatorImpl::init$() {
}

void LocatorImpl::init$($Locator* locator) {
	$useLocalCurrentObjectStackCache();
	setPublicId($($nc(locator)->getPublicId()));
	setSystemId($($nc(locator)->getSystemId()));
	setLineNumber($nc(locator)->getLineNumber());
	setColumnNumber($nc(locator)->getColumnNumber());
}

$String* LocatorImpl::getPublicId() {
	return this->publicId;
}

$String* LocatorImpl::getSystemId() {
	return this->systemId;
}

int32_t LocatorImpl::getLineNumber() {
	return this->lineNumber;
}

int32_t LocatorImpl::getColumnNumber() {
	return this->columnNumber;
}

void LocatorImpl::setPublicId($String* publicId) {
	$set(this, publicId, publicId);
}

void LocatorImpl::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

void LocatorImpl::setLineNumber(int32_t lineNumber) {
	this->lineNumber = lineNumber;
}

void LocatorImpl::setColumnNumber(int32_t columnNumber) {
	this->columnNumber = columnNumber;
}

LocatorImpl::LocatorImpl() {
}

$Class* LocatorImpl::load$($String* name, bool initialize) {
	$loadClass(LocatorImpl, name, initialize, &_LocatorImpl_ClassInfo_, allocate$LocatorImpl);
	return class$;
}

$Class* LocatorImpl::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org