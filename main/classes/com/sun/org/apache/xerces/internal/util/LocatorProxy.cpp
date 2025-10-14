#include <com/sun/org/apache/xerces/internal/util/LocatorProxy.h>

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
using $Locator2 = ::org::xml::sax::ext::Locator2;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _LocatorProxy_FieldInfo_[] = {
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PRIVATE | $FINAL, $field(LocatorProxy, fLocator)},
	{}
};

$MethodInfo _LocatorProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;)V", nullptr, $PUBLIC, $method(static_cast<void(LocatorProxy::*)($XMLLocator*)>(&LocatorProxy::init$))},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LocatorProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.LocatorProxy",
	"java.lang.Object",
	"org.xml.sax.ext.Locator2",
	_LocatorProxy_FieldInfo_,
	_LocatorProxy_MethodInfo_
};

$Object* allocate$LocatorProxy($Class* clazz) {
	return $of($alloc(LocatorProxy));
}

void LocatorProxy::init$($XMLLocator* locator) {
	$set(this, fLocator, locator);
}

$String* LocatorProxy::getPublicId() {
	return $nc(this->fLocator)->getPublicId();
}

$String* LocatorProxy::getSystemId() {
	return $nc(this->fLocator)->getExpandedSystemId();
}

int32_t LocatorProxy::getLineNumber() {
	return $nc(this->fLocator)->getLineNumber();
}

int32_t LocatorProxy::getColumnNumber() {
	return $nc(this->fLocator)->getColumnNumber();
}

$String* LocatorProxy::getXMLVersion() {
	return $nc(this->fLocator)->getXMLVersion();
}

$String* LocatorProxy::getEncoding() {
	return $nc(this->fLocator)->getEncoding();
}

LocatorProxy::LocatorProxy() {
}

$Class* LocatorProxy::load$($String* name, bool initialize) {
	$loadClass(LocatorProxy, name, initialize, &_LocatorProxy_ClassInfo_, allocate$LocatorProxy);
	return class$;
}

$Class* LocatorProxy::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com