#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>

#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSValue_MethodInfo_[] = {
	{"getActualValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getActualValueType", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getListValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemberTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemberTypeDefinitions", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSValue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSValue",
	nullptr,
	nullptr,
	nullptr,
	_XSValue_MethodInfo_
};

$Object* allocate$XSValue($Class* clazz) {
	return $of($alloc(XSValue));
}

$Class* XSValue::load$($String* name, bool initialize) {
	$loadClass(XSValue, name, initialize, &_XSValue_ClassInfo_, allocate$XSValue);
	return class$;
}

$Class* XSValue::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com