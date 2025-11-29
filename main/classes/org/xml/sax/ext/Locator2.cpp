#include <org/xml/sax/ext/Locator2.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$MethodInfo _Locator2_MethodInfo_[] = {
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Locator2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.ext.Locator2",
	nullptr,
	"org.xml.sax.Locator",
	nullptr,
	_Locator2_MethodInfo_
};

$Object* allocate$Locator2($Class* clazz) {
	return $of($alloc(Locator2));
}

$Class* Locator2::load$($String* name, bool initialize) {
	$loadClass(Locator2, name, initialize, &_Locator2_ClassInfo_, allocate$Locator2);
	return class$;
}

$Class* Locator2::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org