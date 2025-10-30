#include <com/sun/org/apache/xpath/internal/jaxp/XPathImpl.h>

#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/XPath.h>
#include <com/sun/org/apache/xpath/internal/jaxp/JAXPPrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathExpressionImpl.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathImplUtil.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathResultImpl.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/xpath/XPathConstants.h>
#include <javax/xml/xpath/XPathEvaluationResult.h>
#include <javax/xml/xpath/XPathExpression.h>
#include <javax/xml/xpath/XPathExpressionException.h>
#include <javax/xml/xpath/XPathFunctionException.h>
#include <javax/xml/xpath/XPathFunctionResolver.h>
#include <javax/xml/xpath/XPathVariableResolver.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <org/w3c/dom/Document.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

#undef JDK_OVERRIDE_PARSER
#undef SELECT
#undef STRING

using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $1XPath = ::com::sun::org::apache::xpath::internal::XPath;
using $JAXPPrefixResolver = ::com::sun::org::apache::xpath::internal::jaxp::JAXPPrefixResolver;
using $XPathExpressionImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathExpressionImpl;
using $XPathImplUtil = ::com::sun::org::apache::xpath::internal::jaxp::XPathImplUtil;
using $XPathResultImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathResultImpl;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $XPath = ::javax::xml::xpath::XPath;
using $XPathConstants = ::javax::xml::xpath::XPathConstants;
using $XPathEvaluationResult = ::javax::xml::xpath::XPathEvaluationResult;
using $XPathExpression = ::javax::xml::xpath::XPathExpression;
using $XPathExpressionException = ::javax::xml::xpath::XPathExpressionException;
using $XPathFunctionException = ::javax::xml::xpath::XPathFunctionException;
using $XPathFunctionResolver = ::javax::xml::xpath::XPathFunctionResolver;
using $XPathVariableResolver = ::javax::xml::xpath::XPathVariableResolver;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;
using $Document = ::org::w3c::dom::Document;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

$FieldInfo _XPathImpl_FieldInfo_[] = {
	{"origVariableResolver", "Ljavax/xml/xpath/XPathVariableResolver;", nullptr, $PRIVATE, $field(XPathImpl, origVariableResolver)},
	{"origFunctionResolver", "Ljavax/xml/xpath/XPathFunctionResolver;", nullptr, $PRIVATE, $field(XPathImpl, origFunctionResolver)},
	{"namespaceContext", "Ljavax/xml/namespace/NamespaceContext;", nullptr, $PRIVATE, $field(XPathImpl, namespaceContext)},
	{}
};

$MethodInfo _XPathImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/xml/xpath/XPathVariableResolver;Ljavax/xml/xpath/XPathFunctionResolver;)V", nullptr, 0, $method(static_cast<void(XPathImpl::*)($XPathVariableResolver*,$XPathFunctionResolver*)>(&XPathImpl::init$))},
	{"<init>", "(Ljavax/xml/xpath/XPathVariableResolver;Ljavax/xml/xpath/XPathFunctionResolver;ZLjdk/xml/internal/JdkXmlFeatures;)V", nullptr, 0, $method(static_cast<void(XPathImpl::*)($XPathVariableResolver*,$XPathFunctionResolver*,bool,$JdkXmlFeatures*)>(&XPathImpl::init$))},
	{"compile", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathExpression;", nullptr, $PUBLIC, nullptr, "javax.xml.xpath.XPathExpressionException"},
	{"eval", "(Ljava/lang/String;Ljava/lang/Object;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PRIVATE, $method(static_cast<$XObject*(XPathImpl::*)($String*,Object$*)>(&XPathImpl::eval)), "javax.xml.transform.TransformerException"},
	{"evaluate", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Ljava/lang/String;Lorg/xml/sax/InputSource;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Ljava/lang/String;Lorg/xml/sax/InputSource;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, nullptr, "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/xml/xpath/XPathEvaluationResult;", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/xml/xpath/XPathEvaluationResult<*>;", $PUBLIC, nullptr, "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/String;Lorg/xml/sax/InputSource;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Lorg/xml/sax/InputSource;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, nullptr, "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/String;Lorg/xml/sax/InputSource;)Ljavax/xml/xpath/XPathEvaluationResult;", "(Ljava/lang/String;Lorg/xml/sax/InputSource;)Ljavax/xml/xpath/XPathEvaluationResult<*>;", $PUBLIC, nullptr, "javax.xml.xpath.XPathExpressionException"},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC},
	{"getXPathFunctionResolver", "()Ljavax/xml/xpath/XPathFunctionResolver;", nullptr, $PUBLIC},
	{"getXPathVariableResolver", "()Ljavax/xml/xpath/XPathVariableResolver;", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC},
	{"setXPathFunctionResolver", "(Ljavax/xml/xpath/XPathFunctionResolver;)V", nullptr, $PUBLIC},
	{"setXPathVariableResolver", "(Ljavax/xml/xpath/XPathVariableResolver;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPathImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.jaxp.XPathImpl",
	"com.sun.org.apache.xpath.internal.jaxp.XPathImplUtil",
	"javax.xml.xpath.XPath",
	_XPathImpl_FieldInfo_,
	_XPathImpl_MethodInfo_
};

$Object* allocate$XPathImpl($Class* clazz) {
	return $of($alloc(XPathImpl));
}

int32_t XPathImpl::hashCode() {
	 return this->$XPathImplUtil::hashCode();
}

bool XPathImpl::equals(Object$* arg0) {
	 return this->$XPathImplUtil::equals(arg0);
}

$Object* XPathImpl::clone() {
	 return this->$XPathImplUtil::clone();
}

$String* XPathImpl::toString() {
	 return this->$XPathImplUtil::toString();
}

void XPathImpl::finalize() {
	this->$XPathImplUtil::finalize();
}

void XPathImpl::init$($XPathVariableResolver* vr, $XPathFunctionResolver* fr) {
	XPathImpl::init$(vr, fr, false, $$new($JdkXmlFeatures, false));
}

void XPathImpl::init$($XPathVariableResolver* vr, $XPathFunctionResolver* fr, bool featureSecureProcessing, $JdkXmlFeatures* featureManager) {
	$XPathImplUtil::init$();
	$set(this, namespaceContext, nullptr);
	$set(this, origVariableResolver, ($set(this, variableResolver, vr)));
	$set(this, origFunctionResolver, ($set(this, functionResolver, fr)));
	this->featureSecureProcessing = featureSecureProcessing;
	$set(this, featureManager, featureManager);
	$init($JdkXmlFeatures$XmlFeature);
	this->overrideDefaultParser = $nc(featureManager)->getFeature($JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER);
}

void XPathImpl::setXPathVariableResolver($XPathVariableResolver* resolver) {
	requireNonNull(resolver, "XPathVariableResolver"_s);
	$set(this, variableResolver, resolver);
}

$XPathVariableResolver* XPathImpl::getXPathVariableResolver() {
	return this->variableResolver;
}

void XPathImpl::setXPathFunctionResolver($XPathFunctionResolver* resolver) {
	requireNonNull(resolver, "XPathFunctionResolver"_s);
	$set(this, functionResolver, resolver);
}

$XPathFunctionResolver* XPathImpl::getXPathFunctionResolver() {
	return this->functionResolver;
}

void XPathImpl::setNamespaceContext($NamespaceContext* nsContext) {
	requireNonNull(nsContext, "NamespaceContext"_s);
	$set(this, namespaceContext, nsContext);
	$set(this, prefixResolver, $new($JAXPPrefixResolver, nsContext));
}

$NamespaceContext* XPathImpl::getNamespaceContext() {
	return this->namespaceContext;
}

$XObject* XPathImpl::eval($String* expression, Object$* contextItem) {
	requireNonNull(expression, "XPath expression"_s);
	$var($1XPath, xpath, $new($1XPath, expression, nullptr, this->prefixResolver, $1XPath::SELECT));
	return eval(contextItem, xpath);
}

$Object* XPathImpl::evaluate($String* expression, Object$* item, $QName* returnType) {
	$useLocalCurrentObjectStackCache();
	requireNonNull(expression, "XPath expression"_s);
	isSupported(returnType);
	try {
		$var($XObject, resultObject, eval(expression, item));
		return $of(getResultAsType(resultObject, returnType));
	} catch ($NullPointerException& npe) {
		$throwNew($XPathExpressionException, static_cast<$Throwable*>(npe));
	} catch ($TransformerException& te) {
		$var($Throwable, nestedException, te->getException());
		if ($instanceOf($XPathFunctionException, nestedException)) {
			$throw($cast($XPathFunctionException, nestedException));
		} else {
			$throwNew($XPathExpressionException, static_cast<$Throwable*>(te));
		}
	}
	$shouldNotReachHere();
}

$String* XPathImpl::evaluate($String* expression, Object$* item) {
	$init($XPathConstants);
	return $cast($String, this->evaluate(expression, item, $XPathConstants::STRING));
}

$XPathExpression* XPathImpl::compile($String* expression) {
	$useLocalCurrentObjectStackCache();
	requireNonNull(expression, "XPath expression"_s);
	try {
		$var($1XPath, xpath, $new($1XPath, expression, nullptr, this->prefixResolver, $1XPath::SELECT));
		$var($XPathExpressionImpl, ximpl, $new($XPathExpressionImpl, xpath, this->prefixResolver, this->functionResolver, this->variableResolver, this->featureSecureProcessing, this->featureManager));
		return ximpl;
	} catch ($TransformerException& te) {
		$throwNew($XPathExpressionException, static_cast<$Throwable*>(te));
	}
	$shouldNotReachHere();
}

$Object* XPathImpl::evaluate($String* expression, $InputSource* source, $QName* returnType) {
	$useLocalCurrentObjectStackCache();
	isSupported(returnType);
	try {
		$var($Document, document, getDocument(source));
		$var($XObject, resultObject, eval(expression, $of(document)));
		return $of(getResultAsType(resultObject, returnType));
	} catch ($TransformerException& te) {
		$var($Throwable, nestedException, te->getException());
		if ($instanceOf($XPathFunctionException, nestedException)) {
			$throw($cast($XPathFunctionException, nestedException));
		} else {
			$throwNew($XPathExpressionException, static_cast<$Throwable*>(te));
		}
	}
	$shouldNotReachHere();
}

$String* XPathImpl::evaluate($String* expression, $InputSource* source) {
	$init($XPathConstants);
	return $cast($String, this->evaluate(expression, source, $XPathConstants::STRING));
}

void XPathImpl::reset() {
	$set(this, variableResolver, this->origVariableResolver);
	$set(this, functionResolver, this->origFunctionResolver);
	$set(this, namespaceContext, nullptr);
}

$Object* XPathImpl::evaluateExpression($String* expression, Object$* item, $Class* type) {
	isSupportedClassType(type);
	try {
		$var($XObject, resultObject, eval(expression, item));
		$load($XPathEvaluationResult);
		if ($nc(type)->isAssignableFrom($XPathEvaluationResult::class$)) {
			return $of(getXPathResult(resultObject, type));
		} else {
			return $of($XPathResultImpl::getValue(resultObject, type));
		}
	} catch ($TransformerException& te) {
		$throwNew($XPathExpressionException, static_cast<$Throwable*>(te));
	}
	$shouldNotReachHere();
}

$XPathEvaluationResult* XPathImpl::evaluateExpression($String* expression, Object$* item) {
	$load($XPathEvaluationResult);
	return $cast($XPathEvaluationResult, evaluateExpression(expression, item, $XPathEvaluationResult::class$));
}

$Object* XPathImpl::evaluateExpression($String* expression, $InputSource* source, $Class* type) {
	$var($Document, document, getDocument(source));
	return $of(evaluateExpression(expression, $of(document), type));
}

$XPathEvaluationResult* XPathImpl::evaluateExpression($String* expression, $InputSource* source) {
	$load($XPathEvaluationResult);
	return $cast($XPathEvaluationResult, evaluateExpression(expression, source, $XPathEvaluationResult::class$));
}

XPathImpl::XPathImpl() {
}

$Class* XPathImpl::load$($String* name, bool initialize) {
	$loadClass(XPathImpl, name, initialize, &_XPathImpl_ClassInfo_, allocate$XPathImpl);
	return class$;
}

$Class* XPathImpl::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com