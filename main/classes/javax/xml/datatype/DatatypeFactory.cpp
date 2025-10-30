#include <javax/xml/datatype/DatatypeFactory.h>

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DatatypeFactoryImpl.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Number.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/xml/datatype/DatatypeConstants$Field.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/Duration.h>
#include <javax/xml/datatype/FactoryFinder.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

#undef DATATYPEFACTORY_IMPLEMENTATION_CLASS
#undef DATATYPEFACTORY_PROPERTY
#undef FIELD_UNDEFINED
#undef MONTHS
#undef XDTSCHEMA_DTD
#undef XDTSCHEMA_YMD
#undef YEARS
#undef ZERO

using $DatatypeFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DatatypeFactoryImpl;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;
using $DatatypeConstants$Field = ::javax::xml::datatype::DatatypeConstants$Field;
using $Duration = ::javax::xml::datatype::Duration;
using $FactoryFinder = ::javax::xml::datatype::FactoryFinder;
using $XMLGregorianCalendar = ::javax::xml::datatype::XMLGregorianCalendar;

namespace javax {
	namespace xml {
		namespace datatype {

$FieldInfo _DatatypeFactory_FieldInfo_[] = {
	{"DATATYPEFACTORY_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeFactory, DATATYPEFACTORY_PROPERTY)},
	{"DATATYPEFACTORY_IMPLEMENTATION_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DatatypeFactory, DATATYPEFACTORY_IMPLEMENTATION_CLASS)},
	{"XDTSCHEMA_YMD", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatatypeFactory, XDTSCHEMA_YMD)},
	{"XDTSCHEMA_DTD", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatatypeFactory, XDTSCHEMA_DTD)},
	{}
};

$MethodInfo _DatatypeFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DatatypeFactory::*)()>(&DatatypeFactory::init$))},
	{"newDefaultInstance", "()Ljavax/xml/datatype/DatatypeFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DatatypeFactory*(*)()>(&DatatypeFactory::newDefaultInstance))},
	{"newDuration", "(Ljava/lang/String;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC | $ABSTRACT},
	{"newDuration", "(J)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC | $ABSTRACT},
	{"newDuration", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC | $ABSTRACT},
	{"newDuration", "(ZIIIIII)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationDayTime", "(Ljava/lang/String;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationDayTime", "(J)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationDayTime", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationDayTime", "(ZIIII)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationYearMonth", "(Ljava/lang/String;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationYearMonth", "(J)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationYearMonth", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newDurationYearMonth", "(ZII)Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC},
	{"newInstance", "()Ljavax/xml/datatype/DatatypeFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DatatypeFactory*(*)()>(&DatatypeFactory::newInstance)), "javax.xml.datatype.DatatypeConfigurationException"},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/datatype/DatatypeFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DatatypeFactory*(*)($String*,$ClassLoader*)>(&DatatypeFactory::newInstance)), "javax.xml.datatype.DatatypeConfigurationException"},
	{"newXMLGregorianCalendar", "()Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT},
	{"newXMLGregorianCalendar", "(Ljava/lang/String;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT},
	{"newXMLGregorianCalendar", "(Ljava/util/GregorianCalendar;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT},
	{"newXMLGregorianCalendar", "(Ljava/math/BigInteger;IIIIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT},
	{"newXMLGregorianCalendar", "(IIIIIIII)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC},
	{"newXMLGregorianCalendarDate", "(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC},
	{"newXMLGregorianCalendarTime", "(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC},
	{"newXMLGregorianCalendarTime", "(IIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC},
	{"newXMLGregorianCalendarTime", "(IIIII)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DatatypeFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.datatype.DatatypeFactory",
	"java.lang.Object",
	nullptr,
	_DatatypeFactory_FieldInfo_,
	_DatatypeFactory_MethodInfo_
};

$Object* allocate$DatatypeFactory($Class* clazz) {
	return $of($alloc(DatatypeFactory));
}

$String* DatatypeFactory::DATATYPEFACTORY_PROPERTY = nullptr;
$String* DatatypeFactory::DATATYPEFACTORY_IMPLEMENTATION_CLASS = nullptr;
$Pattern* DatatypeFactory::XDTSCHEMA_YMD = nullptr;
$Pattern* DatatypeFactory::XDTSCHEMA_DTD = nullptr;

void DatatypeFactory::init$() {
}

DatatypeFactory* DatatypeFactory::newDefaultInstance() {
	$init(DatatypeFactory);
	return $new($DatatypeFactoryImpl);
}

DatatypeFactory* DatatypeFactory::newInstance() {
	$init(DatatypeFactory);
	return $cast(DatatypeFactory, $FactoryFinder::find(DatatypeFactory::class$, DatatypeFactory::DATATYPEFACTORY_IMPLEMENTATION_CLASS));
}

DatatypeFactory* DatatypeFactory::newInstance($String* factoryClassName, $ClassLoader* classLoader) {
	$init(DatatypeFactory);
	return $cast(DatatypeFactory, $FactoryFinder::newInstance(DatatypeFactory::class$, factoryClassName, classLoader, false));
}

$Duration* DatatypeFactory::newDuration(bool isPositive, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds) {
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, realYears, (years != $DatatypeConstants::FIELD_UNDEFINED) ? $BigInteger::valueOf((int64_t)years) : ($BigInteger*)nullptr);
	$var($BigInteger, realMonths, (months != $DatatypeConstants::FIELD_UNDEFINED) ? $BigInteger::valueOf((int64_t)months) : ($BigInteger*)nullptr);
	$var($BigInteger, realDays, (days != $DatatypeConstants::FIELD_UNDEFINED) ? $BigInteger::valueOf((int64_t)days) : ($BigInteger*)nullptr);
	$var($BigInteger, realHours, (hours != $DatatypeConstants::FIELD_UNDEFINED) ? $BigInteger::valueOf((int64_t)hours) : ($BigInteger*)nullptr);
	$var($BigInteger, realMinutes, (minutes != $DatatypeConstants::FIELD_UNDEFINED) ? $BigInteger::valueOf((int64_t)minutes) : ($BigInteger*)nullptr);
	$var($BigDecimal, realSeconds, (seconds != $DatatypeConstants::FIELD_UNDEFINED) ? $BigDecimal::valueOf((int64_t)seconds) : ($BigDecimal*)nullptr);
	return newDuration(isPositive, realYears, realMonths, realDays, realHours, realMinutes, realSeconds);
}

$Duration* DatatypeFactory::newDurationDayTime($String* lexicalRepresentation) {
	$useLocalCurrentObjectStackCache();
	if (lexicalRepresentation == nullptr) {
		$throwNew($NullPointerException, "Trying to create an xdt:dayTimeDuration with an invalid lexical representation of \"null\""_s);
	}
	$var($Matcher, matcher, $nc(DatatypeFactory::XDTSCHEMA_DTD)->matcher(lexicalRepresentation));
	if (!$nc(matcher)->matches()) {
		$throwNew($IllegalArgumentException, $$str({"Trying to create an xdt:dayTimeDuration with an invalid lexical representation of \""_s, lexicalRepresentation, "\", data model requires years and months only."_s}));
	}
	return newDuration(lexicalRepresentation);
}

$Duration* DatatypeFactory::newDurationDayTime(int64_t durationInMilliseconds) {
	return newDuration(durationInMilliseconds);
}

$Duration* DatatypeFactory::newDurationDayTime(bool isPositive, $BigInteger* day, $BigInteger* hour, $BigInteger* minute, $BigInteger* second) {
	return newDuration(isPositive, ($BigInteger*)nullptr, ($BigInteger*)nullptr, day, hour, minute, (second != nullptr) ? $$new($BigDecimal, second) : ($BigDecimal*)nullptr);
}

$Duration* DatatypeFactory::newDurationDayTime(bool isPositive, int32_t day, int32_t hour, int32_t minute, int32_t second) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isPositive;
	$var($BigInteger, var$1, $BigInteger::valueOf((int64_t)day));
	$var($BigInteger, var$2, $BigInteger::valueOf((int64_t)hour));
	$var($BigInteger, var$3, $BigInteger::valueOf((int64_t)minute));
	return newDurationDayTime(var$0, var$1, var$2, var$3, $($BigInteger::valueOf((int64_t)second)));
}

$Duration* DatatypeFactory::newDurationYearMonth($String* lexicalRepresentation) {
	$useLocalCurrentObjectStackCache();
	if (lexicalRepresentation == nullptr) {
		$throwNew($NullPointerException, "Trying to create an xdt:yearMonthDuration with an invalid lexical representation of \"null\""_s);
	}
	$var($Matcher, matcher, $nc(DatatypeFactory::XDTSCHEMA_YMD)->matcher(lexicalRepresentation));
	if (!$nc(matcher)->matches()) {
		$throwNew($IllegalArgumentException, $$str({"Trying to create an xdt:yearMonthDuration with an invalid lexical representation of \""_s, lexicalRepresentation, "\", data model requires days and times only."_s}));
	}
	return newDuration(lexicalRepresentation);
}

$Duration* DatatypeFactory::newDurationYearMonth(int64_t durationInMilliseconds) {
	$useLocalCurrentObjectStackCache();
	$var($Duration, fullDuration, newDuration(durationInMilliseconds));
	bool isPositive = ($nc(fullDuration)->getSign() == -1) ? false : true;
	$init($DatatypeConstants);
	$var($BigInteger, years, $cast($BigInteger, $nc(fullDuration)->getField($DatatypeConstants::YEARS)));
	if (years == nullptr) {
		$init($BigInteger);
		$assign(years, $BigInteger::ZERO);
	}
	$var($BigInteger, months, $cast($BigInteger, fullDuration->getField($DatatypeConstants::MONTHS)));
	if (months == nullptr) {
		$init($BigInteger);
		$assign(months, $BigInteger::ZERO);
	}
	return newDurationYearMonth(isPositive, years, months);
}

$Duration* DatatypeFactory::newDurationYearMonth(bool isPositive, $BigInteger* year, $BigInteger* month) {
	return newDuration(isPositive, year, month, ($BigInteger*)nullptr, ($BigInteger*)nullptr, ($BigInteger*)nullptr, ($BigDecimal*)nullptr);
}

$Duration* DatatypeFactory::newDurationYearMonth(bool isPositive, int32_t year, int32_t month) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isPositive;
	$var($BigInteger, var$1, $BigInteger::valueOf((int64_t)year));
	return newDurationYearMonth(var$0, var$1, $($BigInteger::valueOf((int64_t)month)));
}

$XMLGregorianCalendar* DatatypeFactory::newXMLGregorianCalendar(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t timezone) {
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, realYear, (year != $DatatypeConstants::FIELD_UNDEFINED) ? $BigInteger::valueOf((int64_t)year) : ($BigInteger*)nullptr);
	$var($BigDecimal, realMillisecond, nullptr);
	if (millisecond != $DatatypeConstants::FIELD_UNDEFINED) {
		if (millisecond < 0 || millisecond > 1000) {
			$throwNew($IllegalArgumentException, $$str({"javax.xml.datatype.DatatypeFactory#newXMLGregorianCalendar(int year, int month, int day, int hour, int minute, int second, int millisecond, int timezone)with invalid millisecond: "_s, $$str(millisecond)}));
		}
		$assign(realMillisecond, $nc($($BigDecimal::valueOf((int64_t)millisecond)))->movePointLeft(3));
	}
	return newXMLGregorianCalendar(realYear, month, day, hour, minute, second, realMillisecond, timezone);
}

$XMLGregorianCalendar* DatatypeFactory::newXMLGregorianCalendarDate(int32_t year, int32_t month, int32_t day, int32_t timezone) {
	return newXMLGregorianCalendar(year, month, day, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, timezone);
}

$XMLGregorianCalendar* DatatypeFactory::newXMLGregorianCalendarTime(int32_t hours, int32_t minutes, int32_t seconds, int32_t timezone) {
	return newXMLGregorianCalendar($DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, hours, minutes, seconds, $DatatypeConstants::FIELD_UNDEFINED, timezone);
}

$XMLGregorianCalendar* DatatypeFactory::newXMLGregorianCalendarTime(int32_t hours, int32_t minutes, int32_t seconds, $BigDecimal* fractionalSecond, int32_t timezone) {
	return newXMLGregorianCalendar(($BigInteger*)nullptr, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, hours, minutes, seconds, fractionalSecond, timezone);
}

$XMLGregorianCalendar* DatatypeFactory::newXMLGregorianCalendarTime(int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds, int32_t timezone) {
	$useLocalCurrentObjectStackCache();
	$var($BigDecimal, realMilliseconds, nullptr);
	if (milliseconds != $DatatypeConstants::FIELD_UNDEFINED) {
		if (milliseconds < 0 || milliseconds > 1000) {
			$throwNew($IllegalArgumentException, $$str({"javax.xml.datatype.DatatypeFactory#newXMLGregorianCalendarTime(int hours, int minutes, int seconds, int milliseconds, int timezone)with invalid milliseconds: "_s, $$str(milliseconds)}));
		}
		$assign(realMilliseconds, $nc($($BigDecimal::valueOf((int64_t)milliseconds)))->movePointLeft(3));
	}
	return newXMLGregorianCalendarTime(hours, minutes, seconds, realMilliseconds, timezone);
}

void clinit$DatatypeFactory($Class* class$) {
	$assignStatic(DatatypeFactory::DATATYPEFACTORY_PROPERTY, "javax.xml.datatype.DatatypeFactory"_s);
	$assignStatic(DatatypeFactory::DATATYPEFACTORY_IMPLEMENTATION_CLASS, $new($String, "com.sun.org.apache.xerces.internal.jaxp.datatype.DatatypeFactoryImpl"_s));
	$assignStatic(DatatypeFactory::XDTSCHEMA_YMD, $Pattern::compile("[^DT]*"_s));
	$assignStatic(DatatypeFactory::XDTSCHEMA_DTD, $Pattern::compile("[^YM]*[DT].*"_s));
}

DatatypeFactory::DatatypeFactory() {
}

$Class* DatatypeFactory::load$($String* name, bool initialize) {
	$loadClass(DatatypeFactory, name, initialize, &_DatatypeFactory_ClassInfo_, clinit$DatatypeFactory, allocate$DatatypeFactory);
	return class$;
}

$Class* DatatypeFactory::class$ = nullptr;

		} // datatype
	} // xml
} // javax