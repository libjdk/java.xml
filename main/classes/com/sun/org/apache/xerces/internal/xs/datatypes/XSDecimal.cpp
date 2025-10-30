#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSDecimal.h>

#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

$MethodInfo _XSDecimal_MethodInfo_[] = {
	{"getBigDecimal", "()Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBigInteger", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.NumberFormatException"},
	{"getByte", "()B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.NumberFormatException"},
	{"getInt", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.NumberFormatException"},
	{"getLong", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.NumberFormatException"},
	{"getShort", "()S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.NumberFormatException"},
	{}
};

$ClassInfo _XSDecimal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSDecimal",
	nullptr,
	nullptr,
	nullptr,
	_XSDecimal_MethodInfo_
};

$Object* allocate$XSDecimal($Class* clazz) {
	return $of($alloc(XSDecimal));
}

$Class* XSDecimal::load$($String* name, bool initialize) {
	$loadClass(XSDecimal, name, initialize, &_XSDecimal_ClassInfo_, allocate$XSDecimal);
	return class$;
}

$Class* XSDecimal::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com