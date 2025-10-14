#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter_zh_CN.h>

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
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef XMLNS_DOMAIN
#undef XML_DOMAIN

using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace msg {

$FieldInfo _XMLMessageFormatter_zh_CN_FieldInfo_[] = {
	{"XML_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLMessageFormatter_zh_CN, XML_DOMAIN)},
	{"XMLNS_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLMessageFormatter_zh_CN, XMLNS_DOMAIN)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(XMLMessageFormatter_zh_CN, fLocale)},
	{"fResourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(XMLMessageFormatter_zh_CN, fResourceBundle)},
	{}
};

$MethodInfo _XMLMessageFormatter_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLMessageFormatter_zh_CN::*)()>(&XMLMessageFormatter_zh_CN::init$))},
	{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.util.MissingResourceException"},
	{}
};

$ClassInfo _XMLMessageFormatter_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.msg.XMLMessageFormatter_zh_CN",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.util.MessageFormatter",
	_XMLMessageFormatter_zh_CN_FieldInfo_,
	_XMLMessageFormatter_zh_CN_MethodInfo_
};

$Object* allocate$XMLMessageFormatter_zh_CN($Class* clazz) {
	return $of($alloc(XMLMessageFormatter_zh_CN));
}


$String* XMLMessageFormatter_zh_CN::XML_DOMAIN = nullptr;
$String* XMLMessageFormatter_zh_CN::XMLNS_DOMAIN = nullptr;

void XMLMessageFormatter_zh_CN::init$() {
	$set(this, fLocale, nullptr);
	$set(this, fResourceBundle, nullptr);
}

$String* XMLMessageFormatter_zh_CN::formatMessage($Locale* locale, $String* key, $ObjectArray* arguments) {
	if (this->fResourceBundle == nullptr || locale != this->fLocale) {
		if (locale != nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLMessages"_s, locale));
			$set(this, fLocale, locale);
		}
		if (this->fResourceBundle == nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLMessages"_s));
		}
	}
	$var($String, msg, nullptr);
	try {
		$assign(msg, $nc(this->fResourceBundle)->getString(key));
		if (arguments != nullptr) {
			try {
				$assign(msg, $MessageFormat::format(msg, arguments));
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$assign(msg, $nc(this->fResourceBundle)->getString("FormatFailed"_s));
				$plusAssign(msg, $$str({" "_s, $($nc(this->fResourceBundle)->getString(key))}));
			}
		}
	} catch ($MissingResourceException&) {
		$var($MissingResourceException, e, $catch());
		$assign(msg, $nc(this->fResourceBundle)->getString("BadMessageKey"_s));
		$throwNew($MissingResourceException, key, msg, key);
	}
	if (msg == nullptr) {
		$assign(msg, key);
		if ($nc(arguments)->length > 0) {
			$var($StringBuffer, str, $new($StringBuffer, msg));
			str->append(u'?');
			for (int32_t i = 0; i < arguments->length; ++i) {
				if (i > 0) {
					str->append(u'&');
				}
				str->append($($String::valueOf(arguments->get(i))));
			}
		}
	}
	return msg;
}

XMLMessageFormatter_zh_CN::XMLMessageFormatter_zh_CN() {
}

void clinit$XMLMessageFormatter_zh_CN($Class* class$) {
	$assignStatic(XMLMessageFormatter_zh_CN::XML_DOMAIN, "http://www.w3.org/TR/1998/REC-xml-19980210"_s);
	$assignStatic(XMLMessageFormatter_zh_CN::XMLNS_DOMAIN, "http://www.w3.org/TR/1999/REC-xml-names-19990114"_s);
}

$Class* XMLMessageFormatter_zh_CN::load$($String* name, bool initialize) {
	$loadClass(XMLMessageFormatter_zh_CN, name, initialize, &_XMLMessageFormatter_zh_CN_ClassInfo_, clinit$XMLMessageFormatter_zh_CN, allocate$XMLMessageFormatter_zh_CN);
	return class$;
}

$Class* XMLMessageFormatter_zh_CN::class$ = nullptr;

							} // msg
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com