#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>

#include <jcpp.h>

#undef COMPLEX_TYPE
#undef SIMPLE_TYPE

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

$FieldInfo _XSTypeDefinition_FieldInfo_[] = {
	{"COMPLEX_TYPE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSTypeDefinition, COMPLEX_TYPE)},
	{"SIMPLE_TYPE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSTypeDefinition, SIMPLE_TYPE)},
	{}
};

$MethodInfo _XSTypeDefinition_MethodInfo_[] = {
	{"derivedFrom", "(Ljava/lang/String;Ljava/lang/String;S)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"derivedFromType", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnonymous", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getBaseType", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFinal", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeCategory", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"isFinal", "(S)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSTypeDefinition_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSTypeDefinition",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	_XSTypeDefinition_FieldInfo_,
	_XSTypeDefinition_MethodInfo_
};

$Object* allocate$XSTypeDefinition($Class* clazz) {
	return $of($alloc(XSTypeDefinition));
}

$Class* XSTypeDefinition::load$($String* name, bool initialize) {
	$loadClass(XSTypeDefinition, name, initialize, &_XSTypeDefinition_ClassInfo_, allocate$XSTypeDefinition);
	return class$;
}

$Class* XSTypeDefinition::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com