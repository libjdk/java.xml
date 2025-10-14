#include <com/sun/org/apache/xpath/internal/objects/XRTreeFragSelectWrapper.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XRTreeFrag.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CLASS_STRING
#undef ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XRTreeFrag = ::com::sun::org::apache::xpath::internal::objects::XRTreeFrag;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $XPATHMessages = ::com::sun::org::apache::xpath::internal::res::XPATHMessages;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XRTreeFragSelectWrapper_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XRTreeFragSelectWrapper, serialVersionUID)},
	{}
};

$MethodInfo _XRTreeFragSelectWrapper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $method(static_cast<void(XRTreeFragSelectWrapper::*)($Expression*)>(&XRTreeFragSelectWrapper::init$))},
	{"asNodeIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC},
	{"detach", "()V", nullptr, $PUBLIC},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"num", "()D", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"rtf", "()I", nullptr, $PUBLIC},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"xstr", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XRTreeFragSelectWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XRTreeFragSelectWrapper",
	"com.sun.org.apache.xpath.internal.objects.XRTreeFrag",
	nullptr,
	_XRTreeFragSelectWrapper_FieldInfo_,
	_XRTreeFragSelectWrapper_MethodInfo_
};

$Object* allocate$XRTreeFragSelectWrapper($Class* clazz) {
	return $of($alloc(XRTreeFragSelectWrapper));
}

void XRTreeFragSelectWrapper::init$($Expression* expr) {
	$XRTreeFrag::init$(expr);
}

void XRTreeFragSelectWrapper::fixupVariables($List* vars, int32_t globalsSize) {
	$nc(($cast($Expression, this->m_obj)))->fixupVariables(vars, globalsSize);
}

$XObject* XRTreeFragSelectWrapper::execute($XPathContext* xctxt) {
	$var($XObject, m_selected, nullptr);
	$assign(m_selected, $nc(($cast($Expression, this->m_obj)))->execute(xctxt));
	$nc(m_selected)->allowDetachToRelease(this->m_allowRelease);
	if (m_selected->getType() == $XObject::CLASS_STRING) {
		return m_selected;
	} else {
		return $new($XString, $(m_selected->str()));
	}
}

void XRTreeFragSelectWrapper::detach() {
	$init($XPATHErrorResources);
	$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, nullptr)));
}

double XRTreeFragSelectWrapper::num() {
	$init($XPATHErrorResources);
	$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, nullptr)));
	$shouldNotReachHere();
}

$XMLString* XRTreeFragSelectWrapper::xstr() {
	$init($XPATHErrorResources);
	$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, nullptr)));
	$shouldNotReachHere();
}

$String* XRTreeFragSelectWrapper::str() {
	$init($XPATHErrorResources);
	$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, nullptr)));
	$shouldNotReachHere();
}

int32_t XRTreeFragSelectWrapper::getType() {
	return $XObject::CLASS_STRING;
}

int32_t XRTreeFragSelectWrapper::rtf() {
	$init($XPATHErrorResources);
	$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, nullptr)));
	$shouldNotReachHere();
}

$DTMIterator* XRTreeFragSelectWrapper::asNodeIterator() {
	$init($XPATHErrorResources);
	$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, nullptr)));
	$shouldNotReachHere();
}

XRTreeFragSelectWrapper::XRTreeFragSelectWrapper() {
}

$Class* XRTreeFragSelectWrapper::load$($String* name, bool initialize) {
	$loadClass(XRTreeFragSelectWrapper, name, initialize, &_XRTreeFragSelectWrapper_ClassInfo_, allocate$XRTreeFragSelectWrapper);
	return class$;
}

$Class* XRTreeFragSelectWrapper::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com