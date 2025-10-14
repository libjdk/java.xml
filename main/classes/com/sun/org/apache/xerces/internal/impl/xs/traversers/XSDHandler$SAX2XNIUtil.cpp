#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$SAX2XNIUtil.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $ErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$MethodInfo _XSDHandler$SAX2XNIUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XSDHandler$SAX2XNIUtil::*)()>(&XSDHandler$SAX2XNIUtil::init$))},
	{"createXMLParseException0", "(Lorg/xml/sax/SAXParseException;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XMLParseException*(*)($SAXParseException*)>(&XSDHandler$SAX2XNIUtil::createXMLParseException0))},
	{"createXNIException0", "(Lorg/xml/sax/SAXException;)Lcom/sun/org/apache/xerces/internal/xni/XNIException;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XNIException*(*)($SAXException*)>(&XSDHandler$SAX2XNIUtil::createXNIException0))},
	{}
};

$InnerClassInfo _XSDHandler$SAX2XNIUtil_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$SAX2XNIUtil", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler", "SAX2XNIUtil", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XSDHandler$SAX2XNIUtil_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$SAX2XNIUtil",
	"com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper",
	nullptr,
	nullptr,
	_XSDHandler$SAX2XNIUtil_MethodInfo_,
	nullptr,
	nullptr,
	_XSDHandler$SAX2XNIUtil_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler"
};

$Object* allocate$XSDHandler$SAX2XNIUtil($Class* clazz) {
	return $of($alloc(XSDHandler$SAX2XNIUtil));
}

void XSDHandler$SAX2XNIUtil::init$() {
	$ErrorHandlerWrapper::init$();
}

$XMLParseException* XSDHandler$SAX2XNIUtil::createXMLParseException0($SAXParseException* exception) {
	$init(XSDHandler$SAX2XNIUtil);
	return createXMLParseException(exception);
}

$XNIException* XSDHandler$SAX2XNIUtil::createXNIException0($SAXException* exception) {
	$init(XSDHandler$SAX2XNIUtil);
	return createXNIException(exception);
}

XSDHandler$SAX2XNIUtil::XSDHandler$SAX2XNIUtil() {
}

$Class* XSDHandler$SAX2XNIUtil::load$($String* name, bool initialize) {
	$loadClass(XSDHandler$SAX2XNIUtil, name, initialize, &_XSDHandler$SAX2XNIUtil_ClassInfo_, allocate$XSDHandler$SAX2XNIUtil);
	return class$;
}

$Class* XSDHandler$SAX2XNIUtil::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com