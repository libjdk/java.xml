#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>

#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/StringTokenizer.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef TRACE1
#undef TRACE2
#undef TRACE3

using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringTokenizer = ::java::util::StringTokenizer;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _Util_FieldInfo_[] = {
	{"filesep", "C", nullptr, $PRIVATE | $STATIC, $staticField(Util, filesep)},
	{}
};

$MethodInfo _Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Util::*)()>(&Util::init$))},
	{"TRACE1", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Util::TRACE1))},
	{"TRACE2", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Util::TRACE2))},
	{"TRACE3", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Util::TRACE3))},
	{"baseName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Util::baseName))},
	{"escape", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Util::escape))},
	{"getJCRefType", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Type*(*)($String*)>(&Util::getJCRefType))},
	{"getLocalName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Util::getLocalName))},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Util::getPrefix))},
	{"internalName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Util::internalName))},
	{"isLiteral", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Util::isLiteral))},
	{"isValidQNames", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Util::isValidQNames))},
	{"noExtName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Util::noExtName))},
	{"pathName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Util::pathName))},
	{"println", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Util::println))},
	{"println", "(C)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(char16_t)>(&Util::println))},
	{"replace", "(Ljava/lang/String;CLjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,char16_t,$String*)>(&Util::replace))},
	{"replace", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*,$StringArray*)>(&Util::replace))},
	{"toJavaName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Util::toJavaName))},
	{}
};

$ClassInfo _Util_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Util",
	"java.lang.Object",
	nullptr,
	_Util_FieldInfo_,
	_Util_MethodInfo_
};

$Object* allocate$Util($Class* clazz) {
	return $of($alloc(Util));
}

char16_t Util::filesep = 0;

void Util::init$() {
}

$String* Util::noExtName($String* name) {
	$init(Util);
	int32_t index = $nc(name)->lastIndexOf((int32_t)u'.');
	return name->substring(0, index >= 0 ? index : name->length());
}

$String* Util::baseName($String* name) {
	$init(Util);
	int32_t index = $nc(name)->lastIndexOf((int32_t)u'\\');
	if (index < 0) {
		index = name->lastIndexOf((int32_t)u'/');
	}
	if (index >= 0) {
		return name->substring(index + 1);
	} else {
		int32_t lastColonIndex = name->lastIndexOf((int32_t)u':');
		if (lastColonIndex > 0) {
			return name->substring(lastColonIndex + 1);
		} else {
			return name;
		}
	}
}

$String* Util::pathName($String* name) {
	$init(Util);
	int32_t index = $nc(name)->lastIndexOf((int32_t)u'/');
	if (index < 0) {
		index = name->lastIndexOf((int32_t)u'\\');
	}
	return name->substring(0, index + 1);
}

$String* Util::toJavaName($String* name) {
	$init(Util);
	if ($nc(name)->length() > 0) {
		$var($StringBuffer, result, $new($StringBuffer));
		char16_t ch = name->charAt(0);
		result->append($Character::isJavaIdentifierStart(ch) ? ch : u'_');
		int32_t n = name->length();
		for (int32_t i = 1; i < n; ++i) {
			ch = name->charAt(i);
			result->append($Character::isJavaIdentifierPart(ch) ? ch : u'_');
		}
		return result->toString();
	}
	return name;
}

$Type* Util::getJCRefType($String* signature) {
	$init(Util);
	return $Type::getType(signature);
}

$String* Util::internalName($String* cname) {
	$init(Util);
	return $nc(cname)->replace(u'.', Util::filesep);
}

void Util::println($String* s) {
	$init(Util);
	$init($System);
	$nc($System::out)->println(s);
}

void Util::println(char16_t ch) {
	$init(Util);
	$init($System);
	$nc($System::out)->println(ch);
}

void Util::TRACE1() {
	$init(Util);
	$init($System);
	$nc($System::out)->println("TRACE1"_s);
}

void Util::TRACE2() {
	$init(Util);
	$init($System);
	$nc($System::out)->println("TRACE2"_s);
}

void Util::TRACE3() {
	$init(Util);
	$init($System);
	$nc($System::out)->println("TRACE3"_s);
}

$String* Util::replace($String* base, char16_t ch, $String* str) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	return ($nc(base)->indexOf((int32_t)ch) < 0) ? base : replace(base, $($String::valueOf(ch)), $$new($StringArray, {str}));
}

$String* Util::replace($String* base, $String* delim, $StringArray* str) {
	$init(Util);
	int32_t len = $nc(base)->length();
	$var($StringBuffer, result, $new($StringBuffer));
	for (int32_t i = 0; i < len; ++i) {
		char16_t ch = base->charAt(i);
		int32_t k = $nc(delim)->indexOf((int32_t)ch);
		if (k >= 0) {
			result->append($nc(str)->get(k));
		} else {
			result->append(ch);
		}
	}
	return result->toString();
}

$String* Util::escape($String* input) {
	$init(Util);
	return replace(input, ".-/:"_s, $$new($StringArray, {
		"$dot$"_s,
		"$dash$"_s,
		"$slash$"_s,
		"$colon$"_s
	}));
}

$String* Util::getLocalName($String* qname) {
	$init(Util);
	int32_t index = $nc(qname)->lastIndexOf(":"_s);
	return (index > 0) ? qname->substring(index + 1) : qname;
}

$String* Util::getPrefix($String* qname) {
	$init(Util);
	int32_t index = $nc(qname)->lastIndexOf(":"_s);
	$init($Constants);
	return (index > 0) ? qname->substring(0, index) : $Constants::EMPTYSTRING;
}

bool Util::isLiteral($String* str) {
	$init(Util);
	int32_t length = $nc(str)->length();
	for (int32_t i = 0; i < length - 1; ++i) {
		bool var$0 = str->charAt(i) == u'{';
		if (var$0 && str->charAt(i + 1) != u'{') {
			return false;
		}
	}
	return true;
}

bool Util::isValidQNames($String* str) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if ((str != nullptr) && (!str->equals($Constants::EMPTYSTRING))) {
		$var($StringTokenizer, tokens, $new($StringTokenizer, str));
		while (tokens->hasMoreTokens()) {
			if (!$XML11Char::isXML11ValidQName($(tokens->nextToken()))) {
				return false;
			}
		}
	}
	return true;
}

void clinit$Util($Class* class$) {
	{
		$var($String, temp, $SecuritySupport::getSystemProperty("file.separator"_s, "/"_s));
		Util::filesep = $nc(temp)->charAt(0);
	}
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	$loadClass(Util, name, initialize, &_Util_ClassInfo_, clinit$Util, allocate$Util);
	return class$;
}

$Class* Util::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com