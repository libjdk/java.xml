#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$MethodInfo _ValidationContext_MethodInfo_[] = {
	{"addId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addIdRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSymbol", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isIdDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"needExtraChecking", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"needFacetChecking", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"needToNormalize", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"useNamespaces", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ValidationContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.ValidationContext",
	nullptr,
	nullptr,
	nullptr,
	_ValidationContext_MethodInfo_
};

$Object* allocate$ValidationContext($Class* clazz) {
	return $of($alloc(ValidationContext));
}

$Class* ValidationContext::load$($String* name, bool initialize) {
	$loadClass(ValidationContext, name, initialize, &_ValidationContext_ClassInfo_, allocate$ValidationContext);
	return class$;
}

$Class* ValidationContext::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com