#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSDateTime.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/datatype/Duration.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Duration = ::javax::xml::datatype::Duration;
using $XMLGregorianCalendar = ::javax::xml::datatype::XMLGregorianCalendar;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

$MethodInfo _XSDateTime_MethodInfo_[] = {
	{"getDays", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDuration", "()Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHours", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLexicalValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinutes", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMonths", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSeconds", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getTimeZoneHours", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTimeZoneMinutes", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getXMLGregorianCalendar", "()Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT},
	{"getYears", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"hasTimeZone", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isNormalized", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"normalize", "()Lcom/sun/org/apache/xerces/internal/xs/datatypes/XSDateTime;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSDateTime_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSDateTime",
	nullptr,
	nullptr,
	nullptr,
	_XSDateTime_MethodInfo_
};

$Object* allocate$XSDateTime($Class* clazz) {
	return $of($alloc(XSDateTime));
}

$Class* XSDateTime::load$($String* name, bool initialize) {
	$loadClass(XSDateTime, name, initialize, &_XSDateTime_ClassInfo_, allocate$XSDateTime);
	return class$;
}

$Class* XSDateTime::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com