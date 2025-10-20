#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationYearMonthImpl.h>

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef ONE

using $DurationImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

$FieldInfo _DurationYearMonthImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DurationYearMonthImpl, serialVersionUID)},
	{}
};

$MethodInfo _DurationYearMonthImpl_MethodInfo_[] = {
	{"<init>", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DurationYearMonthImpl::*)(bool,$BigInteger*,$BigInteger*)>(&DurationYearMonthImpl::init$))},
	{"<init>", "(ZII)V", nullptr, $PROTECTED, $method(static_cast<void(DurationYearMonthImpl::*)(bool,int32_t,int32_t)>(&DurationYearMonthImpl::init$))},
	{"<init>", "(J)V", nullptr, $PROTECTED, $method(static_cast<void(DurationYearMonthImpl::*)(int64_t)>(&DurationYearMonthImpl::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(DurationYearMonthImpl::*)($String*)>(&DurationYearMonthImpl::init$))},
	{"convertToCanonicalYearMonth", "()V", nullptr, $PRIVATE, $method(static_cast<void(DurationYearMonthImpl::*)()>(&DurationYearMonthImpl::convertToCanonicalYearMonth))},
	{"getValue", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DurationYearMonthImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationYearMonthImpl",
	"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl",
	nullptr,
	_DurationYearMonthImpl_FieldInfo_,
	_DurationYearMonthImpl_MethodInfo_
};

$Object* allocate$DurationYearMonthImpl($Class* clazz) {
	return $of($alloc(DurationYearMonthImpl));
}

void DurationYearMonthImpl::init$(bool isPositive, $BigInteger* years, $BigInteger* months) {
	$DurationImpl::init$(isPositive, years, months, ($BigInteger*)nullptr, ($BigInteger*)nullptr, ($BigInteger*)nullptr, ($BigDecimal*)nullptr);
	convertToCanonicalYearMonth();
}

void DurationYearMonthImpl::init$(bool isPositive, int32_t years, int32_t months) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isPositive;
	$var($BigInteger, var$1, wrap(years));
	DurationYearMonthImpl::init$(var$0, var$1, $(wrap(months)));
}

void DurationYearMonthImpl::init$(int64_t durationInMilliseconds) {
	$DurationImpl::init$(durationInMilliseconds);
	convertToCanonicalYearMonth();
	$set(this, days, nullptr);
	$set(this, hours, nullptr);
	$set(this, minutes, nullptr);
	$set(this, seconds, nullptr);
	this->signum$ = calcSignum((this->signum$ < 0) ? false : true);
}

void DurationYearMonthImpl::init$($String* lexicalRepresentation) {
	$DurationImpl::init$(lexicalRepresentation);
	bool var$2 = getDays() > 0;
	bool var$1 = var$2 || getHours() > 0;
	bool var$0 = var$1 || getMinutes() > 0;
	if (var$0 || getSeconds() > 0) {
		$throwNew($IllegalArgumentException, $$str({"Trying to create an xdt:yearMonthDuration with an invalid lexical representation of \""_s, lexicalRepresentation, "\", data model requires PnYnM."_s}));
	}
	convertToCanonicalYearMonth();
}

int32_t DurationYearMonthImpl::getValue() {
	int32_t var$0 = getYears() * 12;
	return var$0 + getMonths();
}

void DurationYearMonthImpl::convertToCanonicalYearMonth() {
	$useLocalCurrentObjectStackCache();
	while (getMonths() >= 12) {
		$set(this, months, $nc(this->months)->subtract($($BigInteger::valueOf((int64_t)12))));
		$set(this, years, $nc($($BigInteger::valueOf((int64_t)getYears())))->add($BigInteger::ONE));
	}
}

DurationYearMonthImpl::DurationYearMonthImpl() {
}

$Class* DurationYearMonthImpl::load$($String* name, bool initialize) {
	$loadClass(DurationYearMonthImpl, name, initialize, &_DurationYearMonthImpl_ClassInfo_, allocate$DurationYearMonthImpl);
	return class$;
}

$Class* DurationYearMonthImpl::class$ = nullptr;

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com