#include <com/sun/org/apache/xerces/internal/impl/XMLEntityDescription.h>

#include <jcpp.h>

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$MethodInfo _XMLEntityDescription_MethodInfo_[] = {
	{"getEntityName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setEntityName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLEntityDescription_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityDescription",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier",
	nullptr,
	_XMLEntityDescription_MethodInfo_
};

$Object* allocate$XMLEntityDescription($Class* clazz) {
	return $of($alloc(XMLEntityDescription));
}

$Class* XMLEntityDescription::load$($String* name, bool initialize) {
	$loadClass(XMLEntityDescription, name, initialize, &_XMLEntityDescription_ClassInfo_, allocate$XMLEntityDescription);
	return class$;
}

$Class* XMLEntityDescription::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com