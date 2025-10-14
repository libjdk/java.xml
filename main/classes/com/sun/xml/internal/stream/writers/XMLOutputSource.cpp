#include <com/sun/xml/internal/stream/writers/XMLOutputSource.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$MethodInfo _XMLOutputSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLOutputSource::*)()>(&XMLOutputSource::init$))},
	{}
};

$ClassInfo _XMLOutputSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLOutputSource",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XMLOutputSource_MethodInfo_
};

$Object* allocate$XMLOutputSource($Class* clazz) {
	return $of($alloc(XMLOutputSource));
}

void XMLOutputSource::init$() {
}

XMLOutputSource::XMLOutputSource() {
}

$Class* XMLOutputSource::load$($String* name, bool initialize) {
	$loadClass(XMLOutputSource, name, initialize, &_XMLOutputSource_ClassInfo_, allocate$XMLOutputSource);
	return class$;
}

$Class* XMLOutputSource::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com