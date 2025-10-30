#include <com/sun/org/apache/xpath/internal/objects/LessThanOrEqualComparator.h>

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/objects/Comparator.h>
#include <jcpp.h>

using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $Comparator = ::com::sun::org::apache::xpath::internal::objects::Comparator;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$MethodInfo _LessThanOrEqualComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LessThanOrEqualComparator::*)()>(&LessThanOrEqualComparator::init$))},
	{"compareNumbers", "(DD)Z", nullptr, 0},
	{"compareStrings", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, 0},
	{}
};

$ClassInfo _LessThanOrEqualComparator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.LessThanOrEqualComparator",
	"com.sun.org.apache.xpath.internal.objects.Comparator",
	nullptr,
	nullptr,
	_LessThanOrEqualComparator_MethodInfo_
};

$Object* allocate$LessThanOrEqualComparator($Class* clazz) {
	return $of($alloc(LessThanOrEqualComparator));
}

void LessThanOrEqualComparator::init$() {
	$Comparator::init$();
}

bool LessThanOrEqualComparator::compareStrings($XMLString* s1, $XMLString* s2) {
	double var$0 = $nc(s1)->toDouble();
	return (var$0 <= $nc(s2)->toDouble());
}

bool LessThanOrEqualComparator::compareNumbers(double n1, double n2) {
	return n1 <= n2;
}

LessThanOrEqualComparator::LessThanOrEqualComparator() {
}

$Class* LessThanOrEqualComparator::load$($String* name, bool initialize) {
	$loadClass(LessThanOrEqualComparator, name, initialize, &_LessThanOrEqualComparator_ClassInfo_, allocate$LessThanOrEqualComparator);
	return class$;
}

$Class* LessThanOrEqualComparator::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com