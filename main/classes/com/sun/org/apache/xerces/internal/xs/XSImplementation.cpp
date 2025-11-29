#include <com/sun/org/apache/xerces/internal/xs/XSImplementation.h>

#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSLoader.h>
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

$MethodInfo _XSImplementation_MethodInfo_[] = {
	{"createXSLoader", "(Lcom/sun/org/apache/xerces/internal/xs/StringList;)Lcom/sun/org/apache/xerces/internal/xs/XSLoader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException"},
	{"getRecognizedVersions", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSImplementation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSImplementation",
	nullptr,
	nullptr,
	nullptr,
	_XSImplementation_MethodInfo_
};

$Object* allocate$XSImplementation($Class* clazz) {
	return $of($alloc(XSImplementation));
}

$Class* XSImplementation::load$($String* name, bool initialize) {
	$loadClass(XSImplementation, name, initialize, &_XSImplementation_ClassInfo_, allocate$XSImplementation);
	return class$;
}

$Class* XSImplementation::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com