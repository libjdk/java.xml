#include <javax/xml/datatype/XMLGregorianCalendar.h>

#include <java/lang/Cloneable.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/Duration.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

#undef EQUAL
#undef FIELD_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Arrays = ::java::util::Arrays;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;
using $Duration = ::javax::xml::datatype::Duration;
using $QName = ::javax::xml::namespace$::QName;

namespace javax {
	namespace xml {
		namespace datatype {

$MethodInfo _XMLGregorianCalendar_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLGregorianCalendar::*)()>(&XMLGregorianCalendar::init$))},
	{"add", "(Ljavax/xml/datatype/Duration;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"compare", "(Ljavax/xml/datatype/XMLGregorianCalendar;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDay", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getEon", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEonAndYear", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFractionalSecond", "()Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHour", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMillisecond", "()I", nullptr, $PUBLIC},
	{"getMinute", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMonth", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSecond", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTimeZone", "(I)Ljava/util/TimeZone;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTimezone", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getXMLSchemaType", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT},
	{"getYear", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"normalize", "()Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDay", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFractionalSecond", "(Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setHour", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMillisecond", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMinute", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMonth", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSecond", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTime", "(III)V", nullptr, $PUBLIC},
	{"setTime", "(IIILjava/math/BigDecimal;)V", nullptr, $PUBLIC},
	{"setTime", "(IIII)V", nullptr, $PUBLIC},
	{"setTimezone", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setYear", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setYear", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"toGregorianCalendar", "()Ljava/util/GregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT},
	{"toGregorianCalendar", "(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toXMLFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLGregorianCalendar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.datatype.XMLGregorianCalendar",
	"java.lang.Object",
	"java.lang.Cloneable",
	nullptr,
	_XMLGregorianCalendar_MethodInfo_
};

$Object* allocate$XMLGregorianCalendar($Class* clazz) {
	return $of($alloc(XMLGregorianCalendar));
}

$Object* XMLGregorianCalendar::clone() {
	 return this->$Cloneable::clone();
}

void XMLGregorianCalendar::init$() {
}

void XMLGregorianCalendar::setTime(int32_t hour, int32_t minute, int32_t second) {
	setTime(hour, minute, second, ($BigDecimal*)nullptr);
}

void XMLGregorianCalendar::setTime(int32_t hour, int32_t minute, int32_t second, $BigDecimal* fractional) {
	setHour(hour);
	setMinute(minute);
	setSecond(second);
	setFractionalSecond(fractional);
}

void XMLGregorianCalendar::setTime(int32_t hour, int32_t minute, int32_t second, int32_t millisecond) {
	setHour(hour);
	setMinute(minute);
	setSecond(second);
	setMillisecond(millisecond);
}

int32_t XMLGregorianCalendar::getMillisecond() {
	$useLocalCurrentObjectStackCache();
	$var($BigDecimal, fractionalSeconds, getFractionalSecond());
	if (fractionalSeconds == nullptr) {
		return $DatatypeConstants::FIELD_UNDEFINED;
	}
	return $nc($($nc($(getFractionalSecond()))->movePointRight(3)))->intValue();
}

bool XMLGregorianCalendar::equals(Object$* obj) {
	if (obj == nullptr || !($instanceOf(XMLGregorianCalendar, obj))) {
		return false;
	}
	if ($equals(obj, this)) {
		return true;
	}
	return compare($cast(XMLGregorianCalendar, obj)) == $DatatypeConstants::EQUAL;
}

int32_t XMLGregorianCalendar::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t timezone = getTimezone();
	if (timezone == $DatatypeConstants::FIELD_UNDEFINED) {
		timezone = 0;
	}
	$var(XMLGregorianCalendar, gc, this);
	if (timezone != 0) {
		$assign(gc, this->normalize());
	}
	$var($ints, elements, $new($ints, {
		gc->getYear(),
		gc->getMonth(),
		gc->getDay(),
		gc->getHour(),
		gc->getMinute(),
		gc->getSecond(),
		gc->getMillisecond()
	}));
	return $Arrays::hashCode(elements);
}

$String* XMLGregorianCalendar::toString() {
	return toXMLFormat();
}

XMLGregorianCalendar::XMLGregorianCalendar() {
}

$Class* XMLGregorianCalendar::load$($String* name, bool initialize) {
	$loadClass(XMLGregorianCalendar, name, initialize, &_XMLGregorianCalendar_ClassInfo_, allocate$XMLGregorianCalendar);
	return class$;
}

$Class* XMLGregorianCalendar::class$ = nullptr;

		} // datatype
	} // xml
} // javax