#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>

#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$FieldInfo _Utils_FieldInfo_[] = {
	{"messages", "Lcom/sun/org/apache/xml/internal/serializer/utils/Messages;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Utils, messages)},
	{}
};

$MethodInfo _Utils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Utils::*)()>(&Utils::init$))},
	{}
};

$ClassInfo _Utils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.Utils",
	"java.lang.Object",
	nullptr,
	_Utils_FieldInfo_,
	_Utils_MethodInfo_
};

$Object* allocate$Utils($Class* clazz) {
	return $of($alloc(Utils));
}


$Messages* Utils::messages = nullptr;

void Utils::init$() {
}

void clinit$Utils($Class* class$) {
	$assignStatic(Utils::messages, $new($Messages, "com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages"_s));
}

Utils::Utils() {
}

$Class* Utils::load$($String* name, bool initialize) {
	$loadClass(Utils, name, initialize, &_Utils_ClassInfo_, clinit$Utils, allocate$Utils);
	return class$;
}

$Class* Utils::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com