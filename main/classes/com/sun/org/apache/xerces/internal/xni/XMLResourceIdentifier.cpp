#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>

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

$MethodInfo _XMLResourceIdentifier_MethodInfo_[] = {
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setExpandedSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLiteralSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLResourceIdentifier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier",
	nullptr,
	nullptr,
	nullptr,
	_XMLResourceIdentifier_MethodInfo_
};

$Object* allocate$XMLResourceIdentifier($Class* clazz) {
	return $of($alloc(XMLResourceIdentifier));
}

$Class* XMLResourceIdentifier::load$($String* name, bool initialize) {
	$loadClass(XMLResourceIdentifier, name, initialize, &_XMLResourceIdentifier_ClassInfo_, allocate$XMLResourceIdentifier);
	return class$;
}

$Class* XMLResourceIdentifier::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com