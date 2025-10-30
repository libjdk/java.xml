#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>

#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSNamedMap = ::com::sun::org::apache::xerces::internal::xs::XSNamedMap;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
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

$CompoundAttribute _XSElementDeclaration_MethodAnnotations_getActualVC1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSElementDeclaration_MethodAnnotations_getActualVCType2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSElementDeclaration_MethodAnnotations_getConstraintValue6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSElementDeclaration_MethodAnnotations_getItemValueTypes10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _XSElementDeclaration_MethodInfo_[] = {
	{"getAbstract", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getActualVC", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _XSElementDeclaration_MethodAnnotations_getActualVC1},
	{"getActualVCType", "()S", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _XSElementDeclaration_MethodAnnotations_getActualVCType2},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getConstraintType", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getConstraintValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _XSElementDeclaration_MethodAnnotations_getConstraintValue6},
	{"getDisallowedSubstitutions", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingCTDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIdentityConstraints", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _XSElementDeclaration_MethodAnnotations_getItemValueTypes10},
	{"getNillable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getScope", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubstitutionGroupAffiliation", "()Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubstitutionGroupExclusions", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValueConstraintValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDisallowedSubstitution", "(S)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSubstitutionGroupExclusion", "(S)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSElementDeclaration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSElementDeclaration",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSTerm",
	nullptr,
	_XSElementDeclaration_MethodInfo_
};

$Object* allocate$XSElementDeclaration($Class* clazz) {
	return $of($alloc(XSElementDeclaration));
}

$Class* XSElementDeclaration::load$($String* name, bool initialize) {
	$loadClass(XSElementDeclaration, name, initialize, &_XSElementDeclaration_ClassInfo_, allocate$XSElementDeclaration);
	return class$;
}

$Class* XSElementDeclaration::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com