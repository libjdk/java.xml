#include <com/sun/org/apache/xerces/internal/util/XMLLocatorWrapper.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLLocatorWrapper_FieldInfo_[] = {
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PRIVATE, $field(XMLLocatorWrapper, fLocator)},
	{}
};

$MethodInfo _XMLLocatorWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLLocatorWrapper::*)()>(&XMLLocatorWrapper::init$))},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocator", "()Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PUBLIC, $method(static_cast<$XMLLocator*(XMLLocatorWrapper::*)()>(&XMLLocatorWrapper::getLocator))},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setLocator", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLLocatorWrapper::*)($XMLLocator*)>(&XMLLocatorWrapper::setLocator))},
	{}
};

$ClassInfo _XMLLocatorWrapper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLLocatorWrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	_XMLLocatorWrapper_FieldInfo_,
	_XMLLocatorWrapper_MethodInfo_
};

$Object* allocate$XMLLocatorWrapper($Class* clazz) {
	return $of($alloc(XMLLocatorWrapper));
}

void XMLLocatorWrapper::init$() {
	$set(this, fLocator, nullptr);
}

void XMLLocatorWrapper::setLocator($XMLLocator* locator) {
	$set(this, fLocator, locator);
}

$XMLLocator* XMLLocatorWrapper::getLocator() {
	return this->fLocator;
}

$String* XMLLocatorWrapper::getPublicId() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getPublicId();
	}
	return nullptr;
}

$String* XMLLocatorWrapper::getLiteralSystemId() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getLiteralSystemId();
	}
	return nullptr;
}

$String* XMLLocatorWrapper::getBaseSystemId() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getBaseSystemId();
	}
	return nullptr;
}

$String* XMLLocatorWrapper::getExpandedSystemId() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getExpandedSystemId();
	}
	return nullptr;
}

int32_t XMLLocatorWrapper::getLineNumber() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getLineNumber();
	}
	return -1;
}

int32_t XMLLocatorWrapper::getColumnNumber() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getColumnNumber();
	}
	return -1;
}

int32_t XMLLocatorWrapper::getCharacterOffset() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getCharacterOffset();
	}
	return -1;
}

$String* XMLLocatorWrapper::getEncoding() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getEncoding();
	}
	return nullptr;
}

$String* XMLLocatorWrapper::getXMLVersion() {
	if (this->fLocator != nullptr) {
		return $nc(this->fLocator)->getXMLVersion();
	}
	return nullptr;
}

XMLLocatorWrapper::XMLLocatorWrapper() {
}

$Class* XMLLocatorWrapper::load$($String* name, bool initialize) {
	$loadClass(XMLLocatorWrapper, name, initialize, &_XMLLocatorWrapper_ClassInfo_, allocate$XMLLocatorWrapper);
	return class$;
}

$Class* XMLLocatorWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com