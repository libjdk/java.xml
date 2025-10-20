#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>

#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef BAD_MSGFORMAT
#undef BAD_MSGKEY

using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$FieldInfo _Messages_FieldInfo_[] = {
	{"m_locale", "Ljava/util/Locale;", nullptr, $PRIVATE | $FINAL, $field(Messages, m_locale)},
	{"m_resourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(Messages, m_resourceBundle)},
	{"m_resourceBundleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Messages, m_resourceBundleName)},
	{}
};

$MethodInfo _Messages_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Messages::*)($String*)>(&Messages::init$))},
	{"createMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Messages::*)($String*,$ObjectArray*)>(&Messages::createMessage))},
	{"createMsg", "(Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(Messages::*)($ResourceBundle*,$String*,$ObjectArray*)>(&Messages::createMsg))},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PRIVATE, $method(static_cast<$Locale*(Messages::*)()>(&Messages::getLocale))},
	{}
};

$ClassInfo _Messages_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.Messages",
	"java.lang.Object",
	nullptr,
	_Messages_FieldInfo_,
	_Messages_MethodInfo_
};

$Object* allocate$Messages($Class* clazz) {
	return $of($alloc(Messages));
}

void Messages::init$($String* resourceBundle) {
	$set(this, m_locale, $Locale::getDefault());
	$set(this, m_resourceBundleName, resourceBundle);
}

$Locale* Messages::getLocale() {
	return this->m_locale;
}

$String* Messages::createMessage($String* msgKey, $ObjectArray* args) {
	if (this->m_resourceBundle == nullptr) {
		$set(this, m_resourceBundle, $SecuritySupport::getResourceBundle(this->m_resourceBundleName));
	}
	if (this->m_resourceBundle != nullptr) {
		return createMsg(this->m_resourceBundle, msgKey, args);
	} else {
		return $str({"Could not load the resource bundles: "_s, this->m_resourceBundleName});
	}
}

$String* Messages::createMsg($ResourceBundle* fResourceBundle, $String* msgKey$renamed, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, msgKey, msgKey$renamed);
	$var($String, fmsg, nullptr);
	bool throwex = false;
	$var($String, msg, nullptr);
	if (msgKey != nullptr) {
		$assign(msg, $nc(fResourceBundle)->getString(msgKey));
	} else {
		$assign(msgKey, ""_s);
	}
	if (msg == nullptr) {
		throwex = true;
		try {
			$init($MsgKey);
			$assign(msg, $MessageFormat::format($MsgKey::BAD_MSGKEY, $$new($ObjectArray, {
				$of(msgKey),
				$of(this->m_resourceBundleName)
			})));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$assign(msg, $str({"The message key \'"_s, msgKey, "\' is not in the message class \'"_s, this->m_resourceBundleName, "\'"_s}));
		}
	} else if (args != nullptr) {
		try {
			int32_t n = args->length;
			for (int32_t i = 0; i < n; ++i) {
				if (nullptr == args->get(i)) {
					args->set(i, ""_s);
				}
			}
			$assign(fmsg, $MessageFormat::format(msg, args));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			throwex = true;
			try {
				$init($MsgKey);
				$assign(fmsg, $MessageFormat::format($MsgKey::BAD_MSGFORMAT, $$new($ObjectArray, {
					$of(msgKey),
					$of(this->m_resourceBundleName)
				})));
				$plusAssign(fmsg, $$str({" "_s, msg}));
			} catch ($Exception&) {
				$var($Exception, formatfailed, $catch());
				$assign(fmsg, $str({"The format of message \'"_s, msgKey, "\' in message class \'"_s, this->m_resourceBundleName, "\' failed."_s}));
			}
		}
	} else {
		$assign(fmsg, msg);
	}
	if (throwex) {
		$throwNew($RuntimeException, fmsg);
	}
	return fmsg;
}

Messages::Messages() {
}

$Class* Messages::load$($String* name, bool initialize) {
	$loadClass(Messages, name, initialize, &_Messages_ClassInfo_, allocate$Messages);
	return class$;
}

$Class* Messages::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com