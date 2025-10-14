#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DatatypeFactoryImpl.h>

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationDayTimeImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationYearMonthImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/datatype/XMLGregorianCalendarImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/GregorianCalendar.h>
#include <javax/xml/datatype/DatatypeFactory.h>
#include <javax/xml/datatype/Duration.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

using $DurationDayTimeImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationDayTimeImpl;
using $DurationImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl;
using $DurationYearMonthImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationYearMonthImpl;
using $XMLGregorianCalendarImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::XMLGregorianCalendarImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $DatatypeFactory = ::javax::xml::datatype::DatatypeFactory;
using $Duration = ::javax::xml::datatype::Duration;
using $XMLGregorianCalendar = ::javax::xml::datatype::XMLGregorianCalendar;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

$MethodInfo _DatatypeFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DatatypeFactoryImpl::*)()>(&DatatypeFactoryImpl::init$))},
	{"newDuration", "(Ljava/lang/String;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDuration", "(J)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDuration", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationDayTime", "(Ljava/lang/String;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationDayTime", "(J)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationDayTime", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationDayTime", "(ZIIII)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationYearMonth", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationYearMonth", "(ZII)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationYearMonth", "(Ljava/lang/String;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationYearMonth", "(J)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newXMLGregorianCalendar", "()Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC},
	{"newXMLGregorianCalendar", "(Ljava/lang/String;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC},
	{"newXMLGregorianCalendar", "(Ljava/util/GregorianCalendar;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC},
	{"newXMLGregorianCalendar", "(Ljava/math/BigInteger;IIIIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DatatypeFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.DatatypeFactoryImpl",
	"javax.xml.datatype.DatatypeFactory",
	nullptr,
	nullptr,
	_DatatypeFactoryImpl_MethodInfo_
};

$Object* allocate$DatatypeFactoryImpl($Class* clazz) {
	return $of($alloc(DatatypeFactoryImpl));
}

void DatatypeFactoryImpl::init$() {
	$DatatypeFactory::init$();
}

$Duration* DatatypeFactoryImpl::newDuration($String* lexicalRepresentation) {
	return $new($DurationImpl, lexicalRepresentation);
}

$Duration* DatatypeFactoryImpl::newDuration(int64_t durationInMilliseconds) {
	return $new($DurationImpl, durationInMilliseconds);
}

$Duration* DatatypeFactoryImpl::newDuration(bool isPositive, $BigInteger* years, $BigInteger* months, $BigInteger* days, $BigInteger* hours, $BigInteger* minutes, $BigDecimal* seconds) {
	return $new($DurationImpl, isPositive, years, months, days, hours, minutes, seconds);
}

$Duration* DatatypeFactoryImpl::newDurationYearMonth(bool isPositive, $BigInteger* year, $BigInteger* month) {
	return $new($DurationYearMonthImpl, isPositive, year, month);
}

$Duration* DatatypeFactoryImpl::newDurationYearMonth(bool isPositive, int32_t year, int32_t month) {
	return $new($DurationYearMonthImpl, isPositive, year, month);
}

$Duration* DatatypeFactoryImpl::newDurationYearMonth($String* lexicalRepresentation) {
	return $new($DurationYearMonthImpl, lexicalRepresentation);
}

$Duration* DatatypeFactoryImpl::newDurationYearMonth(int64_t durationInMilliseconds) {
	return $new($DurationYearMonthImpl, durationInMilliseconds);
}

$Duration* DatatypeFactoryImpl::newDurationDayTime($String* lexicalRepresentation) {
	if (lexicalRepresentation == nullptr) {
		$throwNew($NullPointerException, "Trying to create an xdt:dayTimeDuration with an invalid lexical representation of \"null\""_s);
	}
	return $new($DurationDayTimeImpl, lexicalRepresentation);
}

$Duration* DatatypeFactoryImpl::newDurationDayTime(int64_t durationInMilliseconds) {
	return $new($DurationDayTimeImpl, durationInMilliseconds);
}

$Duration* DatatypeFactoryImpl::newDurationDayTime(bool isPositive, $BigInteger* day, $BigInteger* hour, $BigInteger* minute, $BigInteger* second) {
	return $new($DurationDayTimeImpl, isPositive, day, hour, minute, (second != nullptr) ? $$new($BigDecimal, second) : ($BigDecimal*)nullptr);
}

$Duration* DatatypeFactoryImpl::newDurationDayTime(bool isPositive, int32_t day, int32_t hour, int32_t minute, int32_t second) {
	return $new($DurationDayTimeImpl, isPositive, day, hour, minute, second);
}

$XMLGregorianCalendar* DatatypeFactoryImpl::newXMLGregorianCalendar() {
	return $new($XMLGregorianCalendarImpl);
}

$XMLGregorianCalendar* DatatypeFactoryImpl::newXMLGregorianCalendar($String* lexicalRepresentation) {
	return $new($XMLGregorianCalendarImpl, lexicalRepresentation);
}

$XMLGregorianCalendar* DatatypeFactoryImpl::newXMLGregorianCalendar($GregorianCalendar* cal) {
	return $new($XMLGregorianCalendarImpl, cal);
}

$XMLGregorianCalendar* DatatypeFactoryImpl::newXMLGregorianCalendar($BigInteger* year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, $BigDecimal* fractionalSecond, int32_t timezone) {
	return $new($XMLGregorianCalendarImpl, year, month, day, hour, minute, second, fractionalSecond, timezone);
}

DatatypeFactoryImpl::DatatypeFactoryImpl() {
}

$Class* DatatypeFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(DatatypeFactoryImpl, name, initialize, &_DatatypeFactoryImpl_ClassInfo_, allocate$DatatypeFactoryImpl);
	return class$;
}

$Class* DatatypeFactoryImpl::class$ = nullptr;

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com