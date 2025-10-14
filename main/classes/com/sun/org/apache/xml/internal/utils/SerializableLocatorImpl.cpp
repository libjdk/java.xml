#include <com/sun/org/apache/xml/internal/utils/SerializableLocatorImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/Locator.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locator = ::org::xml::sax::Locator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _SerializableLocatorImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SerializableLocatorImpl, serialVersionUID)},
	{"publicId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SerializableLocatorImpl, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SerializableLocatorImpl, systemId)},
	{"lineNumber", "I", nullptr, $PRIVATE, $field(SerializableLocatorImpl, lineNumber)},
	{"columnNumber", "I", nullptr, $PRIVATE, $field(SerializableLocatorImpl, columnNumber)},
	{}
};

$MethodInfo _SerializableLocatorImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializableLocatorImpl::*)()>(&SerializableLocatorImpl::init$))},
	{"<init>", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $method(static_cast<void(SerializableLocatorImpl::*)($Locator*)>(&SerializableLocatorImpl::init$))},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setColumnNumber", "(I)V", nullptr, $PUBLIC},
	{"setLineNumber", "(I)V", nullptr, $PUBLIC},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializableLocatorImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.SerializableLocatorImpl",
	"java.lang.Object",
	"org.xml.sax.Locator,java.io.Serializable",
	_SerializableLocatorImpl_FieldInfo_,
	_SerializableLocatorImpl_MethodInfo_
};

$Object* allocate$SerializableLocatorImpl($Class* clazz) {
	return $of($alloc(SerializableLocatorImpl));
}

int32_t SerializableLocatorImpl::hashCode() {
	 return this->$Locator::hashCode();
}

bool SerializableLocatorImpl::equals(Object$* arg0) {
	 return this->$Locator::equals(arg0);
}

$Object* SerializableLocatorImpl::clone() {
	 return this->$Locator::clone();
}

$String* SerializableLocatorImpl::toString() {
	 return this->$Locator::toString();
}

void SerializableLocatorImpl::finalize() {
	this->$Locator::finalize();
}

void SerializableLocatorImpl::init$() {
}

void SerializableLocatorImpl::init$($Locator* locator) {
	setPublicId($($nc(locator)->getPublicId()));
	setSystemId($($nc(locator)->getSystemId()));
	setLineNumber($nc(locator)->getLineNumber());
	setColumnNumber($nc(locator)->getColumnNumber());
}

$String* SerializableLocatorImpl::getPublicId() {
	return this->publicId;
}

$String* SerializableLocatorImpl::getSystemId() {
	return this->systemId;
}

int32_t SerializableLocatorImpl::getLineNumber() {
	return this->lineNumber;
}

int32_t SerializableLocatorImpl::getColumnNumber() {
	return this->columnNumber;
}

void SerializableLocatorImpl::setPublicId($String* publicId) {
	$set(this, publicId, publicId);
}

void SerializableLocatorImpl::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

void SerializableLocatorImpl::setLineNumber(int32_t lineNumber) {
	this->lineNumber = lineNumber;
}

void SerializableLocatorImpl::setColumnNumber(int32_t columnNumber) {
	this->columnNumber = columnNumber;
}

SerializableLocatorImpl::SerializableLocatorImpl() {
}

$Class* SerializableLocatorImpl::load$($String* name, bool initialize) {
	$loadClass(SerializableLocatorImpl, name, initialize, &_SerializableLocatorImpl_ClassInfo_, allocate$SerializableLocatorImpl);
	return class$;
}

$Class* SerializableLocatorImpl::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com