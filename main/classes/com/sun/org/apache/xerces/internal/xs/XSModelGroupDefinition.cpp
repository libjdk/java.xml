#include <com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>

#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
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

$MethodInfo _XSModelGroupDefinition_MethodInfo_[] = {
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getModelGroup", "()Lcom/sun/org/apache/xerces/internal/xs/XSModelGroup;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSModelGroupDefinition_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSModelGroupDefinition",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	_XSModelGroupDefinition_MethodInfo_
};

$Object* allocate$XSModelGroupDefinition($Class* clazz) {
	return $of($alloc(XSModelGroupDefinition));
}

$Class* XSModelGroupDefinition::load$($String* name, bool initialize) {
	$loadClass(XSModelGroupDefinition, name, initialize, &_XSModelGroupDefinition_ClassInfo_, allocate$XSModelGroupDefinition);
	return class$;
}

$Class* XSModelGroupDefinition::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com