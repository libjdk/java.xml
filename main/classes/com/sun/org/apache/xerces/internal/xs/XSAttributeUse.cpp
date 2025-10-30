#include <com/sun/org/apache/xerces/internal/xs/XSAttributeUse.h>

#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$CompoundAttribute _XSAttributeUse_MethodAnnotations_getActualVC0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeUse_MethodAnnotations_getActualVCType1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeUse_MethodAnnotations_getConstraintValue5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeUse_MethodAnnotations_getItemValueTypes6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _XSAttributeUse_MethodInfo_[] = {
	{"getActualVC", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _XSAttributeUse_MethodAnnotations_getActualVC0},
	{"getActualVCType", "()S", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _XSAttributeUse_MethodAnnotations_getActualVCType1},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttrDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getConstraintType", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getConstraintValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _XSAttributeUse_MethodAnnotations_getConstraintValue5},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _XSAttributeUse_MethodAnnotations_getItemValueTypes6},
	{"getRequired", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getValueConstraintValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSAttributeUse_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSAttributeUse",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	_XSAttributeUse_MethodInfo_
};

$Object* allocate$XSAttributeUse($Class* clazz) {
	return $of($alloc(XSAttributeUse));
}

$Class* XSAttributeUse::load$($String* name, bool initialize) {
	$loadClass(XSAttributeUse, name, initialize, &_XSAttributeUse_ClassInfo_, allocate$XSAttributeUse);
	return class$;
}

$Class* XSAttributeUse::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com