#include <com/sun/org/apache/xerces/internal/xs/XSFacet.h>

#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSFacet_MethodInfo_[] = {
	{"getActualFacetValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFacetKind", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getFixed", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getIntFacetValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLexicalFacetValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSFacet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSFacet",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	_XSFacet_MethodInfo_
};

$Object* allocate$XSFacet($Class* clazz) {
	return $of($alloc(XSFacet));
}

$Class* XSFacet::load$($String* name, bool initialize) {
	$loadClass(XSFacet, name, initialize, &_XSFacet_ClassInfo_, allocate$XSFacet);
	return class$;
}

$Class* XSFacet::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com