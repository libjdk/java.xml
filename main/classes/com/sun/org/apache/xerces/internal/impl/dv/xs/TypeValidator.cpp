#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef EQUAL
#undef GREATER_THAN
#undef INDETERMINATE
#undef LESS_THAN
#undef USE_CODE_POINT_COUNT_FOR_STRING_LENGTH

using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _TypeValidator_FieldInfo_[] = {
	{"USE_CODE_POINT_COUNT_FOR_STRING_LENGTH", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TypeValidator, USE_CODE_POINT_COUNT_FOR_STRING_LENGTH)},
	{"LESS_THAN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeValidator, LESS_THAN)},
	{"EQUAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeValidator, EQUAL)},
	{"GREATER_THAN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeValidator, GREATER_THAN)},
	{"INDETERMINATE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeValidator, INDETERMINATE)},
	{}
};

$MethodInfo _TypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeValidator::*)()>(&TypeValidator::init$))},
	{"checkExtraRules", "(Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getCodePointLength", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TypeValidator::*)($String*)>(&TypeValidator::getCodePointLength))},
	{"getDataLength", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getDigit", "(C)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)(char16_t)>(&TypeValidator::getDigit))},
	{"getFractionDigits", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getTotalDigits", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"isDigit", "(C)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<bool(*)(char16_t)>(&TypeValidator::isDigit))},
	{"isIdentical", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	"java.lang.Object",
	nullptr,
	_TypeValidator_FieldInfo_,
	_TypeValidator_MethodInfo_
};

$Object* allocate$TypeValidator($Class* clazz) {
	return $of($alloc(TypeValidator));
}

bool TypeValidator::USE_CODE_POINT_COUNT_FOR_STRING_LENGTH = false;

void TypeValidator::init$() {
}

void TypeValidator::checkExtraRules(Object$* value, $ValidationContext* context) {
}

bool TypeValidator::isIdentical(Object$* value1, Object$* value2) {
	return $nc($of(value1))->equals(value2);
}

int32_t TypeValidator::compare(Object$* value1, Object$* value2) {
	return -1;
}

int32_t TypeValidator::getDataLength(Object$* value) {
	if ($instanceOf($String, value)) {
		$var($String, str, $cast($String, value));
		if (!TypeValidator::USE_CODE_POINT_COUNT_FOR_STRING_LENGTH) {
			return $nc(str)->length();
		}
		return getCodePointLength(str);
	}
	return -1;
}

int32_t TypeValidator::getTotalDigits(Object$* value) {
	return -1;
}

int32_t TypeValidator::getFractionDigits(Object$* value) {
	return -1;
}

int32_t TypeValidator::getCodePointLength($String* value) {
	int32_t len = $nc(value)->length();
	int32_t surrogatePairCount = 0;
	for (int32_t i = 0; i < len - 1; ++i) {
		if ($XMLChar::isHighSurrogate(value->charAt(i))) {
			if ($XMLChar::isLowSurrogate(value->charAt(++i))) {
				++surrogatePairCount;
			} else {
				--i;
			}
		}
	}
	return len - surrogatePairCount;
}

bool TypeValidator::isDigit(char16_t ch) {
	$init(TypeValidator);
	return ch >= u'0' && ch <= u'9';
}

int32_t TypeValidator::getDigit(char16_t ch) {
	$init(TypeValidator);
	return isDigit(ch) ? ch - u'0' : -1;
}

void clinit$TypeValidator($Class* class$) {
	TypeValidator::USE_CODE_POINT_COUNT_FOR_STRING_LENGTH = $Boolean::parseBoolean($($SecuritySupport::getSystemProperty("com.sun.org.apache.xerces.internal.impl.dv.xs.useCodePointCountForStringLength"_s, "false"_s)));
}

TypeValidator::TypeValidator() {
}

$Class* TypeValidator::load$($String* name, bool initialize) {
	$loadClass(TypeValidator, name, initialize, &_TypeValidator_ClassInfo_, clinit$TypeValidator, allocate$TypeValidator);
	return class$;
}

$Class* TypeValidator::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com