#include <com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>

#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

#undef VALIDATION_FULL
#undef VALIDATION_NONE
#undef VALIDATION_PARTIAL
#undef VALIDITY_INVALID
#undef VALIDITY_NOTKNOWN
#undef VALIDITY_VALID

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$CompoundAttribute _ItemPSVI_MethodAnnotations_getActualNormalizedValue1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ItemPSVI_MethodAnnotations_getActualNormalizedValueType2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ItemPSVI_MethodAnnotations_getItemValueTypes6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ItemPSVI_MethodAnnotations_getSchemaNormalizedValue9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ItemPSVI_FieldInfo_[] = {
	{"VALIDITY_NOTKNOWN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDITY_NOTKNOWN)},
	{"VALIDITY_INVALID", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDITY_INVALID)},
	{"VALIDITY_VALID", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDITY_VALID)},
	{"VALIDATION_NONE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDATION_NONE)},
	{"VALIDATION_PARTIAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDATION_PARTIAL)},
	{"VALIDATION_FULL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDATION_FULL)},
	{}
};

$MethodInfo _ItemPSVI_MethodInfo_[] = {
	{"constant", "()Lcom/sun/org/apache/xerces/internal/xs/ItemPSVI;", nullptr, $PUBLIC | $ABSTRACT},
	{"getActualNormalizedValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _ItemPSVI_MethodAnnotations_getActualNormalizedValue1},
	{"getActualNormalizedValueType", "()S", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _ItemPSVI_MethodAnnotations_getActualNormalizedValueType2},
	{"getErrorCodes", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getErrorMessages", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIsSchemaSpecified", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _ItemPSVI_MethodAnnotations_getItemValueTypes6},
	{"getMemberTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSchemaDefault", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSchemaNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _ItemPSVI_MethodAnnotations_getSchemaNormalizedValue9},
	{"getSchemaValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValidationAttempted", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getValidationContext", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValidity", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"isConstant", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ItemPSVI_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.ItemPSVI",
	nullptr,
	nullptr,
	_ItemPSVI_FieldInfo_,
	_ItemPSVI_MethodInfo_
};

$Object* allocate$ItemPSVI($Class* clazz) {
	return $of($alloc(ItemPSVI));
}

$Class* ItemPSVI::load$($String* name, bool initialize) {
	$loadClass(ItemPSVI, name, initialize, &_ItemPSVI_ClassInfo_, allocate$ItemPSVI);
	return class$;
}

$Class* ItemPSVI::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com