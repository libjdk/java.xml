#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMDocumentHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/dom/DOMResult.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <jcpp.h>

using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMResult = ::javax::xml::transform::dom::DOMResult;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $Comment = ::org::w3c::dom::Comment;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$MethodInfo _DOMDocumentHandler_MethodInfo_[] = {
	{"cdata", "(Lorg/w3c/dom/CDATASection;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lorg/w3c/dom/Text;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lorg/w3c/dom/Comment;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Lorg/w3c/dom/DocumentType;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Lorg/w3c/dom/ProcessingInstruction;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDOMResult", "(Ljavax/xml/transform/dom/DOMResult;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setIgnoringCharacters", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMDocumentHandler_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.jaxp.validation.DOMDocumentHandler",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler",
	nullptr,
	_DOMDocumentHandler_MethodInfo_
};

$Object* allocate$DOMDocumentHandler($Class* clazz) {
	return $of($alloc(DOMDocumentHandler));
}

$Class* DOMDocumentHandler::load$($String* name, bool initialize) {
	$loadClass(DOMDocumentHandler, name, initialize, &_DOMDocumentHandler_ClassInfo_, allocate$DOMDocumentHandler);
	return class$;
}

$Class* DOMDocumentHandler::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com