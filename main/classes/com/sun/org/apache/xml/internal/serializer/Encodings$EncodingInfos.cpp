#include <com/sun/org/apache/xml/internal/serializer/Encodings$EncodingInfos.h>

#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/WrappedRuntimeException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/nio/charset/Charset.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

using $EncodingInfo = ::com::sun::org::apache::xml::internal::serializer::EncodingInfo;
using $Encodings = ::com::sun::org::apache::xml::internal::serializer::Encodings;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::serializer::utils::WrappedRuntimeException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $Charset = ::java::nio::charset::Charset;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _Encodings$EncodingInfos_FieldInfo_[] = {
	{"_encodingTableKeyJava", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;>;", $PRIVATE | $FINAL, $field(Encodings$EncodingInfos, _encodingTableKeyJava)},
	{"_encodingTableKeyMime", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;>;", $PRIVATE | $FINAL, $field(Encodings$EncodingInfos, _encodingTableKeyMime)},
	{"_encodingDynamicTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;>;", $PRIVATE | $FINAL, $field(Encodings$EncodingInfos, _encodingDynamicTable)},
	{}
};

$MethodInfo _Encodings$EncodingInfos_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Encodings$EncodingInfos::*)()>(&Encodings$EncodingInfos::init$))},
	{"findCharsetNameFor", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Encodings$EncodingInfos::*)($String*)>(&Encodings$EncodingInfos::findCharsetNameFor))},
	{"findCharsetNameFor", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Encodings$EncodingInfos::*)($String*,$StringArray*)>(&Encodings$EncodingInfos::findCharsetNameFor))},
	{"findEncoding", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;", nullptr, 0, $method(static_cast<$EncodingInfo*(Encodings$EncodingInfos::*)($String*)>(&Encodings$EncodingInfos::findEncoding))},
	{"getEncodingFromJavaKey", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;", nullptr, 0, $method(static_cast<$EncodingInfo*(Encodings$EncodingInfos::*)($String*)>(&Encodings$EncodingInfos::getEncodingFromJavaKey))},
	{"getEncodingFromMimeKey", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;", nullptr, 0, $method(static_cast<$EncodingInfo*(Encodings$EncodingInfos::*)($String*)>(&Encodings$EncodingInfos::getEncodingFromMimeKey))},
	{"loadEncodingInfo", "()V", nullptr, $PRIVATE, $method(static_cast<void(Encodings$EncodingInfos::*)()>(&Encodings$EncodingInfos::loadEncodingInfo))},
	{"loadProperties", "()Ljava/util/Properties;", nullptr, $PRIVATE, $method(static_cast<$Properties*(Encodings$EncodingInfos::*)()>(&Encodings$EncodingInfos::loadProperties)), "java.net.MalformedURLException,java.io.IOException"},
	{"openEncodingsFileStream", "()Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(Encodings$EncodingInfos::*)()>(&Encodings$EncodingInfos::openEncodingsFileStream)), "java.net.MalformedURLException,java.io.IOException"},
	{"parseMimeTypes", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(Encodings$EncodingInfos::*)($String*)>(&Encodings$EncodingInfos::parseMimeTypes))},
	{"putEncoding", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;)V", nullptr, 0, $method(static_cast<void(Encodings$EncodingInfos::*)($String*,$EncodingInfo*)>(&Encodings$EncodingInfos::putEncoding))},
	{}
};

$InnerClassInfo _Encodings$EncodingInfos_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.Encodings$EncodingInfos", "com.sun.org.apache.xml.internal.serializer.Encodings", "EncodingInfos", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Encodings$EncodingInfos_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.Encodings$EncodingInfos",
	"java.lang.Object",
	nullptr,
	_Encodings$EncodingInfos_FieldInfo_,
	_Encodings$EncodingInfos_MethodInfo_,
	nullptr,
	nullptr,
	_Encodings$EncodingInfos_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.Encodings"
};

$Object* allocate$Encodings$EncodingInfos($Class* clazz) {
	return $of($alloc(Encodings$EncodingInfos));
}

void Encodings$EncodingInfos::init$() {
	$set(this, _encodingTableKeyJava, $new($HashMap));
	$set(this, _encodingTableKeyMime, $new($HashMap));
	$set(this, _encodingDynamicTable, $Collections::synchronizedMap($$new($HashMap)));
	loadEncodingInfo();
}

$InputStream* Encodings$EncodingInfos::openEncodingsFileStream() {
	$useLocalCurrentObjectStackCache();
	$var($String, urlString, nullptr);
	$var($InputStream, is, nullptr);
	try {
		$assign(urlString, $SecuritySupport::getSystemProperty("com.sun.org.apache.xalan.internal.serialize.encodings"_s, ""_s));
	} catch ($SecurityException&) {
		$catch();
	}
	if (urlString != nullptr && urlString->length() > 0) {
		$var($URL, url, $new($URL, urlString));
		$assign(is, url->openStream());
	}
	if (is == nullptr) {
		$assign(is, $SecuritySupport::getResourceAsStream("com/sun/org/apache/xml/internal/serializer/Encodings.properties"_s));
	}
	return is;
}

$Properties* Encodings$EncodingInfos::loadProperties() {
	$useLocalCurrentObjectStackCache();
	$var($Properties, props, $new($Properties));
	{
		$var($InputStream, is, openEncodingsFileStream());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (is != nullptr) {
						props->load(is);
					} else {
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (is != nullptr) {
						try {
							is->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return props;
}

$StringArray* Encodings$EncodingInfos::parseMimeTypes($String* val) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(val)->indexOf((int32_t)u' ');
	if (pos < 0) {
		return $new($StringArray, {val});
	}
	$var($StringTokenizer, st, $new($StringTokenizer, $(val->substring(0, pos)), ","_s));
	$var($StringArray, values, $new($StringArray, st->countTokens()));
	for (int32_t i = 0; st->hasMoreTokens(); ++i) {
		values->set(i, $(st->nextToken()));
	}
	return values;
}

$String* Encodings$EncodingInfos::findCharsetNameFor($String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		return $nc($($Charset::forName(name)))->name();
	} catch ($Exception&) {
		$var($Exception, x, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* Encodings$EncodingInfos::findCharsetNameFor($String* javaName, $StringArray* mimes) {
	$useLocalCurrentObjectStackCache();
	$var($String, cs, findCharsetNameFor(javaName));
	if (cs != nullptr) {
		return javaName;
	}
	{
		$var($StringArray, arr$, mimes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, m, arr$->get(i$));
			{
				$assign(cs, findCharsetNameFor(m));
				if (cs != nullptr) {
					break;
				}
			}
		}
	}
	return cs;
}

void Encodings$EncodingInfos::loadEncodingInfo() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Properties, props, loadProperties());
		$var($Enumeration, keys, $nc(props)->keys());
		$var($Map, canonicals, $new($HashMap));
		while ($nc(keys)->hasMoreElements()) {
			$var($String, javaName, $cast($String, keys->nextElement()));
			$var($StringArray, mimes, parseMimeTypes($(props->getProperty(javaName))));
			$var($String, charsetName, findCharsetNameFor(javaName, mimes));
			if (charsetName != nullptr) {
				$var($String, kj, $Encodings::toUpperCaseFast(javaName));
				$var($String, kc, $Encodings::toUpperCaseFast(charsetName));
				for (int32_t i = 0; i < $nc(mimes)->length; ++i) {
					$var($String, mimeName, mimes->get(i));
					$var($String, km, $Encodings::toUpperCaseFast(mimeName));
					$var($EncodingInfo, info, $new($EncodingInfo, mimeName, charsetName));
					$nc(this->_encodingTableKeyMime)->put(km, info);
					if (!canonicals->containsKey(kc)) {
						canonicals->put(kc, info);
						$nc(this->_encodingTableKeyJava)->put(kc, info);
					}
					$nc(this->_encodingTableKeyJava)->put(kj, info);
				}
			} else {
			}
		}
		{
			$var($Iterator, i$, $nc($($nc(this->_encodingTableKeyJava)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$nc(e)->setValue($cast($EncodingInfo, $(canonicals->get($($Encodings::toUpperCaseFast($nc(($cast($EncodingInfo, $(e->getValue()))))->javaName))))));
				}
			}
		}
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, mue, $catch());
		$throwNew($WrappedRuntimeException, mue);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($WrappedRuntimeException, ioe);
	}
}

$EncodingInfo* Encodings$EncodingInfos::findEncoding($String* normalizedEncoding) {
	$var($EncodingInfo, info, $cast($EncodingInfo, $nc(this->_encodingTableKeyJava)->get(normalizedEncoding)));
	if (info == nullptr) {
		$assign(info, $cast($EncodingInfo, $nc(this->_encodingTableKeyMime)->get(normalizedEncoding)));
	}
	if (info == nullptr) {
		$assign(info, $cast($EncodingInfo, $nc(this->_encodingDynamicTable)->get(normalizedEncoding)));
	}
	return info;
}

$EncodingInfo* Encodings$EncodingInfos::getEncodingFromMimeKey($String* normalizedMimeName) {
	return $cast($EncodingInfo, $nc(this->_encodingTableKeyMime)->get(normalizedMimeName));
}

$EncodingInfo* Encodings$EncodingInfos::getEncodingFromJavaKey($String* normalizedJavaName) {
	return $cast($EncodingInfo, $nc(this->_encodingTableKeyJava)->get(normalizedJavaName));
}

void Encodings$EncodingInfos::putEncoding($String* key, $EncodingInfo* info) {
	$nc(this->_encodingDynamicTable)->put(key, info);
}

Encodings$EncodingInfos::Encodings$EncodingInfos() {
}

$Class* Encodings$EncodingInfos::load$($String* name, bool initialize) {
	$loadClass(Encodings$EncodingInfos, name, initialize, &_Encodings$EncodingInfos_ClassInfo_, allocate$Encodings$EncodingInfos);
	return class$;
}

$Class* Encodings$EncodingInfos::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com