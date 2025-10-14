#include <com/sun/org/apache/xml/internal/serializer/dom3/NamespaceSupport.h>

#include <com/sun/org/apache/xml/internal/serializer/dom3/NamespaceSupport$Prefixes.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

#undef PREFIX_XML
#undef PREFIX_XMLNS
#undef XMLNS_URI
#undef XML_URI

using $NamespaceSupport$Prefixes = ::com::sun::org::apache::xml::internal::serializer::dom3::NamespaceSupport$Prefixes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

$FieldInfo _NamespaceSupport_FieldInfo_[] = {
	{"PREFIX_XML", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(NamespaceSupport, PREFIX_XML)},
	{"PREFIX_XMLNS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(NamespaceSupport, PREFIX_XMLNS)},
	{"XML_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamespaceSupport, XML_URI)},
	{"XMLNS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamespaceSupport, XMLNS_URI)},
	{"fNamespace", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(NamespaceSupport, fNamespace)},
	{"fNamespaceSize", "I", nullptr, $PROTECTED, $field(NamespaceSupport, fNamespaceSize)},
	{"fContext", "[I", nullptr, $PROTECTED, $field(NamespaceSupport, fContext)},
	{"fCurrentContext", "I", nullptr, $PROTECTED, $field(NamespaceSupport, fCurrentContext)},
	{"fPrefixes", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(NamespaceSupport, fPrefixes)},
	{}
};

$MethodInfo _NamespaceSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NamespaceSupport::*)()>(&NamespaceSupport::init$))},
	{"declarePrefix", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"getAllPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getDeclaredPrefixAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDeclaredPrefixCount", "()I", nullptr, $PUBLIC},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"popContext", "()V", nullptr, $PUBLIC},
	{"pushContext", "()V", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NamespaceSupport_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.dom3.NamespaceSupport$Prefixes", "com.sun.org.apache.xml.internal.serializer.dom3.NamespaceSupport", "Prefixes", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _NamespaceSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.dom3.NamespaceSupport",
	"java.lang.Object",
	nullptr,
	_NamespaceSupport_FieldInfo_,
	_NamespaceSupport_MethodInfo_,
	nullptr,
	nullptr,
	_NamespaceSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.dom3.NamespaceSupport$Prefixes"
};

$Object* allocate$NamespaceSupport($Class* clazz) {
	return $of($alloc(NamespaceSupport));
}

$String* NamespaceSupport::PREFIX_XML = nullptr;
$String* NamespaceSupport::PREFIX_XMLNS = nullptr;

$String* NamespaceSupport::XML_URI = nullptr;

$String* NamespaceSupport::XMLNS_URI = nullptr;

void NamespaceSupport::init$() {
	$set(this, fNamespace, $new($StringArray, 16 * 2));
	$set(this, fContext, $new($ints, 8));
	$set(this, fPrefixes, $new($StringArray, 16));
}

void NamespaceSupport::reset() {
	this->fNamespaceSize = 0;
	this->fCurrentContext = 0;
	$nc(this->fContext)->set(this->fCurrentContext, this->fNamespaceSize);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, NamespaceSupport::PREFIX_XML);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, NamespaceSupport::XML_URI);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, NamespaceSupport::PREFIX_XMLNS);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, NamespaceSupport::XMLNS_URI);
	++this->fCurrentContext;
}

void NamespaceSupport::pushContext() {
	if (this->fCurrentContext + 1 == $nc(this->fContext)->length) {
		$var($ints, contextarray, $new($ints, $nc(this->fContext)->length * 2));
		$System::arraycopy(this->fContext, 0, contextarray, 0, $nc(this->fContext)->length);
		$set(this, fContext, contextarray);
	}
	$nc(this->fContext)->set(++this->fCurrentContext, this->fNamespaceSize);
}

void NamespaceSupport::popContext() {
	this->fNamespaceSize = $nc(this->fContext)->get(this->fCurrentContext--);
}

bool NamespaceSupport::declarePrefix($String* prefix, $String* uri) {
	if (prefix == NamespaceSupport::PREFIX_XML || prefix == NamespaceSupport::PREFIX_XMLNS) {
		return false;
	}
	for (int32_t i = this->fNamespaceSize; i > $nc(this->fContext)->get(this->fCurrentContext); i -= 2) {
		if ($nc($nc(this->fNamespace)->get(i - 2))->equals(prefix)) {
			$nc(this->fNamespace)->set(i - 1, uri);
			return true;
		}
	}
	if (this->fNamespaceSize == $nc(this->fNamespace)->length) {
		$var($StringArray, namespacearray, $new($StringArray, this->fNamespaceSize * 2));
		$System::arraycopy(this->fNamespace, 0, namespacearray, 0, this->fNamespaceSize);
		$set(this, fNamespace, namespacearray);
	}
	$nc(this->fNamespace)->set(this->fNamespaceSize++, prefix);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, uri);
	return true;
}

$String* NamespaceSupport::getURI($String* prefix) {
	for (int32_t i = this->fNamespaceSize; i > 0; i -= 2) {
		if ($nc($nc(this->fNamespace)->get(i - 2))->equals(prefix)) {
			return $nc(this->fNamespace)->get(i - 1);
		}
	}
	return nullptr;
}

$String* NamespaceSupport::getPrefix($String* uri) {
	for (int32_t i = this->fNamespaceSize; i > 0; i -= 2) {
		if ($nc($nc(this->fNamespace)->get(i - 1))->equals(uri)) {
			if ($nc($(getURI($nc(this->fNamespace)->get(i - 2))))->equals(uri)) {
				return $nc(this->fNamespace)->get(i - 2);
			}
		}
	}
	return nullptr;
}

int32_t NamespaceSupport::getDeclaredPrefixCount() {
	return (this->fNamespaceSize - $nc(this->fContext)->get(this->fCurrentContext)) / 2;
}

$String* NamespaceSupport::getDeclaredPrefixAt(int32_t index) {
	return $nc(this->fNamespace)->get($nc(this->fContext)->get(this->fCurrentContext) + index * 2);
}

$Enumeration* NamespaceSupport::getAllPrefixes() {
	int32_t count = 0;
	if ($nc(this->fPrefixes)->length < ($nc(this->fNamespace)->length / 2)) {
		$var($StringArray, prefixes, $new($StringArray, this->fNamespaceSize));
		$set(this, fPrefixes, prefixes);
	}
	$var($String, prefix, nullptr);
	bool unique = true;
	for (int32_t i = 2; i < (this->fNamespaceSize - 2); i += 2) {
		$assign(prefix, $nc(this->fNamespace)->get(i + 2));
		for (int32_t k = 0; k < count; ++k) {
			if ($nc(this->fPrefixes)->get(k) == prefix) {
				unique = false;
				break;
			}
		}
		if (unique) {
			$nc(this->fPrefixes)->set(count++, prefix);
		}
		unique = true;
	}
	return $new($NamespaceSupport$Prefixes, this, this->fPrefixes, count);
}

void clinit$NamespaceSupport($Class* class$) {
	$assignStatic(NamespaceSupport::PREFIX_XML, "xml"_s->intern());
	$assignStatic(NamespaceSupport::PREFIX_XMLNS, "xmlns"_s->intern());
	$assignStatic(NamespaceSupport::XML_URI, "http://www.w3.org/XML/1998/namespace"_s->intern());
	$assignStatic(NamespaceSupport::XMLNS_URI, "http://www.w3.org/2000/xmlns/"_s->intern());
}

NamespaceSupport::NamespaceSupport() {
}

$Class* NamespaceSupport::load$($String* name, bool initialize) {
	$loadClass(NamespaceSupport, name, initialize, &_NamespaceSupport_ClassInfo_, clinit$NamespaceSupport, allocate$NamespaceSupport);
	return class$;
}

$Class* NamespaceSupport::class$ = nullptr;

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com