#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <jcpp.h>

using $RegularExpression = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$MethodInfo _RegularExpression$ExpressionTarget_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RegularExpression$ExpressionTarget::*)()>(&RegularExpression$ExpressionTarget::init$))},
	{"charAt", "(I)C", nullptr, $ABSTRACT},
	{"regionMatches", "(ZIILjava/lang/String;I)Z", nullptr, $ABSTRACT},
	{"regionMatches", "(ZIIII)Z", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _RegularExpression$ExpressionTarget_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "ExpressionTarget", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RegularExpression$ExpressionTarget_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RegularExpression$ExpressionTarget_MethodInfo_,
	nullptr,
	nullptr,
	_RegularExpression$ExpressionTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression"
};

$Object* allocate$RegularExpression$ExpressionTarget($Class* clazz) {
	return $of($alloc(RegularExpression$ExpressionTarget));
}

void RegularExpression$ExpressionTarget::init$() {
}

RegularExpression$ExpressionTarget::RegularExpression$ExpressionTarget() {
}

$Class* RegularExpression$ExpressionTarget::load$($String* name, bool initialize) {
	$loadClass(RegularExpression$ExpressionTarget, name, initialize, &_RegularExpression$ExpressionTarget_ClassInfo_, allocate$RegularExpression$ExpressionTarget);
	return class$;
}

$Class* RegularExpression$ExpressionTarget::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com