#include <javax/xml/namespace/NamespaceContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace javax {
	namespace xml {
		namespace namespace$ {

$MethodInfo _NamespaceContext_MethodInfo_[] = {
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefixes", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NamespaceContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.namespace.NamespaceContext",
	nullptr,
	nullptr,
	nullptr,
	_NamespaceContext_MethodInfo_
};

$Object* allocate$NamespaceContext($Class* clazz) {
	return $of($alloc(NamespaceContext));
}

$Class* NamespaceContext::load$($String* name, bool initialize) {
	$loadClass(NamespaceContext, name, initialize, &_NamespaceContext_ClassInfo_, allocate$NamespaceContext);
	return class$;
}

$Class* NamespaceContext::class$ = nullptr;

		} // namespace$
	} // xml
} // javax