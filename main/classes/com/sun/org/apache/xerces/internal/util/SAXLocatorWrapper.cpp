#include <com/sun/org/apache/xerces/internal/util/SAXLocatorWrapper.h>

#include <org/xml/sax/Locator.h>
#include <org/xml/sax/ext/Locator2.h>
#include <jcpp.h>

using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locator = ::org::xml::sax::Locator;
using $Locator2 = ::org::xml::sax::ext::Locator2;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _SAXLocatorWrapper_FieldInfo_[] = {
	{"fLocator", "Lorg/xml/sax/Locator;", nullptr, $PRIVATE, $field(SAXLocatorWrapper, fLocator)},
	{"fLocator2", "Lorg/xml/sax/ext/Locator2;", nullptr, $PRIVATE, $field(SAXLocatorWrapper, fLocator2)},
	{}
};

$MethodInfo _SAXLocatorWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SAXLocatorWrapper::*)()>(&SAXLocatorWrapper::init$))},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocator", "()Lorg/xml/sax/Locator;", nullptr, $PUBLIC, $method(static_cast<$Locator*(SAXLocatorWrapper::*)()>(&SAXLocatorWrapper::getLocator))},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXLocatorWrapper::*)($Locator*)>(&SAXLocatorWrapper::setLocator))},
	{}
};

$ClassInfo _SAXLocatorWrapper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.SAXLocatorWrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	_SAXLocatorWrapper_FieldInfo_,
	_SAXLocatorWrapper_MethodInfo_
};

$Object* allocate$SAXLocatorWrapper($Class* clazz) {
	return $of($alloc(SAXLocatorWrapper));
}

void SAXLocatorWrapper::init$() {
	$set(this, fLocator, nullptr);
	$set(this, fLocator2, nullptr);
}

void SAXLocatorWrapper::setLocator($Locator* locator) {
	$set(this, fLocator, locator);
	if ($instanceOf($Locator2, locator) || locator == nullptr) {
		$set(this, fLocator2, $cast($Locator2, locator));
	}
}

$Locator* SAXLocatorWrapper::getLocator() {
	return this->fLocator;
}

$String* SAXLocatorWrapper::getPublicId() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getPublicId();
	}
	return nullptr;
}

$String* SAXLocatorWrapper::getLiteralSystemId() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getSystemId();
	}
	return nullptr;
}

$String* SAXLocatorWrapper::getBaseSystemId() {
	return nullptr;
}

$String* SAXLocatorWrapper::getExpandedSystemId() {
	return getLiteralSystemId();
}

int32_t SAXLocatorWrapper::getLineNumber() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getLineNumber();
	}
	return -1;
}

int32_t SAXLocatorWrapper::getColumnNumber() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getColumnNumber();
	}
	return -1;
}

int32_t SAXLocatorWrapper::getCharacterOffset() {
	return -1;
}

$String* SAXLocatorWrapper::getEncoding() {
	if (this->fLocator2 != nullptr) {
		return $nc(this->fLocator2)->getEncoding();
	}
	return nullptr;
}

$String* SAXLocatorWrapper::getXMLVersion() {
	if (this->fLocator2 != nullptr) {
		return $nc(this->fLocator2)->getXMLVersion();
	}
	return nullptr;
}

SAXLocatorWrapper::SAXLocatorWrapper() {
}

$Class* SAXLocatorWrapper::load$($String* name, bool initialize) {
	$loadClass(SAXLocatorWrapper, name, initialize, &_SAXLocatorWrapper_ClassInfo_, allocate$SAXLocatorWrapper);
	return class$;
}

$Class* SAXLocatorWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com