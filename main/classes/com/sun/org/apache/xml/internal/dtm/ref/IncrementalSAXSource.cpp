#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>

#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$MethodInfo _IncrementalSAXSource_MethodInfo_[] = {
	{"deliverMoreNodes", "(Z)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLexicalHandler", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"startParse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _IncrementalSAXSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource",
	nullptr,
	nullptr,
	nullptr,
	_IncrementalSAXSource_MethodInfo_
};

$Object* allocate$IncrementalSAXSource($Class* clazz) {
	return $of($alloc(IncrementalSAXSource));
}

$Class* IncrementalSAXSource::load$($String* name, bool initialize) {
	$loadClass(IncrementalSAXSource, name, initialize, &_IncrementalSAXSource_ClassInfo_, allocate$IncrementalSAXSource);
	return class$;
}

$Class* IncrementalSAXSource::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com