#include <com/sun/org/apache/xpath/internal/XPathException.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _XPathException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XPathException, serialVersionUID)},
	{"m_styleNode", "Ljava/lang/Object;", nullptr, 0, $field(XPathException, m_styleNode)},
	{"m_exception", "Ljava/lang/Exception;", nullptr, $PROTECTED, $field(XPathException, m_exception)},
	{}
};

$MethodInfo _XPathException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xpath/internal/ExpressionNode;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathException::*)($String*,$ExpressionNode*)>(&XPathException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathException::*)($String*)>(&XPathException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathException::*)($String*,Object$*)>(&XPathException::init$))},
	{"<init>", "(Ljava/lang/String;Lorg/w3c/dom/Node;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathException::*)($String*,$Node*,$Exception*)>(&XPathException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathException::*)($String*,$Exception*)>(&XPathException::init$))},
	{"getException", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getExpressionOwner", "(Lcom/sun/org/apache/xpath/internal/ExpressionNode;)Lcom/sun/org/apache/xpath/internal/ExpressionNode;", nullptr, $PROTECTED},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStylesheetNode", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getStylesheetNode", "(Lcom/sun/org/apache/xpath/internal/ExpressionNode;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{"setStylesheetNode", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPathException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.XPathException",
	"javax.xml.transform.TransformerException",
	nullptr,
	_XPathException_FieldInfo_,
	_XPathException_MethodInfo_
};

$Object* allocate$XPathException($Class* clazz) {
	return $of($alloc(XPathException));
}

$Object* XPathException::getStylesheetNode() {
	return $of(this->m_styleNode);
}

void XPathException::setStylesheetNode(Object$* styleNode) {
	$set(this, m_styleNode, styleNode);
}

void XPathException::init$($String* message, $ExpressionNode* ex) {
	$TransformerException::init$(message);
	$set(this, m_styleNode, nullptr);
	this->setLocator(ex);
	setStylesheetNode($(getStylesheetNode(ex)));
}

void XPathException::init$($String* message) {
	$TransformerException::init$(message);
	$set(this, m_styleNode, nullptr);
}

$Node* XPathException::getStylesheetNode($ExpressionNode* ex) {
	$var($ExpressionNode, owner, getExpressionOwner(ex));
	if (nullptr != owner && $instanceOf($Node, owner)) {
		return ($cast($Node, owner));
	}
	return nullptr;
}

$ExpressionNode* XPathException::getExpressionOwner($ExpressionNode* ex) {
	$var($ExpressionNode, parent, $nc(ex)->exprGetParent());
	while ((nullptr != parent) && ($instanceOf($Expression, parent))) {
		$assign(parent, parent->exprGetParent());
	}
	return parent;
}

void XPathException::init$($String* message, Object$* styleNode) {
	$TransformerException::init$(message);
	$set(this, m_styleNode, nullptr);
	$set(this, m_styleNode, styleNode);
}

void XPathException::init$($String* message, $Node* styleNode, $Exception* e) {
	$TransformerException::init$(message);
	$set(this, m_styleNode, nullptr);
	$set(this, m_styleNode, styleNode);
	$set(this, m_exception, e);
}

void XPathException::init$($String* message, $Exception* e) {
	$TransformerException::init$(message);
	$set(this, m_styleNode, nullptr);
	$set(this, m_exception, e);
}

void XPathException::printStackTrace($PrintStream* s$renamed) {
	$var($PrintStream, s, s$renamed);
	if (s == nullptr) {
		$init($System);
		$assign(s, $System::err);
	}
	try {
		$TransformerException::printStackTrace(s);
	} catch ($Exception&) {
		$catch();
	}
	$var($Throwable, exception, this->m_exception);
	for (int32_t i = 0; (i < 10) && (nullptr != exception); ++i) {
		$nc(s)->println("---------"_s);
		exception->printStackTrace(s);
		if ($instanceOf($TransformerException, exception)) {
			$var($TransformerException, se, $cast($TransformerException, exception));
			$var($Throwable, prev, exception);
			$assign(exception, se->getException());
			if (prev == exception) {
				break;
			}
		} else {
			$assign(exception, nullptr);
		}
	}
}

$String* XPathException::getMessage() {
	$var($String, lastMessage, $TransformerException::getMessage());
	$var($Throwable, exception, this->m_exception);
	while (nullptr != exception) {
		$var($String, nextMessage, exception->getMessage());
		if (nullptr != nextMessage) {
			$assign(lastMessage, nextMessage);
		}
		if ($instanceOf($TransformerException, exception)) {
			$var($TransformerException, se, $cast($TransformerException, exception));
			$var($Throwable, prev, exception);
			$assign(exception, se->getException());
			if (prev == exception) {
				break;
			}
		} else {
			$assign(exception, nullptr);
		}
	}
	return (nullptr != lastMessage) ? lastMessage : ""_s;
}

void XPathException::printStackTrace($PrintWriter* s$renamed) {
	$var($PrintWriter, s, s$renamed);
	$beforeCallerSensitive();
	if (s == nullptr) {
		$init($System);
		$assign(s, $new($PrintWriter, static_cast<$OutputStream*>($System::err)));
	}
	try {
		$TransformerException::printStackTrace(s);
	} catch ($Exception&) {
		$catch();
	}
	bool isJdk14OrHigher = false;
	try {
		$load($Throwable);
		$Throwable::class$->getMethod("getCause"_s, ($ClassArray*)nullptr);
		isJdk14OrHigher = true;
	} catch ($NoSuchMethodException&) {
		$catch();
	}
	if (!isJdk14OrHigher) {
		$var($Throwable, exception, this->m_exception);
		for (int32_t i = 0; (i < 10) && (nullptr != exception); ++i) {
			$nc(s)->println("---------"_s);
			try {
				exception->printStackTrace(s);
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				s->println("Could not print stack trace..."_s);
			}
			if ($instanceOf($TransformerException, exception)) {
				$var($TransformerException, se, $cast($TransformerException, exception));
				$var($Throwable, prev, exception);
				$assign(exception, se->getException());
				if (prev == exception) {
					$assign(exception, nullptr);
					break;
				}
			} else {
				$assign(exception, nullptr);
			}
		}
	}
}

$Throwable* XPathException::getException() {
	return this->m_exception;
}

XPathException::XPathException() {
}

XPathException::XPathException(const XPathException& e) {
}

XPathException XPathException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XPathException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XPathException::load$($String* name, bool initialize) {
	$loadClass(XPathException, name, initialize, &_XPathException_ClassInfo_, allocate$XPathException);
	return class$;
}

$Class* XPathException::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com