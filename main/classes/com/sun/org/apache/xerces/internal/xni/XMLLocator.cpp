#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$MethodInfo _XMLLocator_MethodInfo_[] = {
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLLocator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	nullptr,
	nullptr,
	nullptr,
	_XMLLocator_MethodInfo_
};

$Object* allocate$XMLLocator($Class* clazz) {
	return $of($alloc(XMLLocator));
}

$Class* XMLLocator::load$($String* name, bool initialize) {
	$loadClass(XMLLocator, name, initialize, &_XMLLocator_ClassInfo_, allocate$XMLLocator);
	return class$;
}

$Class* XMLLocator::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com