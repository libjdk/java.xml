#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>

#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <jcpp.h>

#undef CONTENTTYPE_ELEMENT
#undef CONTENTTYPE_EMPTY
#undef CONTENTTYPE_MIXED
#undef CONTENTTYPE_SIMPLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$FieldInfo _XSComplexTypeDefinition_FieldInfo_[] = {
	{"CONTENTTYPE_EMPTY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSComplexTypeDefinition, CONTENTTYPE_EMPTY)},
	{"CONTENTTYPE_SIMPLE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSComplexTypeDefinition, CONTENTTYPE_SIMPLE)},
	{"CONTENTTYPE_ELEMENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSComplexTypeDefinition, CONTENTTYPE_ELEMENT)},
	{"CONTENTTYPE_MIXED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSComplexTypeDefinition, CONTENTTYPE_MIXED)},
	{}
};

$MethodInfo _XSComplexTypeDefinition_MethodInfo_[] = {
	{"getAbstract", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeUses", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeWildcard", "()Lcom/sun/org/apache/xerces/internal/xs/XSWildcard;", nullptr, $PUBLIC | $ABSTRACT},
	{"getContentType", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getDerivationMethod", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getParticle", "()Lcom/sun/org/apache/xerces/internal/xs/XSParticle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProhibitedSubstitutions", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getSimpleType", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"isProhibitedSubstitution", "(S)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSComplexTypeDefinition_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSComplexTypeDefinition",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSTypeDefinition",
	_XSComplexTypeDefinition_FieldInfo_,
	_XSComplexTypeDefinition_MethodInfo_
};

$Object* allocate$XSComplexTypeDefinition($Class* clazz) {
	return $of($alloc(XSComplexTypeDefinition));
}

$Class* XSComplexTypeDefinition::load$($String* name, bool initialize) {
	$loadClass(XSComplexTypeDefinition, name, initialize, &_XSComplexTypeDefinition_ClassInfo_, allocate$XSComplexTypeDefinition);
	return class$;
}

$Class* XSComplexTypeDefinition::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com