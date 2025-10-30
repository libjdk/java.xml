#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <jcpp.h>

using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$MethodInfo _XMLDocumentScanner_MethodInfo_[] = {
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"scanDocument", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _XMLDocumentScanner_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentScanner",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentSource",
	nullptr,
	_XMLDocumentScanner_MethodInfo_
};

$Object* allocate$XMLDocumentScanner($Class* clazz) {
	return $of($alloc(XMLDocumentScanner));
}

$Class* XMLDocumentScanner::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentScanner, name, initialize, &_XMLDocumentScanner_ClassInfo_, allocate$XMLDocumentScanner);
	return class$;
}

$Class* XMLDocumentScanner::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com