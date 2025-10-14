#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>

#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ItemPSVI = ::com::sun::org::apache::xerces::internal::xs::ItemPSVI;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _AttributePSVI_MethodInfo_[] = {
	{"getAttributeDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AttributePSVI_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.AttributePSVI",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.ItemPSVI",
	nullptr,
	_AttributePSVI_MethodInfo_
};

$Object* allocate$AttributePSVI($Class* clazz) {
	return $of($alloc(AttributePSVI));
}

$Class* AttributePSVI::load$($String* name, bool initialize) {
	$loadClass(AttributePSVI, name, initialize, &_AttributePSVI_ClassInfo_, allocate$AttributePSVI);
	return class$;
}

$Class* AttributePSVI::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com