#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>

#include <java/util/Enumeration.h>
#include <jcpp.h>

#undef XMLNS_URI
#undef XML_URI

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$FieldInfo _NamespaceContext_FieldInfo_[] = {
	{"XML_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamespaceContext, XML_URI)},
	{"XMLNS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamespaceContext, XMLNS_URI)},
	{}
};

$MethodInfo _NamespaceContext_MethodInfo_[] = {
	{"declarePrefix", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAllPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getDeclaredPrefixAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDeclaredPrefixCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"popContext", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"pushContext", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NamespaceContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.NamespaceContext",
	nullptr,
	nullptr,
	_NamespaceContext_FieldInfo_,
	_NamespaceContext_MethodInfo_
};

$Object* allocate$NamespaceContext($Class* clazz) {
	return $of($alloc(NamespaceContext));
}

$String* NamespaceContext::XML_URI = nullptr;
$String* NamespaceContext::XMLNS_URI = nullptr;

void clinit$NamespaceContext($Class* class$) {
	$assignStatic(NamespaceContext::XML_URI, "http://www.w3.org/XML/1998/namespace"_s->intern());
	$assignStatic(NamespaceContext::XMLNS_URI, "http://www.w3.org/2000/xmlns/"_s->intern());
}

$Class* NamespaceContext::load$($String* name, bool initialize) {
	$loadClass(NamespaceContext, name, initialize, &_NamespaceContext_ClassInfo_, clinit$NamespaceContext, allocate$NamespaceContext);
	return class$;
}

$Class* NamespaceContext::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com