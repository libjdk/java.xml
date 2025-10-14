#include <com/sun/org/apache/xalan/internal/xsltc/dom/EmptyFilter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Filter = ::com::sun::org::apache::xalan::internal::xsltc::dom::Filter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$MethodInfo _EmptyFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmptyFilter::*)()>(&EmptyFilter::init$))},
	{"test", "(I)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EmptyFilter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.EmptyFilter",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.dom.Filter",
	nullptr,
	_EmptyFilter_MethodInfo_
};

$Object* allocate$EmptyFilter($Class* clazz) {
	return $of($alloc(EmptyFilter));
}

void EmptyFilter::init$() {
}

bool EmptyFilter::test(int32_t node) {
	return true;
}

EmptyFilter::EmptyFilter() {
}

$Class* EmptyFilter::load$($String* name, bool initialize) {
	$loadClass(EmptyFilter, name, initialize, &_EmptyFilter_ClassInfo_, allocate$EmptyFilter);
	return class$;
}

$Class* EmptyFilter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com