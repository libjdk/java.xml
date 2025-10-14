#include <com/sun/org/apache/xml/internal/utils/SAXSourceLocator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/helpers/LocatorImpl.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Locator = ::org::xml::sax::Locator;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $LocatorImpl = ::org::xml::sax::helpers::LocatorImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _SAXSourceLocator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SAXSourceLocator, serialVersionUID)},
	{"m_locator", "Lorg/xml/sax/Locator;", nullptr, 0, $field(SAXSourceLocator, m_locator)},
	{}
};

$MethodInfo _SAXSourceLocator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SAXSourceLocator::*)()>(&SAXSourceLocator::init$))},
	{"<init>", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXSourceLocator::*)($Locator*)>(&SAXSourceLocator::init$))},
	{"<init>", "(Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXSourceLocator::*)($SourceLocator*)>(&SAXSourceLocator::init$))},
	{"<init>", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXSourceLocator::*)($SAXParseException*)>(&SAXSourceLocator::init$))},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SAXSourceLocator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.SAXSourceLocator",
	"org.xml.sax.helpers.LocatorImpl",
	"javax.xml.transform.SourceLocator,java.io.Serializable",
	_SAXSourceLocator_FieldInfo_,
	_SAXSourceLocator_MethodInfo_
};

$Object* allocate$SAXSourceLocator($Class* clazz) {
	return $of($alloc(SAXSourceLocator));
}

int32_t SAXSourceLocator::hashCode() {
	 return this->$LocatorImpl::hashCode();
}

bool SAXSourceLocator::equals(Object$* arg0) {
	 return this->$LocatorImpl::equals(arg0);
}

$Object* SAXSourceLocator::clone() {
	 return this->$LocatorImpl::clone();
}

$String* SAXSourceLocator::toString() {
	 return this->$LocatorImpl::toString();
}

void SAXSourceLocator::finalize() {
	this->$LocatorImpl::finalize();
}

void SAXSourceLocator::init$() {
	$LocatorImpl::init$();
}

void SAXSourceLocator::init$($Locator* locator) {
	$LocatorImpl::init$();
	$set(this, m_locator, locator);
	this->setColumnNumber($nc(locator)->getColumnNumber());
	this->setLineNumber($nc(locator)->getLineNumber());
	this->setPublicId($($nc(locator)->getPublicId()));
	this->setSystemId($($nc(locator)->getSystemId()));
}

void SAXSourceLocator::init$($SourceLocator* locator) {
	$LocatorImpl::init$();
	$set(this, m_locator, nullptr);
	this->setColumnNumber($nc(locator)->getColumnNumber());
	this->setLineNumber($nc(locator)->getLineNumber());
	this->setPublicId($($nc(locator)->getPublicId()));
	this->setSystemId($($nc(locator)->getSystemId()));
}

void SAXSourceLocator::init$($SAXParseException* spe) {
	$LocatorImpl::init$();
	this->setLineNumber($nc(spe)->getLineNumber());
	this->setColumnNumber($nc(spe)->getColumnNumber());
	this->setPublicId($($nc(spe)->getPublicId()));
	this->setSystemId($($nc(spe)->getSystemId()));
}

$String* SAXSourceLocator::getPublicId() {
	return (nullptr == this->m_locator) ? $LocatorImpl::getPublicId() : $nc(this->m_locator)->getPublicId();
}

$String* SAXSourceLocator::getSystemId() {
	return (nullptr == this->m_locator) ? $LocatorImpl::getSystemId() : $nc(this->m_locator)->getSystemId();
}

int32_t SAXSourceLocator::getLineNumber() {
	return (nullptr == this->m_locator) ? $LocatorImpl::getLineNumber() : $nc(this->m_locator)->getLineNumber();
}

int32_t SAXSourceLocator::getColumnNumber() {
	return (nullptr == this->m_locator) ? $LocatorImpl::getColumnNumber() : $nc(this->m_locator)->getColumnNumber();
}

SAXSourceLocator::SAXSourceLocator() {
}

$Class* SAXSourceLocator::load$($String* name, bool initialize) {
	$loadClass(SAXSourceLocator, name, initialize, &_SAXSourceLocator_ClassInfo_, allocate$SAXSourceLocator);
	return class$;
}

$Class* SAXSourceLocator::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com