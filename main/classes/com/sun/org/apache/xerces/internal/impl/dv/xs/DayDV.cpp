#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DayDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/SchemaDateTimeException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <javax/xml/datatype/DatatypeFactory.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

#undef DAY_SIZE
#undef FIELD_UNDEFINED
#undef MONTH
#undef YEAR

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $AbstractDateTimeDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV;
using $AbstractDateTimeDV$DateTimeData = ::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV$DateTimeData;
using $SchemaDateTimeException = ::com::sun::org::apache::xerces::internal::impl::dv::xs::SchemaDateTimeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;
using $DatatypeFactory = ::javax::xml::datatype::DatatypeFactory;
using $XMLGregorianCalendar = ::javax::xml::datatype::XMLGregorianCalendar;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _DayDV_FieldInfo_[] = {
	{"DAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DayDV, DAY_SIZE)},
	{}
};

$MethodInfo _DayDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DayDV::*)()>(&DayDV::init$))},
	{"dateToString", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getXMLGregorianCalendar", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;)Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PROTECTED},
	{"parse", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV$DateTimeData;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDateTimeException"},
	{}
};

$ClassInfo _DayDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DayDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AbstractDateTimeDV",
	nullptr,
	_DayDV_FieldInfo_,
	_DayDV_MethodInfo_
};

$Object* allocate$DayDV($Class* clazz) {
	return $of($alloc(DayDV));
}

void DayDV::init$() {
	$AbstractDateTimeDV::init$();
}

$Object* DayDV::getActualValue($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of(parse(content));
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("gDay"_s)
		}));
	}
	$shouldNotReachHere();
}

$AbstractDateTimeDV$DateTimeData* DayDV::parse($String* str) {
	$var($AbstractDateTimeDV$DateTimeData, date, $new($AbstractDateTimeDV$DateTimeData, str, this));
	int32_t len = $nc(str)->length();
	bool var$1 = str->charAt(0) != u'-';
	bool var$0 = var$1 || str->charAt(1) != u'-';
	if (var$0 || str->charAt(2) != u'-') {
		$throwNew($SchemaDateTimeException, "Error in day parsing"_s);
	}
	date->year = $AbstractDateTimeDV::YEAR;
	date->month = $AbstractDateTimeDV::MONTH;
	date->day = parseInt(str, 3, 5);
	if (DayDV::DAY_SIZE < len) {
		if (!isNextCharUTCSign(str, DayDV::DAY_SIZE, len)) {
			$throwNew($SchemaDateTimeException, "Error in day parsing"_s);
		} else {
			getTimeZone(str, date, DayDV::DAY_SIZE, len);
		}
	}
	validateDateTime(date);
	saveUnnormalized(date);
	if (date->utc != 0 && date->utc != u'Z') {
		normalize(date);
	}
	date->position = 2;
	return date;
}

$String* DayDV::dateToString($AbstractDateTimeDV$DateTimeData* date) {
	$var($StringBuffer, message, $new($StringBuffer, 6));
	message->append(u'-');
	message->append(u'-');
	message->append(u'-');
	append(message, $nc(date)->day, 2);
	append(message, (char16_t)$nc(date)->utc, 0);
	return message->toString();
}

$XMLGregorianCalendar* DayDV::getXMLGregorianCalendar($AbstractDateTimeDV$DateTimeData* date) {
	$init($AbstractDateTimeDV);
	return $nc($AbstractDateTimeDV::datatypeFactory)->newXMLGregorianCalendar($DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $nc(date)->unNormDay, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, $DatatypeConstants::FIELD_UNDEFINED, date->hasTimeZone() ? date->timezoneHr * 60 + date->timezoneMin : $DatatypeConstants::FIELD_UNDEFINED);
}

DayDV::DayDV() {
}

$Class* DayDV::load$($String* name, bool initialize) {
	$loadClass(DayDV, name, initialize, &_DayDV_ClassInfo_, allocate$DayDV);
	return class$;
}

$Class* DayDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com