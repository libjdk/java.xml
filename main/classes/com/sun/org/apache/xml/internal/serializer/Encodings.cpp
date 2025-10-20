#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>

#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/Encodings$EncodingInfos.h>
#include <java/io/BufferedWriter.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/IllegalCharsetNameException.h>
#include <java/nio/charset/UnsupportedCharsetException.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFAULT_MIME_ENCODING
#undef ENCODINGS_FILE
#undef ENCODINGS_PROP

using $EncodingInfo = ::com::sun::org::apache::xml::internal::serializer::EncodingInfo;
using $Encodings$EncodingInfos = ::com::sun::org::apache::xml::internal::serializer::Encodings$EncodingInfos;
using $BufferedWriter = ::java::io::BufferedWriter;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Charset = ::java::nio::charset::Charset;
using $IllegalCharsetNameException = ::java::nio::charset::IllegalCharsetNameException;
using $UnsupportedCharsetException = ::java::nio::charset::UnsupportedCharsetException;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _Encodings_FieldInfo_[] = {
	{"m_defaultLastPrintable", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Encodings, m_defaultLastPrintable)},
	{"ENCODINGS_FILE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Encodings, ENCODINGS_FILE)},
	{"ENCODINGS_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Encodings, ENCODINGS_PROP)},
	{"DEFAULT_MIME_ENCODING", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Encodings, DEFAULT_MIME_ENCODING)},
	{"_encodingInfos", "Lcom/sun/org/apache/xml/internal/serializer/Encodings$EncodingInfos;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Encodings, _encodingInfos)},
	{}
};

$MethodInfo _Encodings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Encodings::*)()>(&Encodings::init$))},
	{"convertJava2MimeEncoding", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Encodings::convertJava2MimeEncoding))},
	{"convertMime2JavaEncoding", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Encodings::convertMime2JavaEncoding))},
	{"getEncodingInfo", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;", nullptr, $STATIC, $method(static_cast<$EncodingInfo*(*)($String*)>(&Encodings::getEncodingInfo))},
	{"getLastPrintable", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Encodings::getLastPrintable))},
	{"getMimeEncoding", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&Encodings::getMimeEncoding))},
	{"getWriter", "(Ljava/io/OutputStream;Ljava/lang/String;)Ljava/io/Writer;", nullptr, $STATIC, $method(static_cast<$Writer*(*)($OutputStream*,$String*)>(&Encodings::getWriter)), "java.io.UnsupportedEncodingException"},
	{"isHighUTF16Surrogate", "(C)Z", nullptr, $STATIC, $method(static_cast<bool(*)(char16_t)>(&Encodings::isHighUTF16Surrogate))},
	{"isLowUTF16Surrogate", "(C)Z", nullptr, $STATIC, $method(static_cast<bool(*)(char16_t)>(&Encodings::isLowUTF16Surrogate))},
	{"isRecognizedEncoding", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Encodings::isRecognizedEncoding))},
	{"toCodePoint", "(CC)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(char16_t,char16_t)>(&Encodings::toCodePoint))},
	{"toCodePoint", "(C)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&Encodings::toCodePoint))},
	{"toUpperCaseFast", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Encodings::toUpperCaseFast))},
	{}
};

$InnerClassInfo _Encodings_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.Encodings$EncodingInfos", "com.sun.org.apache.xml.internal.serializer.Encodings", "EncodingInfos", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Encodings_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.Encodings",
	"java.lang.Object",
	nullptr,
	_Encodings_FieldInfo_,
	_Encodings_MethodInfo_,
	nullptr,
	nullptr,
	_Encodings_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.Encodings$EncodingInfos"
};

$Object* allocate$Encodings($Class* clazz) {
	return $of($alloc(Encodings));
}


$String* Encodings::ENCODINGS_FILE = nullptr;

$String* Encodings::ENCODINGS_PROP = nullptr;

$String* Encodings::DEFAULT_MIME_ENCODING = nullptr;
$Encodings$EncodingInfos* Encodings::_encodingInfos = nullptr;

void Encodings::init$() {
}

$Writer* Encodings::getWriter($OutputStream* output, $String* encoding) {
	$init(Encodings);
	$useLocalCurrentObjectStackCache();
	$var($EncodingInfo, ei, $nc(Encodings::_encodingInfos)->findEncoding($(toUpperCaseFast(encoding))));
	if (ei != nullptr) {
		try {
			return $new($BufferedWriter, $$new($OutputStreamWriter, output, ei->javaName));
		} catch ($UnsupportedEncodingException&) {
			$catch();
		}
	}
	return $new($BufferedWriter, $$new($OutputStreamWriter, output, encoding));
}

int32_t Encodings::getLastPrintable() {
	$init(Encodings);
	return Encodings::m_defaultLastPrintable;
}

$EncodingInfo* Encodings::getEncodingInfo($String* encoding) {
	$init(Encodings);
	$useLocalCurrentObjectStackCache();
	$var($EncodingInfo, ei, nullptr);
	$var($String, normalizedEncoding, toUpperCaseFast(encoding));
	$assign(ei, $nc(Encodings::_encodingInfos)->findEncoding(normalizedEncoding));
	if (ei == nullptr) {
		try {
			$var($Charset, c, $Charset::forName(encoding));
			$var($String, name, $nc(c)->name());
			$assign(ei, $new($EncodingInfo, name, name));
			$nc(Encodings::_encodingInfos)->putEncoding(normalizedEncoding, ei);
		} catch ($IllegalCharsetNameException&) {
			$var($IllegalArgumentException, x, $catch());
			$assign(ei, $new($EncodingInfo, nullptr, nullptr));
		} catch ($UnsupportedCharsetException&) {
			$var($IllegalArgumentException, x, $catch());
			$assign(ei, $new($EncodingInfo, nullptr, nullptr));
		}
	}
	return ei;
}

bool Encodings::isRecognizedEncoding($String* encoding) {
	$init(Encodings);
	$useLocalCurrentObjectStackCache();
	$var($EncodingInfo, ei, nullptr);
	$var($String, normalizedEncoding, toUpperCaseFast(encoding));
	$assign(ei, $nc(Encodings::_encodingInfos)->findEncoding(normalizedEncoding));
	if (ei != nullptr) {
		return true;
	}
	return false;
}

$String* Encodings::toUpperCaseFast($String* s) {
	$init(Encodings);
	$useLocalCurrentObjectStackCache();
	bool different = false;
	int32_t mx = $nc(s)->length();
	$var($chars, chars, $new($chars, mx));
	for (int32_t i = 0; i < mx; ++i) {
		char16_t ch = s->charAt(i);
		if (u'a' <= ch && ch <= u'z') {
			ch = (char16_t)(ch + (u'A' - u'a'));
			different = true;
		}
		chars->set(i, ch);
	}
	$var($String, upper, nullptr);
	if (different) {
		$assign(upper, $String::valueOf(chars));
	} else {
		$assign(upper, s);
	}
	return upper;
}

$String* Encodings::getMimeEncoding($String* encoding$renamed) {
	$init(Encodings);
	$useLocalCurrentObjectStackCache();
	$var($String, encoding, encoding$renamed);
	if (nullptr == encoding) {
		try {
			$assign(encoding, $SecuritySupport::getSystemProperty("file.encoding"_s, "UTF8"_s));
			if (nullptr != encoding) {
				bool var$2 = encoding->equalsIgnoreCase("Cp1252"_s);
				bool var$1 = var$2 || encoding->equalsIgnoreCase("ISO8859_1"_s);
				bool var$0 = var$1 || encoding->equalsIgnoreCase("8859_1"_s);
				$var($String, jencoding, (var$0 || encoding->equalsIgnoreCase("UTF8"_s)) ? Encodings::DEFAULT_MIME_ENCODING : convertJava2MimeEncoding(encoding));
				$assign(encoding, (nullptr != jencoding) ? jencoding : Encodings::DEFAULT_MIME_ENCODING);
			} else {
				$assign(encoding, Encodings::DEFAULT_MIME_ENCODING);
			}
		} catch ($SecurityException&) {
			$var($SecurityException, se, $catch());
			$assign(encoding, Encodings::DEFAULT_MIME_ENCODING);
		}
	} else {
		$assign(encoding, convertJava2MimeEncoding(encoding));
	}
	return encoding;
}

$String* Encodings::convertJava2MimeEncoding($String* encoding) {
	$init(Encodings);
	$useLocalCurrentObjectStackCache();
	$var($EncodingInfo, enc, $nc(Encodings::_encodingInfos)->getEncodingFromJavaKey($(toUpperCaseFast(encoding))));
	if (nullptr != enc) {
		return enc->name;
	}
	return encoding;
}

$String* Encodings::convertMime2JavaEncoding($String* encoding) {
	$init(Encodings);
	$useLocalCurrentObjectStackCache();
	$var($EncodingInfo, info, $nc(Encodings::_encodingInfos)->findEncoding($(toUpperCaseFast(encoding))));
	return info != nullptr ? $nc(info)->javaName : encoding;
}

bool Encodings::isHighUTF16Surrogate(char16_t ch) {
	$init(Encodings);
	return ((char16_t)0xD800 <= ch && ch <= (char16_t)0xDBFF);
}

bool Encodings::isLowUTF16Surrogate(char16_t ch) {
	$init(Encodings);
	return ((char16_t)0xDC00 <= ch && ch <= (char16_t)0xDFFF);
}

int32_t Encodings::toCodePoint(char16_t highSurrogate, char16_t lowSurrogate) {
	$init(Encodings);
	int32_t codePoint = ((highSurrogate - 0x0000D800) << 10) + (lowSurrogate - 0x0000DC00) + 0x00010000;
	return codePoint;
}

int32_t Encodings::toCodePoint(char16_t ch) {
	$init(Encodings);
	int32_t codePoint = ch;
	return codePoint;
}

void clinit$Encodings($Class* class$) {
	$assignStatic(Encodings::ENCODINGS_FILE, "com/sun/org/apache/xml/internal/serializer/Encodings.properties"_s);
	$assignStatic(Encodings::ENCODINGS_PROP, "com.sun.org.apache.xalan.internal.serialize.encodings"_s);
	$assignStatic(Encodings::DEFAULT_MIME_ENCODING, "UTF-8"_s);
	$assignStatic(Encodings::_encodingInfos, $new($Encodings$EncodingInfos));
}

Encodings::Encodings() {
}

$Class* Encodings::load$($String* name, bool initialize) {
	$loadClass(Encodings, name, initialize, &_Encodings_ClassInfo_, clinit$Encodings, allocate$Encodings);
	return class$;
}

$Class* Encodings::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com