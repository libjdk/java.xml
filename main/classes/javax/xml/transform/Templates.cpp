#include <javax/xml/transform/Templates.h>

#include <java/util/Properties.h>
#include <javax/xml/transform/Transformer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace transform {

$MethodInfo _Templates_MethodInfo_[] = {
	{"getOutputProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC | $ABSTRACT},
	{"newTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerConfigurationException"},
	{}
};

$ClassInfo _Templates_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.Templates",
	nullptr,
	nullptr,
	nullptr,
	_Templates_MethodInfo_
};

$Object* allocate$Templates($Class* clazz) {
	return $of($alloc(Templates));
}

$Class* Templates::load$($String* name, bool initialize) {
	$loadClass(Templates, name, initialize, &_Templates_ClassInfo_, allocate$Templates);
	return class$;
}

$Class* Templates::class$ = nullptr;

		} // transform
	} // xml
} // javax