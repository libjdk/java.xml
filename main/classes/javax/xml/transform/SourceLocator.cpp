#include <javax/xml/transform/SourceLocator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace transform {

$MethodInfo _SourceLocator_MethodInfo_[] = {
	{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SourceLocator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.SourceLocator",
	nullptr,
	nullptr,
	nullptr,
	_SourceLocator_MethodInfo_
};

$Object* allocate$SourceLocator($Class* clazz) {
	return $of($alloc(SourceLocator));
}

$Class* SourceLocator::load$($String* name, bool initialize) {
	$loadClass(SourceLocator, name, initialize, &_SourceLocator_ClassInfo_, allocate$SourceLocator);
	return class$;
}

$Class* SourceLocator::class$ = nullptr;

		} // transform
	} // xml
} // javax