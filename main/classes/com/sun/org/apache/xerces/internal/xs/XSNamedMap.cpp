#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>

#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSNamedMap_MethodInfo_[] = {
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"item", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC | $ABSTRACT},
	{"itemByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSNamedMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSNamedMap",
	nullptr,
	"java.util.Map",
	nullptr,
	_XSNamedMap_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;"
};

$Object* allocate$XSNamedMap($Class* clazz) {
	return $of($alloc(XSNamedMap));
}

$Class* XSNamedMap::load$($String* name, bool initialize) {
	$loadClass(XSNamedMap, name, initialize, &_XSNamedMap_ClassInfo_, allocate$XSNamedMap);
	return class$;
}

$Class* XSNamedMap::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com