#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>

#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _XMLStringFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLStringFactory::*)()>(&XMLStringFactory::init$))},
	{"emptystr", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"newstr", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"newstr", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;II)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"newstr", "([CII)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLStringFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.utils.XMLStringFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XMLStringFactory_MethodInfo_
};

$Object* allocate$XMLStringFactory($Class* clazz) {
	return $of($alloc(XMLStringFactory));
}

void XMLStringFactory::init$() {
}

XMLStringFactory::XMLStringFactory() {
}

$Class* XMLStringFactory::load$($String* name, bool initialize) {
	$loadClass(XMLStringFactory, name, initialize, &_XMLStringFactory_ClassInfo_, allocate$XMLStringFactory);
	return class$;
}

$Class* XMLStringFactory::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com