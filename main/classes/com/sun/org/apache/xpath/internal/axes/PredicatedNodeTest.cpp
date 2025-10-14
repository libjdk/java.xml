#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest$PredOwner.h>
#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef CLASS_NUMBER
#undef DEBUG_PREDICATECOUNTING
#undef FILTER_ACCEPT
#undef FILTER_SKIP
#undef NULL
#undef SCORE_NONE

using $ExpressionArray = $Array<::com::sun::org::apache::xpath::internal::Expression>;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitable = ::com::sun::org::apache::xpath::internal::XPathVisitable;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PredicatedNodeTest$PredOwner = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest$PredOwner;
using $SubContextList = ::com::sun::org::apache::xpath::internal::axes::SubContextList;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _PredicatedNodeTest_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(PredicatedNodeTest, serialVersionUID)},
	{"m_predCount", "I", nullptr, $PROTECTED, $field(PredicatedNodeTest, m_predCount)},
	{"m_foundLast", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(PredicatedNodeTest, m_foundLast)},
	{"m_lpi", "Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;", nullptr, $PROTECTED, $field(PredicatedNodeTest, m_lpi)},
	{"m_predicateIndex", "I", nullptr, $TRANSIENT, $field(PredicatedNodeTest, m_predicateIndex)},
	{"m_predicates", "[Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PRIVATE, $field(PredicatedNodeTest, m_predicates)},
	{"m_proximityPositions", "[I", nullptr, $PROTECTED | $TRANSIENT, $field(PredicatedNodeTest, m_proximityPositions)},
	{"DEBUG_PREDICATECOUNTING", "Z", nullptr, $STATIC | $FINAL, $constField(PredicatedNodeTest, DEBUG_PREDICATECOUNTING)},
	{}
};

$MethodInfo _PredicatedNodeTest_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getLastPos", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;)V", nullptr, 0, $method(static_cast<void(PredicatedNodeTest::*)($LocPathIterator*)>(&PredicatedNodeTest::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PredicatedNodeTest::*)()>(&PredicatedNodeTest::init$))},
	{"acceptNode", "(I)S", nullptr, $PUBLIC},
	{"callPredicateVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"countProximityPosition", "(I)V", nullptr, $PROTECTED},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC},
	{"executePredicates", "(ILcom/sun/org/apache/xpath/internal/XPathContext;)Z", nullptr, 0, nullptr, "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC},
	{"getLocPathIterator", "()Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;", nullptr, $PUBLIC},
	{"getPredicate", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC},
	{"getPredicateCount", "()I", nullptr, $PUBLIC},
	{"getPredicateIndex", "()I", nullptr, $PUBLIC},
	{"getProximityPosition", "()I", nullptr, $PUBLIC},
	{"getProximityPosition", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC},
	{"getProximityPosition", "(I)I", nullptr, $PROTECTED},
	{"initPredicateInfo", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;I)V", nullptr, $PROTECTED, nullptr, "javax.xml.transform.TransformerException"},
	{"initProximityPosition", "(I)V", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"isReverseAxes", "()Z", nullptr, $PUBLIC},
	{"nodeToString", "(I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PredicatedNodeTest::*)($ObjectInputStream*)>(&PredicatedNodeTest::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"resetProximityPositions", "()V", nullptr, $PUBLIC},
	{"setLocPathIterator", "(Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;)V", nullptr, $PUBLIC},
	{"setPredicateCount", "(I)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PredicatedNodeTest_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest$PredOwner", "com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest", "PredOwner", 0},
	{}
};

$ClassInfo _PredicatedNodeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest",
	"com.sun.org.apache.xpath.internal.patterns.NodeTest",
	"com.sun.org.apache.xpath.internal.axes.SubContextList",
	_PredicatedNodeTest_FieldInfo_,
	_PredicatedNodeTest_MethodInfo_,
	nullptr,
	nullptr,
	_PredicatedNodeTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest$PredOwner"
};

$Object* allocate$PredicatedNodeTest($Class* clazz) {
	return $of($alloc(PredicatedNodeTest));
}

int32_t PredicatedNodeTest::hashCode() {
	 return this->$NodeTest::hashCode();
}

bool PredicatedNodeTest::equals(Object$* arg0) {
	 return this->$NodeTest::equals(arg0);
}

$String* PredicatedNodeTest::toString() {
	 return this->$NodeTest::toString();
}

void PredicatedNodeTest::finalize() {
	this->$NodeTest::finalize();
}

void PredicatedNodeTest::init$($LocPathIterator* locPathIterator) {
	$NodeTest::init$();
	this->m_predCount = -1;
	this->m_foundLast = false;
	this->m_predicateIndex = -1;
	$set(this, m_lpi, locPathIterator);
}

void PredicatedNodeTest::init$() {
	$NodeTest::init$();
	this->m_predCount = -1;
	this->m_foundLast = false;
	this->m_predicateIndex = -1;
}

void PredicatedNodeTest::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	this->m_predicateIndex = -1;
	this->m_predCount = -1;
	resetProximityPositions();
}

$Object* PredicatedNodeTest::clone() {
	$var(PredicatedNodeTest, clone, $cast(PredicatedNodeTest, $NodeTest::clone()));
	if ((nullptr != this->m_proximityPositions) && (this->m_proximityPositions == $nc(clone)->m_proximityPositions)) {
		$set(clone, m_proximityPositions, $new($ints, $nc(this->m_proximityPositions)->length));
		$System::arraycopy(this->m_proximityPositions, 0, clone->m_proximityPositions, 0, $nc(this->m_proximityPositions)->length);
	}
	if ($equals($nc(clone)->m_lpi, this)) {
		$set(clone, m_lpi, $cast($LocPathIterator, clone));
	}
	return $of(clone);
}

int32_t PredicatedNodeTest::getPredicateCount() {
	if (-1 == this->m_predCount) {
		return (nullptr == this->m_predicates) ? 0 : $nc(this->m_predicates)->length;
	} else {
		return this->m_predCount;
	}
}

void PredicatedNodeTest::setPredicateCount(int32_t count) {
	if (count > 0) {
		$var($ExpressionArray, newPredicates, $new($ExpressionArray, count));
		for (int32_t i = 0; i < count; ++i) {
			newPredicates->set(i, $nc(this->m_predicates)->get(i));
		}
		$set(this, m_predicates, newPredicates);
	} else {
		$set(this, m_predicates, nullptr);
	}
}

void PredicatedNodeTest::initPredicateInfo($Compiler* compiler, int32_t opPos) {
	int32_t pos = $nc(compiler)->getFirstPredicateOpPos(opPos);
	if (pos > 0) {
		$set(this, m_predicates, compiler->getCompiledPredicates(pos));
		if (nullptr != this->m_predicates) {
			for (int32_t i = 0; i < $nc(this->m_predicates)->length; ++i) {
				$nc($nc(this->m_predicates)->get(i))->exprSetParent(this);
			}
		}
	}
}

$Expression* PredicatedNodeTest::getPredicate(int32_t index) {
	return $nc(this->m_predicates)->get(index);
}

int32_t PredicatedNodeTest::getProximityPosition() {
	return getProximityPosition(this->m_predicateIndex);
}

int32_t PredicatedNodeTest::getProximityPosition($XPathContext* xctxt) {
	return getProximityPosition();
}

int32_t PredicatedNodeTest::getProximityPosition(int32_t predicateIndex) {
	return (predicateIndex >= 0) ? $nc(this->m_proximityPositions)->get(predicateIndex) : 0;
}

void PredicatedNodeTest::resetProximityPositions() {
	int32_t nPredicates = getPredicateCount();
	if (nPredicates > 0) {
		if (nullptr == this->m_proximityPositions) {
			$set(this, m_proximityPositions, $new($ints, nPredicates));
		}
		for (int32_t i = 0; i < nPredicates; ++i) {
			try {
				initProximityPosition(i);
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$throwNew($WrappedRuntimeException, e);
			}
		}
	}
}

void PredicatedNodeTest::initProximityPosition(int32_t i) {
	$nc(this->m_proximityPositions)->set(i, 0);
}

void PredicatedNodeTest::countProximityPosition(int32_t i) {
	$var($ints, pp, this->m_proximityPositions);
	if ((nullptr != pp) && (i < pp->length)) {
		++(*pp)[i];
	}
}

bool PredicatedNodeTest::isReverseAxes() {
	return false;
}

int32_t PredicatedNodeTest::getPredicateIndex() {
	return this->m_predicateIndex;
}

bool PredicatedNodeTest::executePredicates(int32_t context, $XPathContext* xctxt) {
	int32_t nPredicates = getPredicateCount();
	if (nPredicates == 0) {
		return true;
	}
	$var($PrefixResolver, savedResolver, $nc(xctxt)->getNamespaceContext());
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			this->m_predicateIndex = 0;
			xctxt->pushSubContextList(this);
			xctxt->pushNamespaceContext($($nc(this->m_lpi)->getPrefixResolver()));
			xctxt->pushCurrentNode(context);
			for (int32_t i = 0; i < nPredicates; ++i) {
				$var($XObject, pred, $nc($nc(this->m_predicates)->get(i))->execute(xctxt));
				if ($XObject::CLASS_NUMBER == $nc(pred)->getType()) {
					int32_t proxPos = this->getProximityPosition(this->m_predicateIndex);
					int32_t predIndex = $cast(int32_t, pred->num());
					if (proxPos != predIndex) {
						var$2 = false;
						return$1 = true;
						goto $finally;
					} else {
					}
					if ($nc($nc(this->m_predicates)->get(i))->isStableNumber() && i == nPredicates - 1) {
						this->m_foundLast = true;
					}
				} else if (!pred->bool$()) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
				countProximityPosition(++this->m_predicateIndex);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			xctxt->popCurrentNode();
			xctxt->popNamespaceContext();
			xctxt->popSubContextList();
			this->m_predicateIndex = -1;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return true;
}

void PredicatedNodeTest::fixupVariables($List* vars, int32_t globalsSize) {
	$NodeTest::fixupVariables(vars, globalsSize);
	int32_t nPredicates = getPredicateCount();
	for (int32_t i = 0; i < nPredicates; ++i) {
		$nc($nc(this->m_predicates)->get(i))->fixupVariables(vars, globalsSize);
	}
}

$String* PredicatedNodeTest::nodeToString(int32_t n) {
	if ($DTM::NULL != n) {
		$var($DTM, dtm, $nc($($nc(this->m_lpi)->getXPathContext()))->getDTM(n));
		return $str({$($nc(dtm)->getNodeName(n)), "{"_s, $$str((n + 1)), "}"_s});
	} else {
		return "null"_s;
	}
}

int16_t PredicatedNodeTest::acceptNode(int32_t n) {
	$var($XPathContext, xctxt, $nc(this->m_lpi)->getXPathContext());
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			try {
				$nc(xctxt)->pushCurrentNode(n);
				$var($XObject, score, execute(xctxt, n));
				$init($NodeTest);
				if (!$equals(score, $NodeTest::SCORE_NONE)) {
					if (getPredicateCount() > 0) {
						countProximityPosition(0);
						if (!executePredicates(n, xctxt)) {
							var$2 = $DTMIterator::FILTER_SKIP;
							return$1 = true;
							goto $finally;
						}
					}
					var$2 = $DTMIterator::FILTER_ACCEPT;
					return$1 = true;
					goto $finally;
				}
			} catch ($TransformerException&) {
				$var($TransformerException, se, $catch());
				$throwNew($RuntimeException, $(se->getMessage()));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(xctxt)->popCurrentNode();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return $DTMIterator::FILTER_SKIP;
}

$LocPathIterator* PredicatedNodeTest::getLocPathIterator() {
	return this->m_lpi;
}

void PredicatedNodeTest::setLocPathIterator($LocPathIterator* li) {
	$set(this, m_lpi, li);
	if (!$equals(this, li)) {
		$nc(li)->exprSetParent(this);
	}
}

bool PredicatedNodeTest::canTraverseOutsideSubtree() {
	int32_t n = getPredicateCount();
	for (int32_t i = 0; i < n; ++i) {
		if ($nc($(getPredicate(i)))->canTraverseOutsideSubtree()) {
			return true;
		}
	}
	return false;
}

void PredicatedNodeTest::callPredicateVisitors($XPathVisitor* visitor) {
	if (nullptr != this->m_predicates) {
		int32_t n = $nc(this->m_predicates)->length;
		for (int32_t i = 0; i < n; ++i) {
			$var($ExpressionOwner, predOwner, $new($PredicatedNodeTest$PredOwner, this, i));
			if ($nc(visitor)->visitPredicate(predOwner, $nc(this->m_predicates)->get(i))) {
				$nc($nc(this->m_predicates)->get(i))->callVisitors(predOwner, visitor);
			}
		}
	}
}

bool PredicatedNodeTest::deepEquals($Expression* expr) {
	if (!$NodeTest::deepEquals(expr)) {
		return false;
	}
	$var(PredicatedNodeTest, pnt, $cast(PredicatedNodeTest, expr));
	if (nullptr != this->m_predicates) {
		int32_t n = $nc(this->m_predicates)->length;
		if ((nullptr == $nc(pnt)->m_predicates) || ($nc($nc(pnt)->m_predicates)->length != n)) {
			return false;
		}
		for (int32_t i = 0; i < n; ++i) {
			if (!$nc($nc(this->m_predicates)->get(i))->deepEquals($nc($nc(pnt)->m_predicates)->get(i))) {
				return false;
			}
		}
	} else if (nullptr != $nc(pnt)->m_predicates) {
		return false;
	}
	return true;
}

PredicatedNodeTest::PredicatedNodeTest() {
}

$Class* PredicatedNodeTest::load$($String* name, bool initialize) {
	$loadClass(PredicatedNodeTest, name, initialize, &_PredicatedNodeTest_ClassInfo_, allocate$PredicatedNodeTest);
	return class$;
}

$Class* PredicatedNodeTest::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com