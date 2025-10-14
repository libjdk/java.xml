#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$MethodInfo _XMLEntityResolver_MethodInfo_[] = {
	{"resolveEntity", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{}
};

$ClassInfo _XMLEntityResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLEntityResolver",
	nullptr,
	nullptr,
	nullptr,
	_XMLEntityResolver_MethodInfo_
};

$Object* allocate$XMLEntityResolver($Class* clazz) {
	return $of($alloc(XMLEntityResolver));
}

$Class* XMLEntityResolver::load$($String* name, bool initialize) {
	$loadClass(XMLEntityResolver, name, initialize, &_XMLEntityResolver_ClassInfo_, allocate$XMLEntityResolver);
	return class$;
}

$Class* XMLEntityResolver::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com