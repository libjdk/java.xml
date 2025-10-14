#include <com/sun/org/apache/xalan/internal/lib/ExsltDatetime.h>

#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef DAY_OF_MONTH
#undef DAY_OF_WEEK
#undef DAY_OF_WEEK_IN_MONTH
#undef DAY_OF_YEAR
#undef DST_OFFSET
#undef EMPTY_STR
#undef ENGLISH
#undef HOUR_OF_DAY
#undef MINUTE
#undef MONTH
#undef SECOND
#undef WEEK_OF_YEAR
#undef YEAR
#undef ZONE_OFFSET

using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $DateFormat = ::java::text::DateFormat;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

$FieldInfo _ExsltDatetime_FieldInfo_[] = {
	{"dt", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ExsltDatetime, dt)},
	{"d", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ExsltDatetime, d)},
	{"gym", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ExsltDatetime, gym)},
	{"gy", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ExsltDatetime, gy)},
	{"gmd", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ExsltDatetime, gmd)},
	{"gm", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ExsltDatetime, gm)},
	{"gd", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ExsltDatetime, gd)},
	{"t", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ExsltDatetime, t)},
	{"EMPTY_STR", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ExsltDatetime, EMPTY_STR)},
	{}
};

$MethodInfo _ExsltDatetime_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExsltDatetime::*)()>(&ExsltDatetime::init$))},
	{"date", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ExsltDatetime::date)), "java.text.ParseException"},
	{"date", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&ExsltDatetime::date))},
	{"dateTime", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&ExsltDatetime::dateTime))},
	{"dayAbbreviation", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ExsltDatetime::dayAbbreviation)), "java.text.ParseException"},
	{"dayAbbreviation", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&ExsltDatetime::dayAbbreviation))},
	{"dayInMonth", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::dayInMonth)), "java.text.ParseException"},
	{"dayInMonth", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::dayInMonth))},
	{"dayInWeek", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::dayInWeek)), "java.text.ParseException"},
	{"dayInWeek", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::dayInWeek))},
	{"dayInYear", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::dayInYear)), "java.text.ParseException"},
	{"dayInYear", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::dayInYear))},
	{"dayName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ExsltDatetime::dayName)), "java.text.ParseException"},
	{"dayName", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&ExsltDatetime::dayName))},
	{"dayOfWeekInMonth", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::dayOfWeekInMonth)), "java.text.ParseException"},
	{"dayOfWeekInMonth", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::dayOfWeekInMonth))},
	{"formatDate", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&ExsltDatetime::formatDate))},
	{"formatDigits", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&ExsltDatetime::formatDigits))},
	{"getEraDatetimeZone", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($String*)>(&ExsltDatetime::getEraDatetimeZone))},
	{"getNameOrAbbrev", "(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$StringArray*,$String*)>(&ExsltDatetime::getNameOrAbbrev)), "java.text.ParseException"},
	{"getNameOrAbbrev", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&ExsltDatetime::getNameOrAbbrev))},
	{"getNumber", "(Ljava/lang/String;[Ljava/lang/String;I)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)($String*,$StringArray*,int32_t)>(&ExsltDatetime::getNumber)), "java.text.ParseException"},
	{"getZoneStart", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&ExsltDatetime::getZoneStart))},
	{"hourInDay", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::hourInDay)), "java.text.ParseException"},
	{"hourInDay", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::hourInDay))},
	{"leapYear", "(Ljava/lang/String;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XObject*(*)($String*)>(&ExsltDatetime::leapYear)), "java.text.ParseException"},
	{"leapYear", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&ExsltDatetime::leapYear))},
	{"minuteInHour", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::minuteInHour)), "java.text.ParseException"},
	{"minuteInHour", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::minuteInHour))},
	{"monthAbbreviation", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ExsltDatetime::monthAbbreviation)), "java.text.ParseException"},
	{"monthAbbreviation", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&ExsltDatetime::monthAbbreviation))},
	{"monthInYear", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::monthInYear)), "java.text.ParseException"},
	{"monthInYear", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::monthInYear))},
	{"monthName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ExsltDatetime::monthName)), "java.text.ParseException"},
	{"monthName", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&ExsltDatetime::monthName))},
	{"secondInMinute", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::secondInMinute)), "java.text.ParseException"},
	{"secondInMinute", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::secondInMinute))},
	{"strip", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&ExsltDatetime::strip))},
	{"testFormats", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/util/Date;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Date*(*)($String*,$StringArray*)>(&ExsltDatetime::testFormats)), "java.text.ParseException"},
	{"time", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ExsltDatetime::time)), "java.text.ParseException"},
	{"time", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&ExsltDatetime::time))},
	{"weekInYear", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::weekInYear)), "java.text.ParseException"},
	{"weekInYear", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::weekInYear))},
	{"year", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&ExsltDatetime::year)), "java.text.ParseException"},
	{"year", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&ExsltDatetime::year))},
	{}
};

$ClassInfo _ExsltDatetime_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.lib.ExsltDatetime",
	"java.lang.Object",
	nullptr,
	_ExsltDatetime_FieldInfo_,
	_ExsltDatetime_MethodInfo_
};

$Object* allocate$ExsltDatetime($Class* clazz) {
	return $of($alloc(ExsltDatetime));
}

$String* ExsltDatetime::dt = nullptr;
$String* ExsltDatetime::d = nullptr;
$String* ExsltDatetime::gym = nullptr;
$String* ExsltDatetime::gy = nullptr;
$String* ExsltDatetime::gmd = nullptr;
$String* ExsltDatetime::gm = nullptr;
$String* ExsltDatetime::gd = nullptr;
$String* ExsltDatetime::t = nullptr;
$String* ExsltDatetime::EMPTY_STR = nullptr;

void ExsltDatetime::init$() {
}

$String* ExsltDatetime::dateTime() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	$var($Date, datetime, $nc(cal)->getTime());
	$var($SimpleDateFormat, dateFormat, $new($SimpleDateFormat, ExsltDatetime::dt));
	$var($StringBuffer, buff, $new($StringBuffer, $(dateFormat->format(datetime))));
	int32_t var$0 = cal->get($Calendar::ZONE_OFFSET);
	int32_t offset = var$0 + cal->get($Calendar::DST_OFFSET);
	if (offset == 0) {
		buff->append("Z"_s);
	} else {
		int32_t hrs = $div(offset, (60 * 60 * 1000));
		int32_t min = $mod(offset, (60 * 60 * 1000));
		char16_t posneg = hrs < 0 ? u'-' : u'+';
		buff->append(posneg)->append($(formatDigits(hrs)))->append(u':')->append($(formatDigits(min)));
	}
	return buff->toString();
}

$String* ExsltDatetime::formatDigits(int32_t q) {
	$init(ExsltDatetime);
	$var($String, dd, $String::valueOf($Math::abs(q)));
	return dd->length() == 1 ? $str({$$str(u'0'), dd}) : dd;
}

$String* ExsltDatetime::date($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, leader, $nc(edz)->get(0));
	$var($String, datetime, edz->get(1));
	$var($String, zone, edz->get(2));
	if (datetime == nullptr || zone == nullptr) {
		return ExsltDatetime::EMPTY_STR;
	}
	$var($StringArray, formatsIn, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d
	}));
	$var($String, formatOut, ExsltDatetime::d);
	$var($Date, date, testFormats(datetime, formatsIn));
	if (date == nullptr) {
		return ExsltDatetime::EMPTY_STR;
	}
	$var($SimpleDateFormat, dateFormat, $new($SimpleDateFormat, formatOut));
	dateFormat->setLenient(false);
	$var($String, dateOut, dateFormat->format(date));
	if ($nc(dateOut)->length() == 0) {
		return ExsltDatetime::EMPTY_STR;
	} else {
		return ($str({leader, dateOut, zone}));
	}
}

$String* ExsltDatetime::date() {
	$init(ExsltDatetime);
	$var($String, datetime, $nc($(dateTime()))->toString());
	$var($String, date, datetime->substring(0, datetime->indexOf("T"_s)));
	$var($String, zone, datetime->substring(getZoneStart(datetime)));
	return ($str({date, zone}));
}

$String* ExsltDatetime::time($String* timeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(timeIn));
	$var($String, time, $nc(edz)->get(1));
	$var($String, zone, edz->get(2));
	if (time == nullptr || zone == nullptr) {
		return ExsltDatetime::EMPTY_STR;
	}
	$var($StringArray, formatsIn, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d,
		ExsltDatetime::t
	}));
	$var($String, formatOut, ExsltDatetime::t);
	$var($Date, date, testFormats(time, formatsIn));
	if (date == nullptr) {
		return ExsltDatetime::EMPTY_STR;
	}
	$var($SimpleDateFormat, dateFormat, $new($SimpleDateFormat, formatOut));
	$var($String, out, dateFormat->format(date));
	return ($str({out, zone}));
}

$String* ExsltDatetime::time() {
	$init(ExsltDatetime);
	$var($String, datetime, $nc($(dateTime()))->toString());
	$var($String, time, datetime->substring(datetime->indexOf("T"_s) + 1));
	return (time);
}

double ExsltDatetime::year($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	bool ad = $nc($nc(edz)->get(0))->length() == 0;
	$var($String, datetime, edz->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d,
		ExsltDatetime::gym,
		ExsltDatetime::gy
	}));
	double yr = getNumber(datetime, formats, $Calendar::YEAR);
	$init($Double);
	if (ad || yr == $Double::NaN) {
		return yr;
	} else {
		return -yr;
	}
}

double ExsltDatetime::year() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)$nc(cal)->get($Calendar::YEAR);
}

double ExsltDatetime::monthInYear($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d,
		ExsltDatetime::gym,
		ExsltDatetime::gm,
		ExsltDatetime::gmd
	}));
	return getNumber(datetime, formats, $Calendar::MONTH) + 1;
}

double ExsltDatetime::monthInYear() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)($nc(cal)->get($Calendar::MONTH) + 1);
}

double ExsltDatetime::weekInYear($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d
	}));
	return getNumber(datetime, formats, $Calendar::WEEK_OF_YEAR);
}

double ExsltDatetime::weekInYear() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)$nc(cal)->get($Calendar::WEEK_OF_YEAR);
}

double ExsltDatetime::dayInYear($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d
	}));
	return getNumber(datetime, formats, $Calendar::DAY_OF_YEAR);
}

double ExsltDatetime::dayInYear() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)$nc(cal)->get($Calendar::DAY_OF_YEAR);
}

double ExsltDatetime::dayInMonth($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d,
		ExsltDatetime::gmd,
		ExsltDatetime::gd
	}));
	double day = getNumber(datetime, formats, $Calendar::DAY_OF_MONTH);
	return day;
}

double ExsltDatetime::dayInMonth() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)$nc(cal)->get($Calendar::DAY_OF_MONTH);
}

double ExsltDatetime::dayOfWeekInMonth($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d
	}));
	return getNumber(datetime, formats, $Calendar::DAY_OF_WEEK_IN_MONTH);
}

double ExsltDatetime::dayOfWeekInMonth() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)$nc(cal)->get($Calendar::DAY_OF_WEEK_IN_MONTH);
}

double ExsltDatetime::dayInWeek($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d
	}));
	return getNumber(datetime, formats, $Calendar::DAY_OF_WEEK);
}

double ExsltDatetime::dayInWeek() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)$nc(cal)->get($Calendar::DAY_OF_WEEK);
}

double ExsltDatetime::hourInDay($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::t
	}));
	return getNumber(datetime, formats, $Calendar::HOUR_OF_DAY);
}

double ExsltDatetime::hourInDay() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)$nc(cal)->get($Calendar::HOUR_OF_DAY);
}

double ExsltDatetime::minuteInHour($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::t
	}));
	return getNumber(datetime, formats, $Calendar::MINUTE);
}

double ExsltDatetime::minuteInHour() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)$nc(cal)->get($Calendar::MINUTE);
}

double ExsltDatetime::secondInMinute($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::t
	}));
	return getNumber(datetime, formats, $Calendar::SECOND);
}

double ExsltDatetime::secondInMinute() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	return (double)$nc(cal)->get($Calendar::SECOND);
}

$XObject* ExsltDatetime::leapYear($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		$init($Double);
		return $new($XNumber, $Double::NaN);
	}
	$var($StringArray, formats, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d,
		ExsltDatetime::gym,
		ExsltDatetime::gy
	}));
	double dbl = getNumber(datetime, formats, $Calendar::YEAR);
	$init($Double);
	if (dbl == $Double::NaN) {
		return $new($XNumber, $Double::NaN);
	}
	int32_t yr = $cast(int32_t, dbl);
	return $new($XBoolean, yr % 400 == 0 || (yr % 100 != 0 && yr % 4 == 0));
}

bool ExsltDatetime::leapYear() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	int32_t yr = $nc(cal)->get($Calendar::YEAR);
	return (yr % 400 == 0 || (yr % 100 != 0 && yr % 4 == 0));
}

$String* ExsltDatetime::monthName($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		return ExsltDatetime::EMPTY_STR;
	}
	$var($StringArray, formatsIn, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d,
		ExsltDatetime::gym,
		ExsltDatetime::gm
	}));
	$var($String, formatOut, "MMMM"_s);
	return getNameOrAbbrev(datetimeIn, formatsIn, formatOut);
}

$String* ExsltDatetime::monthName() {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	$var($String, format, "MMMM"_s);
	return getNameOrAbbrev(format);
}

$String* ExsltDatetime::monthAbbreviation($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		return ExsltDatetime::EMPTY_STR;
	}
	$var($StringArray, formatsIn, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d,
		ExsltDatetime::gym,
		ExsltDatetime::gm
	}));
	$var($String, formatOut, "MMM"_s);
	return getNameOrAbbrev(datetimeIn, formatsIn, formatOut);
}

$String* ExsltDatetime::monthAbbreviation() {
	$init(ExsltDatetime);
	$var($String, format, "MMM"_s);
	return getNameOrAbbrev(format);
}

$String* ExsltDatetime::dayName($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		return ExsltDatetime::EMPTY_STR;
	}
	$var($StringArray, formatsIn, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d
	}));
	$var($String, formatOut, "EEEE"_s);
	return getNameOrAbbrev(datetimeIn, formatsIn, formatOut);
}

$String* ExsltDatetime::dayName() {
	$init(ExsltDatetime);
	$var($String, format, "EEEE"_s);
	return getNameOrAbbrev(format);
}

$String* ExsltDatetime::dayAbbreviation($String* datetimeIn) {
	$init(ExsltDatetime);
	$var($StringArray, edz, getEraDatetimeZone(datetimeIn));
	$var($String, datetime, $nc(edz)->get(1));
	if (datetime == nullptr) {
		return ExsltDatetime::EMPTY_STR;
	}
	$var($StringArray, formatsIn, $new($StringArray, {
		ExsltDatetime::dt,
		ExsltDatetime::d
	}));
	$var($String, formatOut, "EEE"_s);
	return getNameOrAbbrev(datetimeIn, formatsIn, formatOut);
}

$String* ExsltDatetime::dayAbbreviation() {
	$init(ExsltDatetime);
	$var($String, format, "EEE"_s);
	return getNameOrAbbrev(format);
}

$StringArray* ExsltDatetime::getEraDatetimeZone($String* in) {
	$init(ExsltDatetime);
	$var($String, leader, ""_s);
	$var($String, datetime, in);
	$var($String, zone, ""_s);
	bool var$0 = $nc(in)->charAt(0) == u'-';
	if (var$0 && !in->startsWith("--"_s)) {
		$assign(leader, "-"_s);
		$assign(datetime, in->substring(1));
	}
	int32_t z = getZoneStart(datetime);
	if (z > 0) {
		$assign(zone, $nc(datetime)->substring(z));
		$assign(datetime, datetime->substring(0, z));
	} else if (z == -2) {
		$assign(zone, nullptr);
	}
	return $new($StringArray, {
		leader,
		datetime,
		zone
	});
}

int32_t ExsltDatetime::getZoneStart($String* datetime) {
	$init(ExsltDatetime);
	int32_t var$0 = $nc(datetime)->indexOf("Z"_s);
	if (var$0 == datetime->length() - 1) {
		return datetime->length() - 1;
	} else {
		bool var$5 = datetime->length() >= 6;
		bool var$4 = var$5 && datetime->charAt(datetime->length() - 3) == u':';
		if (var$4) {
			bool var$6 = datetime->charAt(datetime->length() - 6) == u'+';
			var$4 = (var$6 || datetime->charAt(datetime->length() - 6) == u'-');
		}
		if (var$4) {
			try {
				$var($SimpleDateFormat, dateFormat, $new($SimpleDateFormat, "HH:mm"_s));
				dateFormat->setLenient(false);
				$var($Date, d, dateFormat->parse($(datetime->substring(datetime->length() - 5))));
				return datetime->length() - 6;
			} catch ($ParseException&) {
				$var($ParseException, pe, $catch());
				$init($System);
				$nc($System::out)->println($$str({"ParseException "_s, $$str(pe->getErrorOffset())}));
				return -2;
			}
		}
	}
	return -1;
}

$Date* ExsltDatetime::testFormats($String* in, $StringArray* formats) {
	$init(ExsltDatetime);
	for (int32_t i = 0; i < $nc(formats)->length; ++i) {
		try {
			$var($SimpleDateFormat, dateFormat, $new($SimpleDateFormat, formats->get(i)));
			dateFormat->setLenient(false);
			return dateFormat->parse(in);
		} catch ($ParseException&) {
			$catch();
		}
	}
	return nullptr;
}

double ExsltDatetime::getNumber($String* in, $StringArray* formats, int32_t calField) {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	$nc(cal)->setLenient(false);
	$var($Date, date, testFormats(in, formats));
	if (date == nullptr) {
		$init($Double);
		return $Double::NaN;
	}
	cal->setTime(date);
	return (double)cal->get(calField);
}

$String* ExsltDatetime::getNameOrAbbrev($String* in, $StringArray* formatsIn, $String* formatOut) {
	$init(ExsltDatetime);
	for (int32_t i = 0; i < $nc(formatsIn)->length; ++i) {
		try {
			$init($Locale);
			$var($SimpleDateFormat, dateFormat, $new($SimpleDateFormat, formatsIn->get(i), $Locale::ENGLISH));
			dateFormat->setLenient(false);
			$var($Date, dt, dateFormat->parse(in));
			dateFormat->applyPattern(formatOut);
			return dateFormat->format(dt);
		} catch ($ParseException&) {
			$catch();
		}
	}
	return ""_s;
}

$String* ExsltDatetime::getNameOrAbbrev($String* format) {
	$init(ExsltDatetime);
	$var($Calendar, cal, $Calendar::getInstance());
	$init($Locale);
	$var($SimpleDateFormat, dateFormat, $new($SimpleDateFormat, format, $Locale::ENGLISH));
	return dateFormat->format($($nc(cal)->getTime()));
}

$String* ExsltDatetime::formatDate($String* dateTime$renamed, $String* pattern) {
	$init(ExsltDatetime);
	$var($String, dateTime, dateTime$renamed);
	$var($String, yearSymbols, "Gy"_s);
	$var($String, monthSymbols, "M"_s);
	$var($String, daySymbols, "dDEFwW"_s);
	$var($TimeZone, timeZone, nullptr);
	$var($String, zone, nullptr);
	bool var$0 = $nc(dateTime)->endsWith("Z"_s);
	if (var$0 || $nc(dateTime)->endsWith("z"_s)) {
		$assign(timeZone, $TimeZone::getTimeZone("GMT"_s));
		$assign(dateTime, $str({$(dateTime->substring(0, dateTime->length() - 1)), "GMT"_s}));
		$assign(zone, "z"_s);
	} else {
		bool var$5 = (dateTime->length() >= 6);
		bool var$4 = var$5 && (dateTime->charAt(dateTime->length() - 3) == u':');
		if (var$4) {
			bool var$6 = (dateTime->charAt(dateTime->length() - 6) == u'+');
			var$4 = (var$6 || (dateTime->charAt(dateTime->length() - 6) == u'-'));
		}
		if (var$4) {
			$var($String, offset, dateTime->substring(dateTime->length() - 6));
			bool var$7 = "+00:00"_s->equals(offset);
			if (var$7 || "-00:00"_s->equals(offset)) {
				$assign(timeZone, $TimeZone::getTimeZone("GMT"_s));
			} else {
				$assign(timeZone, $TimeZone::getTimeZone($$str({"GMT"_s, offset})));
			}
			$assign(zone, "z"_s);
			$assign(dateTime, $str({$(dateTime->substring(0, dateTime->length() - 6)), "GMT"_s, offset}));
		} else {
			$assign(timeZone, $TimeZone::getDefault());
			$assign(zone, ""_s);
		}
	}
	$var($StringArray, formats, $new($StringArray, {
		$$str({ExsltDatetime::dt, zone}),
		ExsltDatetime::d,
		ExsltDatetime::gym,
		ExsltDatetime::gy
	}));
	try {
		$var($SimpleDateFormat, inFormat, $new($SimpleDateFormat, $$str({ExsltDatetime::t, zone})));
		inFormat->setLenient(false);
		$var($Date, d, inFormat->parse(dateTime));
		$var($SimpleDateFormat, outFormat, $new($SimpleDateFormat, $(strip($$str({yearSymbols, monthSymbols, daySymbols}), pattern))));
		outFormat->setTimeZone(timeZone);
		return outFormat->format(d);
	} catch ($ParseException&) {
		$catch();
	}
	for (int32_t i = 0; i < formats->length; ++i) {
		try {
			$var($SimpleDateFormat, inFormat, $new($SimpleDateFormat, formats->get(i)));
			inFormat->setLenient(false);
			$var($Date, d, inFormat->parse(dateTime));
			$var($SimpleDateFormat, outFormat, $new($SimpleDateFormat, pattern));
			outFormat->setTimeZone(timeZone);
			return outFormat->format(d);
		} catch ($ParseException&) {
			$catch();
		}
	}
	try {
		$var($SimpleDateFormat, inFormat, $new($SimpleDateFormat, ExsltDatetime::gmd));
		inFormat->setLenient(false);
		$var($Date, d, inFormat->parse(dateTime));
		$var($SimpleDateFormat, outFormat, $new($SimpleDateFormat, $(strip(yearSymbols, pattern))));
		outFormat->setTimeZone(timeZone);
		return outFormat->format(d);
	} catch ($ParseException&) {
		$catch();
	}
	try {
		$var($SimpleDateFormat, inFormat, $new($SimpleDateFormat, ExsltDatetime::gm));
		inFormat->setLenient(false);
		$var($Date, d, inFormat->parse(dateTime));
		$var($SimpleDateFormat, outFormat, $new($SimpleDateFormat, $(strip(yearSymbols, pattern))));
		outFormat->setTimeZone(timeZone);
		return outFormat->format(d);
	} catch ($ParseException&) {
		$catch();
	}
	try {
		$var($SimpleDateFormat, inFormat, $new($SimpleDateFormat, ExsltDatetime::gd));
		inFormat->setLenient(false);
		$var($Date, d, inFormat->parse(dateTime));
		$var($SimpleDateFormat, outFormat, $new($SimpleDateFormat, $(strip($$str({yearSymbols, monthSymbols}), pattern))));
		outFormat->setTimeZone(timeZone);
		return outFormat->format(d);
	} catch ($ParseException&) {
		$catch();
	}
	return ExsltDatetime::EMPTY_STR;
}

$String* ExsltDatetime::strip($String* symbols, $String* pattern) {
	$init(ExsltDatetime);
	int32_t quoteSemaphore = 0;
	int32_t i = 0;
	$var($StringBuffer, result, $new($StringBuffer, $nc(pattern)->length()));
	while (i < $nc(pattern)->length()) {
		char16_t ch = pattern->charAt(i);
		if (ch == u'\'') {
			int32_t endQuote = pattern->indexOf((int32_t)u'\'', i + 1);
			if (endQuote == -1) {
				endQuote = pattern->length();
			}
			result->append($(pattern->substring(i, endQuote)));
			i = endQuote++;
		} else if ($nc(symbols)->indexOf((int32_t)ch) > -1) {
			++i;
		} else {
			result->append(ch);
			++i;
		}
	}
	return result->toString();
}

ExsltDatetime::ExsltDatetime() {
}

void clinit$ExsltDatetime($Class* class$) {
	$assignStatic(ExsltDatetime::dt, "yyyy-MM-dd\'T\'HH:mm:ss"_s);
	$assignStatic(ExsltDatetime::d, "yyyy-MM-dd"_s);
	$assignStatic(ExsltDatetime::gym, "yyyy-MM"_s);
	$assignStatic(ExsltDatetime::gy, "yyyy"_s);
	$assignStatic(ExsltDatetime::gmd, "--MM-dd"_s);
	$assignStatic(ExsltDatetime::gm, "--MM--"_s);
	$assignStatic(ExsltDatetime::gd, "---dd"_s);
	$assignStatic(ExsltDatetime::t, "HH:mm:ss"_s);
	$assignStatic(ExsltDatetime::EMPTY_STR, ""_s);
}

$Class* ExsltDatetime::load$($String* name, bool initialize) {
	$loadClass(ExsltDatetime, name, initialize, &_ExsltDatetime_ClassInfo_, clinit$ExsltDatetime, allocate$ExsltDatetime);
	return class$;
}

$Class* ExsltDatetime::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com