#include <com/sun/org/apache/xml/internal/serializer/utils/URI.h>

#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/URI$MalformedURIException.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef DEBUG
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#undef ER_FRAG_FOR_GENERIC_URI
#undef ER_FRAG_INVALID_CHAR
#undef ER_FRAG_WHEN_PATH_NULL
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#undef ER_INVALID_PORT
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#undef ER_NO_PORT_IF_NO_HOST
#undef ER_NO_QUERY_STRING_IN_PATH
#undef ER_NO_SCHEME_INURI
#undef ER_NO_SCHEME_IN_URI
#undef ER_NO_USERINFO_IF_NO_HOST
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#undef ER_PATH_INVALID_CHAR
#undef ER_PORT_WHEN_HOST_NULL
#undef ER_SCHEME_FROM_NULL_STRING
#undef ER_SCHEME_NOT_CONFORMANT
#undef ER_SCHEME_REQUIRED
#undef MARK_CHARACTERS
#undef RESERVED_CHARACTERS
#undef SCHEME_CHARACTERS
#undef URI
#undef USERINFO_CHARACTERS

using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $URI$MalformedURIException = ::com::sun::org::apache::xml::internal::serializer::utils::URI$MalformedURIException;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$FieldInfo _URI_FieldInfo_[] = {
	{"RESERVED_CHARACTERS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URI, RESERVED_CHARACTERS)},
	{"MARK_CHARACTERS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URI, MARK_CHARACTERS)},
	{"SCHEME_CHARACTERS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URI, SCHEME_CHARACTERS)},
	{"USERINFO_CHARACTERS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URI, USERINFO_CHARACTERS)},
	{"m_scheme", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_scheme)},
	{"m_userinfo", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_userinfo)},
	{"m_host", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_host)},
	{"m_port", "I", nullptr, $PRIVATE, $field(URI, m_port)},
	{"m_path", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_path)},
	{"m_queryString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_queryString)},
	{"m_fragment", "Ljava/lang/String;", nullptr, $PRIVATE, $field(URI, m_fragment)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC, $staticField(URI, DEBUG)},
	{}
};

$MethodInfo _URI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)()>(&URI::init$))},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/utils/URI;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)(URI*)>(&URI::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*)>(&URI::init$)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/utils/URI;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)(URI*,$String*)>(&URI::init$)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*,$String*)>(&URI::init$)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*,$String*,$String*,$String*,$String*)>(&URI::init$)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*,$String*,$String*,int32_t,$String*,$String*,$String*)>(&URI::init$)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"appendPath", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*)>(&URI::appendPath)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getFragment", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getFragment))},
	{"getHost", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getHost))},
	{"getPath", "(ZZ)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)(bool,bool)>(&URI::getPath))},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getPath))},
	{"getPort", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(URI::*)()>(&URI::getPort))},
	{"getQueryString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getQueryString))},
	{"getScheme", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getScheme))},
	{"getSchemeSpecificPart", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getSchemeSpecificPart))},
	{"getUserinfo", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getUserinfo))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initialize", "(Lcom/sun/org/apache/xml/internal/serializer/utils/URI;)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)(URI*)>(&URI::initialize))},
	{"initialize", "(Lcom/sun/org/apache/xml/internal/serializer/utils/URI;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)(URI*,$String*)>(&URI::initialize)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"initializeAuthority", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)($String*)>(&URI::initializeAuthority)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"initializePath", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)($String*)>(&URI::initializePath)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"initializeScheme", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)($String*)>(&URI::initializeScheme)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"isAlpha", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&URI::isAlpha))},
	{"isAlphanum", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&URI::isAlphanum))},
	{"isConformantSchemeName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&URI::isConformantSchemeName))},
	{"isDigit", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&URI::isDigit))},
	{"isGenericURI", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(URI::*)()>(&URI::isGenericURI))},
	{"isHex", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&URI::isHex))},
	{"isReservedCharacter", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&URI::isReservedCharacter))},
	{"isURIString", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&URI::isURIString))},
	{"isUnreservedCharacter", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&URI::isUnreservedCharacter))},
	{"isWellFormedAddress", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&URI::isWellFormedAddress))},
	{"setFragment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*)>(&URI::setFragment)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"setHost", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*)>(&URI::setHost)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"setPath", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*)>(&URI::setPath)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"setPort", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)(int32_t)>(&URI::setPort)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"setQueryString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*)>(&URI::setQueryString)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"setScheme", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*)>(&URI::setScheme)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"setUserinfo", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*)>(&URI::setUserinfo)), "com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _URI_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException", "com.sun.org.apache.xml.internal.serializer.utils.URI", "MalformedURIException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _URI_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.URI",
	"java.lang.Object",
	nullptr,
	_URI_FieldInfo_,
	_URI_MethodInfo_,
	nullptr,
	nullptr,
	_URI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException"
};

$Object* allocate$URI($Class* clazz) {
	return $of($alloc(URI));
}


$String* URI::RESERVED_CHARACTERS = nullptr;

$String* URI::MARK_CHARACTERS = nullptr;

$String* URI::SCHEME_CHARACTERS = nullptr;

$String* URI::USERINFO_CHARACTERS = nullptr;

bool URI::DEBUG = false;

void URI::init$() {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
}

void URI::init$(URI* p_other) {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
	initialize(p_other);
}

void URI::init$($String* p_uriSpec) {
	URI::init$((URI*)nullptr, p_uriSpec);
}

void URI::init$(URI* p_base, $String* p_uriSpec) {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
	initialize(p_base, p_uriSpec);
}

void URI::init$($String* p_scheme, $String* p_schemeSpecificPart) {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
	if (p_scheme == nullptr || $($nc(p_scheme)->trim())->length() == 0) {
		$throwNew($URI$MalformedURIException, "Cannot construct URI with null/empty scheme!"_s);
	}
	if (p_schemeSpecificPart == nullptr || $($nc(p_schemeSpecificPart)->trim())->length() == 0) {
		$throwNew($URI$MalformedURIException, "Cannot construct URI with null/empty scheme-specific part!"_s);
	}
	setScheme(p_scheme);
	setPath(p_schemeSpecificPart);
}

void URI::init$($String* p_scheme, $String* p_host, $String* p_path, $String* p_queryString, $String* p_fragment) {
	URI::init$(p_scheme, nullptr, p_host, -1, p_path, p_queryString, p_fragment);
}

void URI::init$($String* p_scheme, $String* p_userinfo, $String* p_host, int32_t p_port, $String* p_path, $String* p_queryString, $String* p_fragment) {
	$set(this, m_scheme, nullptr);
	$set(this, m_userinfo, nullptr);
	$set(this, m_host, nullptr);
	this->m_port = -1;
	$set(this, m_path, nullptr);
	$set(this, m_queryString, nullptr);
	$set(this, m_fragment, nullptr);
	if (p_scheme == nullptr || $($nc(p_scheme)->trim())->length() == 0) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_SCHEME_REQUIRED, nullptr)));
	}
	if (p_host == nullptr) {
		if (p_userinfo != nullptr) {
			$init($Utils);
			$init($MsgKey);
			$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_NO_USERINFO_IF_NO_HOST, nullptr)));
		}
		if (p_port != -1) {
			$init($Utils);
			$init($MsgKey);
			$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_NO_PORT_IF_NO_HOST, nullptr)));
		}
	}
	if (p_path != nullptr) {
		if (p_path->indexOf((int32_t)u'?') != -1 && p_queryString != nullptr) {
			$init($Utils);
			$init($MsgKey);
			$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_NO_QUERY_STRING_IN_PATH, nullptr)));
		}
		if (p_path->indexOf((int32_t)u'#') != -1 && p_fragment != nullptr) {
			$init($Utils);
			$init($MsgKey);
			$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH, nullptr)));
		}
	}
	setScheme(p_scheme);
	setHost(p_host);
	setPort(p_port);
	setUserinfo(p_userinfo);
	setPath(p_path);
	setQueryString(p_queryString);
	setFragment(p_fragment);
}

void URI::initialize(URI* p_other) {
	$set(this, m_scheme, $nc(p_other)->getScheme());
	$set(this, m_userinfo, p_other->getUserinfo());
	$set(this, m_host, p_other->getHost());
	this->m_port = p_other->getPort();
	$set(this, m_path, p_other->getPath());
	$set(this, m_queryString, p_other->getQueryString());
	$set(this, m_fragment, p_other->getFragment());
}

void URI::initialize(URI* p_base, $String* p_uriSpec) {
	if (p_base == nullptr && (p_uriSpec == nullptr || $($nc(p_uriSpec)->trim())->length() == 0)) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS, nullptr)));
	}
	if (p_uriSpec == nullptr || $($nc(p_uriSpec)->trim())->length() == 0) {
		initialize(p_base);
		return;
	}
	$var($String, uriSpec, $nc(p_uriSpec)->trim());
	int32_t uriSpecLen = uriSpec->length();
	int32_t index = 0;
	int32_t colonIndex = uriSpec->indexOf((int32_t)u':');
	if (colonIndex < 0) {
		if (p_base == nullptr) {
			$init($Utils);
			$init($MsgKey);
			$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_NO_SCHEME_IN_URI, $$new($ObjectArray, {$of(uriSpec)}))));
		}
	} else {
		initializeScheme(uriSpec);
		$assign(uriSpec, uriSpec->substring(colonIndex + 1));
		uriSpecLen = uriSpec->length();
	}
	if (((index + 1) < uriSpecLen) && ($(uriSpec->substring(index))->startsWith("//"_s))) {
		index += 2;
		int32_t startPos = index;
		char16_t testChar = u'\0';
		while (index < uriSpecLen) {
			testChar = uriSpec->charAt(index);
			if (testChar == u'/' || testChar == u'?' || testChar == u'#') {
				break;
			}
			++index;
		}
		if (index > startPos) {
			initializeAuthority($(uriSpec->substring(startPos, index)));
		} else {
			$set(this, m_host, ""_s);
		}
	}
	initializePath($(uriSpec->substring(index)));
	if (p_base != nullptr) {
		if ($nc(this->m_path)->length() == 0 && this->m_scheme == nullptr && this->m_host == nullptr) {
			$set(this, m_scheme, p_base->getScheme());
			$set(this, m_userinfo, p_base->getUserinfo());
			$set(this, m_host, p_base->getHost());
			this->m_port = p_base->getPort();
			$set(this, m_path, p_base->getPath());
			if (this->m_queryString == nullptr) {
				$set(this, m_queryString, p_base->getQueryString());
			}
			return;
		}
		if (this->m_scheme == nullptr) {
			$set(this, m_scheme, p_base->getScheme());
		}
		if (this->m_host == nullptr) {
			$set(this, m_userinfo, p_base->getUserinfo());
			$set(this, m_host, p_base->getHost());
			this->m_port = p_base->getPort();
		} else {
			return;
		}
		bool var$0 = $nc(this->m_path)->length() > 0;
		if (var$0 && $nc(this->m_path)->startsWith("/"_s)) {
			return;
		}
		$var($String, path, ""_s);
		$var($String, basePath, p_base->getPath());
		if (basePath != nullptr) {
			int32_t lastSlash = basePath->lastIndexOf((int32_t)u'/');
			if (lastSlash != -1) {
				$assign(path, basePath->substring(0, lastSlash + 1));
			}
		}
		$assign(path, path->concat(this->m_path));
		index = -1;
		while ((index = path->indexOf("/./"_s)) != -1) {
			$assign(path, $(path->substring(0, index + 1))->concat($(path->substring(index + 3))));
		}
		if (path->endsWith("/."_s)) {
			$assign(path, path->substring(0, path->length() - 1));
		}
		index = -1;
		int32_t segIndex = -1;
		$var($String, tempString, nullptr);
		while ((index = path->indexOf("/../"_s)) > 0) {
			$assign(tempString, path->substring(0, path->indexOf("/../"_s)));
			segIndex = tempString->lastIndexOf((int32_t)u'/');
			if (segIndex != -1) {
				if (!$(tempString->substring(segIndex++))->equals(".."_s)) {
					$assign(path, $(path->substring(0, segIndex))->concat($(path->substring(index + 4))));
				}
			}
		}
		if (path->endsWith("/.."_s)) {
			$assign(tempString, path->substring(0, path->length() - 3));
			segIndex = tempString->lastIndexOf((int32_t)u'/');
			if (segIndex != -1) {
				$assign(path, path->substring(0, segIndex + 1));
			}
		}
		$set(this, m_path, path);
	}
}

void URI::initializeScheme($String* p_uriSpec) {
	int32_t uriSpecLen = $nc(p_uriSpec)->length();
	int32_t index = 0;
	$var($String, scheme, nullptr);
	char16_t testChar = u'\0';
	while (index < uriSpecLen) {
		testChar = p_uriSpec->charAt(index);
		if (testChar == u':' || testChar == u'/' || testChar == u'?' || testChar == u'#') {
			break;
		}
		++index;
	}
	$assign(scheme, p_uriSpec->substring(0, index));
	if (scheme->length() == 0) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_NO_SCHEME_INURI, nullptr)));
	} else {
		setScheme(scheme);
	}
}

void URI::initializeAuthority($String* p_uriSpec) {
	int32_t index = 0;
	int32_t start = 0;
	int32_t end = $nc(p_uriSpec)->length();
	char16_t testChar = u'\0';
	$var($String, userinfo, nullptr);
	if (p_uriSpec->indexOf((int32_t)u'@', start) != -1) {
		while (index < end) {
			testChar = p_uriSpec->charAt(index);
			if (testChar == u'@') {
				break;
			}
			++index;
		}
		$assign(userinfo, p_uriSpec->substring(start, index));
		++index;
	}
	$var($String, host, nullptr);
	start = index;
	while (index < end) {
		testChar = p_uriSpec->charAt(index);
		if (testChar == u':') {
			break;
		}
		++index;
	}
	$assign(host, p_uriSpec->substring(start, index));
	int32_t port = -1;
	if (host->length() > 0) {
		if (testChar == u':') {
			++index;
			start = index;
			while (index < end) {
				++index;
			}
			$var($String, portStr, p_uriSpec->substring(start, index));
			if (portStr->length() > 0) {
				for (int32_t i = 0; i < portStr->length(); ++i) {
					if (!isDigit(portStr->charAt(i))) {
						$throwNew($URI$MalformedURIException, $$str({portStr, " is invalid. Port should only contain digits!"_s}));
					}
				}
				try {
					port = $Integer::parseInt(portStr);
				} catch ($NumberFormatException&) {
					$catch();
				}
			}
		}
	}
	setHost(host);
	setPort(port);
	setUserinfo(userinfo);
}

void URI::initializePath($String* p_uriSpec) {
	if (p_uriSpec == nullptr) {
		$throwNew($URI$MalformedURIException, "Cannot initialize path from null string!"_s);
	}
	int32_t index = 0;
	int32_t start = 0;
	int32_t end = $nc(p_uriSpec)->length();
	char16_t testChar = u'\0';
	while (index < end) {
		testChar = p_uriSpec->charAt(index);
		if (testChar == u'?' || testChar == u'#') {
			break;
		}
		if (testChar == u'%') {
			bool var$0 = index + 2 >= end || !isHex(p_uriSpec->charAt(index + 1));
			if (var$0 || !isHex(p_uriSpec->charAt(index + 2))) {
				$init($Utils);
				$init($MsgKey);
				$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, nullptr)));
			}
		} else {
			bool var$2 = !isReservedCharacter(testChar);
			if (var$2 && !isUnreservedCharacter(testChar)) {
				if (u'\\' != testChar) {
					$init($Utils);
					$init($MsgKey);
					$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_PATH_INVALID_CHAR, $$new($ObjectArray, {$($of($String::valueOf(testChar)))}))));
				}
			}
		}
		++index;
	}
	$set(this, m_path, p_uriSpec->substring(start, index));
	if (testChar == u'?') {
		++index;
		start = index;
		while (index < end) {
			testChar = p_uriSpec->charAt(index);
			if (testChar == u'#') {
				break;
			}
			if (testChar == u'%') {
				bool var$3 = index + 2 >= end || !isHex(p_uriSpec->charAt(index + 1));
				if (var$3 || !isHex(p_uriSpec->charAt(index + 2))) {
					$throwNew($URI$MalformedURIException, "Query string contains invalid escape sequence!"_s);
				}
			} else {
				bool var$5 = !isReservedCharacter(testChar);
				if (var$5 && !isUnreservedCharacter(testChar)) {
					$throwNew($URI$MalformedURIException, $$str({"Query string contains invalid character:"_s, $$str(testChar)}));
				}
			}
			++index;
		}
		$set(this, m_queryString, p_uriSpec->substring(start, index));
	}
	if (testChar == u'#') {
		++index;
		start = index;
		while (index < end) {
			testChar = p_uriSpec->charAt(index);
			if (testChar == u'%') {
				bool var$6 = index + 2 >= end || !isHex(p_uriSpec->charAt(index + 1));
				if (var$6 || !isHex(p_uriSpec->charAt(index + 2))) {
					$throwNew($URI$MalformedURIException, "Fragment contains invalid escape sequence!"_s);
				}
			} else {
				bool var$8 = !isReservedCharacter(testChar);
				if (var$8 && !isUnreservedCharacter(testChar)) {
					$throwNew($URI$MalformedURIException, $$str({"Fragment contains invalid character:"_s, $$str(testChar)}));
				}
			}
			++index;
		}
		$set(this, m_fragment, p_uriSpec->substring(start, index));
	}
}

$String* URI::getScheme() {
	return this->m_scheme;
}

$String* URI::getSchemeSpecificPart() {
	$var($StringBuilder, schemespec, $new($StringBuilder));
	if (this->m_userinfo != nullptr || this->m_host != nullptr || this->m_port != -1) {
		schemespec->append("//"_s);
	}
	if (this->m_userinfo != nullptr) {
		schemespec->append(this->m_userinfo);
		schemespec->append(u'@');
	}
	if (this->m_host != nullptr) {
		schemespec->append(this->m_host);
	}
	if (this->m_port != -1) {
		schemespec->append(u':');
		schemespec->append(this->m_port);
	}
	if (this->m_path != nullptr) {
		schemespec->append((this->m_path));
	}
	if (this->m_queryString != nullptr) {
		schemespec->append(u'?');
		schemespec->append(this->m_queryString);
	}
	if (this->m_fragment != nullptr) {
		schemespec->append(u'#');
		schemespec->append(this->m_fragment);
	}
	return schemespec->toString();
}

$String* URI::getUserinfo() {
	return this->m_userinfo;
}

$String* URI::getHost() {
	return this->m_host;
}

int32_t URI::getPort() {
	return this->m_port;
}

$String* URI::getPath(bool p_includeQueryString, bool p_includeFragment) {
	$var($StringBuilder, pathString, $new($StringBuilder, this->m_path));
	if (p_includeQueryString && this->m_queryString != nullptr) {
		pathString->append(u'?');
		pathString->append(this->m_queryString);
	}
	if (p_includeFragment && this->m_fragment != nullptr) {
		pathString->append(u'#');
		pathString->append(this->m_fragment);
	}
	return pathString->toString();
}

$String* URI::getPath() {
	return this->m_path;
}

$String* URI::getQueryString() {
	return this->m_queryString;
}

$String* URI::getFragment() {
	return this->m_fragment;
}

void URI::setScheme($String* p_scheme) {
	if (p_scheme == nullptr) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_SCHEME_FROM_NULL_STRING, nullptr)));
	}
	if (!isConformantSchemeName(p_scheme)) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_SCHEME_NOT_CONFORMANT, nullptr)));
	}
	$set(this, m_scheme, $nc(p_scheme)->toLowerCase());
}

void URI::setUserinfo($String* p_userinfo) {
	if (p_userinfo == nullptr) {
		$set(this, m_userinfo, nullptr);
	} else {
		if (this->m_host == nullptr) {
			$throwNew($URI$MalformedURIException, "Userinfo cannot be set when host is null!"_s);
		}
		int32_t index = 0;
		int32_t end = $nc(p_userinfo)->length();
		char16_t testChar = u'\0';
		while (index < end) {
			testChar = p_userinfo->charAt(index);
			if (testChar == u'%') {
				bool var$0 = index + 2 >= end || !isHex(p_userinfo->charAt(index + 1));
				if (var$0 || !isHex(p_userinfo->charAt(index + 2))) {
					$throwNew($URI$MalformedURIException, "Userinfo contains invalid escape sequence!"_s);
				}
			} else {
				bool var$2 = !isUnreservedCharacter(testChar);
				if (var$2 && $nc(URI::USERINFO_CHARACTERS)->indexOf((int32_t)testChar) == -1) {
					$throwNew($URI$MalformedURIException, $$str({"Userinfo contains invalid character:"_s, $$str(testChar)}));
				}
			}
			++index;
		}
	}
	$set(this, m_userinfo, p_userinfo);
}

void URI::setHost($String* p_host) {
	if (p_host == nullptr || $($nc(p_host)->trim())->length() == 0) {
		$set(this, m_host, p_host);
		$set(this, m_userinfo, nullptr);
		this->m_port = -1;
	} else if (!isWellFormedAddress(p_host)) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED, nullptr)));
	}
	$set(this, m_host, p_host);
}

void URI::setPort(int32_t p_port) {
	if (p_port >= 0 && p_port <= 0x0000FFFF) {
		if (this->m_host == nullptr) {
			$init($Utils);
			$init($MsgKey);
			$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_PORT_WHEN_HOST_NULL, nullptr)));
		}
	} else if (p_port != -1) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_INVALID_PORT, nullptr)));
	}
	this->m_port = p_port;
}

void URI::setPath($String* p_path) {
	if (p_path == nullptr) {
		$set(this, m_path, nullptr);
		$set(this, m_queryString, nullptr);
		$set(this, m_fragment, nullptr);
	} else {
		initializePath(p_path);
	}
}

void URI::appendPath($String* p_addToPath) {
	if (p_addToPath == nullptr || $($nc(p_addToPath)->trim())->length() == 0) {
		return;
	}
	if (!isURIString(p_addToPath)) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_PATH_INVALID_CHAR, $$new($ObjectArray, {$of(p_addToPath)}))));
	}
	if (this->m_path == nullptr || $($nc(this->m_path)->trim())->length() == 0) {
		if ($nc(p_addToPath)->startsWith("/"_s)) {
			$set(this, m_path, p_addToPath);
		} else {
			$set(this, m_path, $str({"/"_s, p_addToPath}));
		}
	} else if ($nc(this->m_path)->endsWith("/"_s)) {
		if ($nc(p_addToPath)->startsWith("/"_s)) {
			$set(this, m_path, $nc(this->m_path)->concat($(p_addToPath->substring(1))));
		} else {
			$set(this, m_path, $nc(this->m_path)->concat(p_addToPath));
		}
	} else if (p_addToPath->startsWith("/"_s)) {
		$set(this, m_path, $nc(this->m_path)->concat(p_addToPath));
	} else {
		$set(this, m_path, $nc(this->m_path)->concat($$str({"/"_s, p_addToPath})));
	}
}

void URI::setQueryString($String* p_queryString) {
	if (p_queryString == nullptr) {
		$set(this, m_queryString, nullptr);
	} else if (!isGenericURI()) {
		$throwNew($URI$MalformedURIException, "Query string can only be set for a generic URI!"_s);
	} else if (getPath() == nullptr) {
		$throwNew($URI$MalformedURIException, "Query string cannot be set when path is null!"_s);
	} else if (!isURIString(p_queryString)) {
		$throwNew($URI$MalformedURIException, "Query string contains invalid character!"_s);
	} else {
		$set(this, m_queryString, p_queryString);
	}
}

void URI::setFragment($String* p_fragment) {
	if (p_fragment == nullptr) {
		$set(this, m_fragment, nullptr);
	} else if (!isGenericURI()) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_FRAG_FOR_GENERIC_URI, nullptr)));
	} else if (getPath() == nullptr) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_FRAG_WHEN_PATH_NULL, nullptr)));
	} else if (!isURIString(p_fragment)) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($URI$MalformedURIException, $($nc($Utils::messages)->createMessage($MsgKey::ER_FRAG_INVALID_CHAR, nullptr)));
	} else {
		$set(this, m_fragment, p_fragment);
	}
}

bool URI::equals(Object$* p_test) {
	if ($instanceOf(URI, p_test)) {
		$var(URI, testURI, $cast(URI, p_test));
		bool var$4 = ((this->m_scheme == nullptr && $nc(testURI)->m_scheme == nullptr) || (this->m_scheme != nullptr && $nc(testURI)->m_scheme != nullptr && $nc(this->m_scheme)->equals(testURI->m_scheme)));
		bool var$3 = var$4 && ((this->m_userinfo == nullptr && testURI->m_userinfo == nullptr) || (this->m_userinfo != nullptr && $nc(testURI)->m_userinfo != nullptr && $nc(this->m_userinfo)->equals(testURI->m_userinfo)));
		bool var$2 = var$3 && ((this->m_host == nullptr && testURI->m_host == nullptr) || (this->m_host != nullptr && $nc(testURI)->m_host != nullptr && $nc(this->m_host)->equals(testURI->m_host))) && this->m_port == testURI->m_port;
		bool var$1 = var$2 && ((this->m_path == nullptr && testURI->m_path == nullptr) || (this->m_path != nullptr && $nc(testURI)->m_path != nullptr && $nc(this->m_path)->equals(testURI->m_path)));
		bool var$0 = var$1 && ((this->m_queryString == nullptr && testURI->m_queryString == nullptr) || (this->m_queryString != nullptr && $nc(testURI)->m_queryString != nullptr && $nc(this->m_queryString)->equals(testURI->m_queryString)));
		if (var$0 && ((this->m_fragment == nullptr && testURI->m_fragment == nullptr) || (this->m_fragment != nullptr && $nc(testURI)->m_fragment != nullptr && $nc(this->m_fragment)->equals(testURI->m_fragment)))) {
			return true;
		}
	}
	return false;
}

int32_t URI::hashCode() {
	int32_t hash = 5;
	hash = 41 * hash + $Objects::hashCode(this->m_scheme);
	hash = 41 * hash + $Objects::hashCode(this->m_userinfo);
	hash = 41 * hash + $Objects::hashCode(this->m_host);
	hash = 41 * hash + this->m_port;
	hash = 41 * hash + $Objects::hashCode(this->m_path);
	hash = 41 * hash + $Objects::hashCode(this->m_queryString);
	hash = 41 * hash + $Objects::hashCode(this->m_fragment);
	return hash;
}

$String* URI::toString() {
	$var($StringBuilder, uriSpecString, $new($StringBuilder));
	if (this->m_scheme != nullptr) {
		uriSpecString->append(this->m_scheme);
		uriSpecString->append(u':');
	}
	uriSpecString->append($(getSchemeSpecificPart()));
	return uriSpecString->toString();
}

bool URI::isGenericURI() {
	return (this->m_host != nullptr);
}

bool URI::isConformantSchemeName($String* p_scheme) {
	$init(URI);
	if (p_scheme == nullptr || $($nc(p_scheme)->trim())->length() == 0) {
		return false;
	}
	if (!isAlpha($nc(p_scheme)->charAt(0))) {
		return false;
	}
	char16_t testChar = 0;
	for (int32_t i = 1; i < $nc(p_scheme)->length(); ++i) {
		testChar = p_scheme->charAt(i);
		bool var$0 = !isAlphanum(testChar);
		if (var$0 && $nc(URI::SCHEME_CHARACTERS)->indexOf((int32_t)testChar) == -1) {
			return false;
		}
	}
	return true;
}

bool URI::isWellFormedAddress($String* p_address) {
	$init(URI);
	if (p_address == nullptr) {
		return false;
	}
	$var($String, address, $nc(p_address)->trim());
	int32_t addrLength = address->length();
	if (addrLength == 0 || addrLength > 255) {
		return false;
	}
	bool var$0 = address->startsWith("."_s);
	if (var$0 || address->startsWith("-"_s)) {
		return false;
	}
	int32_t index = address->lastIndexOf((int32_t)u'.');
	if (address->endsWith("."_s)) {
		index = $(address->substring(0, index))->lastIndexOf((int32_t)u'.');
	}
	if (index + 1 < addrLength && isDigit(p_address->charAt(index + 1))) {
		char16_t testChar = 0;
		int32_t numDots = 0;
		for (int32_t i = 0; i < addrLength; ++i) {
			testChar = address->charAt(i);
			if (testChar == u'.') {
				bool var$1 = !isDigit(address->charAt(i - 1));
				if (var$1 || (i + 1 < addrLength && !isDigit(address->charAt(i + 1)))) {
					return false;
				}
				++numDots;
			} else if (!isDigit(testChar)) {
				return false;
			}
		}
		if (numDots != 3) {
			return false;
		}
	} else {
		char16_t testChar = 0;
		for (int32_t i = 0; i < addrLength; ++i) {
			testChar = address->charAt(i);
			if (testChar == u'.') {
				if (!isAlphanum(address->charAt(i - 1))) {
					return false;
				}
				if (i + 1 < addrLength && !isAlphanum(address->charAt(i + 1))) {
					return false;
				}
			} else if (!isAlphanum(testChar) && testChar != u'-') {
				return false;
			}
		}
	}
	return true;
}

bool URI::isDigit(char16_t p_char) {
	$init(URI);
	return p_char >= u'0' && p_char <= u'9';
}

bool URI::isHex(char16_t p_char) {
	$init(URI);
	return (isDigit(p_char) || (p_char >= u'a' && p_char <= u'f') || (p_char >= u'A' && p_char <= u'F'));
}

bool URI::isAlpha(char16_t p_char) {
	$init(URI);
	return ((p_char >= u'a' && p_char <= u'z') || (p_char >= u'A' && p_char <= u'Z'));
}

bool URI::isAlphanum(char16_t p_char) {
	$init(URI);
	bool var$0 = isAlpha(p_char);
	return (var$0 || isDigit(p_char));
}

bool URI::isReservedCharacter(char16_t p_char) {
	$init(URI);
	return $nc(URI::RESERVED_CHARACTERS)->indexOf((int32_t)p_char) != -1;
}

bool URI::isUnreservedCharacter(char16_t p_char) {
	$init(URI);
	bool var$0 = isAlphanum(p_char);
	return (var$0 || $nc(URI::MARK_CHARACTERS)->indexOf((int32_t)p_char) != -1);
}

bool URI::isURIString($String* p_uric) {
	$init(URI);
	if (p_uric == nullptr) {
		return false;
	}
	int32_t end = $nc(p_uric)->length();
	char16_t testChar = u'\0';
	for (int32_t i = 0; i < end; ++i) {
		testChar = p_uric->charAt(i);
		if (testChar == u'%') {
			bool var$0 = i + 2 >= end || !isHex(p_uric->charAt(i + 1));
			if (var$0 || !isHex(p_uric->charAt(i + 2))) {
				return false;
			} else {
				i += 2;
				continue;
			}
		}
		bool var$1 = isReservedCharacter(testChar);
		if (var$1 || isUnreservedCharacter(testChar)) {
			continue;
		} else {
			return false;
		}
	}
	return true;
}

void clinit$URI($Class* class$) {
	$assignStatic(URI::RESERVED_CHARACTERS, ";/?:@&=+$,"_s);
	$assignStatic(URI::MARK_CHARACTERS, "-_.!~*\'() "_s);
	$assignStatic(URI::SCHEME_CHARACTERS, "+-."_s);
	$assignStatic(URI::USERINFO_CHARACTERS, ";:&=+$,"_s);
	URI::DEBUG = false;
}

URI::URI() {
}

$Class* URI::load$($String* name, bool initialize) {
	$loadClass(URI, name, initialize, &_URI_ClassInfo_, clinit$URI, allocate$URI);
	return class$;
}

$Class* URI::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com