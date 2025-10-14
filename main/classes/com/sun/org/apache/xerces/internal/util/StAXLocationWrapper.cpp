#include <com/sun/org/apache/xerces/internal/util/StAXLocationWrapper.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/stream/Location.h>
#include <jcpp.h>

using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Location = ::javax::xml::stream::Location;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _StAXLocationWrapper_FieldInfo_[] = {
	{"fLocation", "Ljavax/xml/stream/Location;", nullptr, $PRIVATE, $field(StAXLocationWrapper, fLocation)},
	{}
};

$MethodInfo _StAXLocationWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StAXLocationWrapper::*)()>(&StAXLocationWrapper::init$))},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC, $method(static_cast<$Location*(StAXLocationWrapper::*)()>(&StAXLocationWrapper::getLocation))},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setLocation", "(Ljavax/xml/stream/Location;)V", nullptr, $PUBLIC, $method(static_cast<void(StAXLocationWrapper::*)($Location*)>(&StAXLocationWrapper::setLocation))},
	{}
};

$ClassInfo _StAXLocationWrapper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.StAXLocationWrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	_StAXLocationWrapper_FieldInfo_,
	_StAXLocationWrapper_MethodInfo_
};

$Object* allocate$StAXLocationWrapper($Class* clazz) {
	return $of($alloc(StAXLocationWrapper));
}

void StAXLocationWrapper::init$() {
	$set(this, fLocation, nullptr);
}

void StAXLocationWrapper::setLocation($Location* location) {
	$set(this, fLocation, location);
}

$Location* StAXLocationWrapper::getLocation() {
	return this->fLocation;
}

$String* StAXLocationWrapper::getPublicId() {
	if (this->fLocation != nullptr) {
		return $nc(this->fLocation)->getPublicId();
	}
	return nullptr;
}

$String* StAXLocationWrapper::getLiteralSystemId() {
	if (this->fLocation != nullptr) {
		return $nc(this->fLocation)->getSystemId();
	}
	return nullptr;
}

$String* StAXLocationWrapper::getBaseSystemId() {
	return nullptr;
}

$String* StAXLocationWrapper::getExpandedSystemId() {
	return getLiteralSystemId();
}

int32_t StAXLocationWrapper::getLineNumber() {
	if (this->fLocation != nullptr) {
		return $nc(this->fLocation)->getLineNumber();
	}
	return -1;
}

int32_t StAXLocationWrapper::getColumnNumber() {
	if (this->fLocation != nullptr) {
		return $nc(this->fLocation)->getColumnNumber();
	}
	return -1;
}

int32_t StAXLocationWrapper::getCharacterOffset() {
	if (this->fLocation != nullptr) {
		return $nc(this->fLocation)->getCharacterOffset();
	}
	return -1;
}

$String* StAXLocationWrapper::getEncoding() {
	return nullptr;
}

$String* StAXLocationWrapper::getXMLVersion() {
	return nullptr;
}

StAXLocationWrapper::StAXLocationWrapper() {
}

$Class* StAXLocationWrapper::load$($String* name, bool initialize) {
	$loadClass(StAXLocationWrapper, name, initialize, &_StAXLocationWrapper_ClassInfo_, allocate$StAXLocationWrapper);
	return class$;
}

$Class* StAXLocationWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com