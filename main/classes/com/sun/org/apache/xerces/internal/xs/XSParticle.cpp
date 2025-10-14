#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>

#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSParticle_MethodInfo_[] = {
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaxOccurs", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaxOccursUnbounded", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinOccurs", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTerm", "()Lcom/sun/org/apache/xerces/internal/xs/XSTerm;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSParticle_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSParticle",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	_XSParticle_MethodInfo_
};

$Object* allocate$XSParticle($Class* clazz) {
	return $of($alloc(XSParticle));
}

$Class* XSParticle::load$($String* name, bool initialize) {
	$loadClass(XSParticle, name, initialize, &_XSParticle_ClassInfo_, allocate$XSParticle);
	return class$;
}

$Class* XSParticle::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com