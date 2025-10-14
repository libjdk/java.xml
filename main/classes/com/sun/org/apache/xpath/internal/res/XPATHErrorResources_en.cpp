#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources_en.h>

#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace res {

$MethodInfo _XPATHErrorResources_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPATHErrorResources_en::*)()>(&XPATHErrorResources_en::init$))},
	{}
};

$ClassInfo _XPATHErrorResources_en_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.res.XPATHErrorResources_en",
	"com.sun.org.apache.xpath.internal.res.XPATHErrorResources",
	nullptr,
	nullptr,
	_XPATHErrorResources_en_MethodInfo_
};

$Object* allocate$XPATHErrorResources_en($Class* clazz) {
	return $of($alloc(XPATHErrorResources_en));
}

void XPATHErrorResources_en::init$() {
	$XPATHErrorResources::init$();
}

XPATHErrorResources_en::XPATHErrorResources_en() {
}

$Class* XPATHErrorResources_en::load$($String* name, bool initialize) {
	$loadClass(XPATHErrorResources_en, name, initialize, &_XPATHErrorResources_en_ClassInfo_, allocate$XPATHErrorResources_en);
	return class$;
}

$Class* XPATHErrorResources_en::class$ = nullptr;

						} // res
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com