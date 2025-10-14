#include <com/sun/org/apache/xpath/internal/axes/UnionPathIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/HasPositionalPredChecker.h>
#include <com/sun/org/apache/xpath/internal/axes/IteratorPool.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/UnionChildIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/UnionPathIterator$iterOwner.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkingIterator.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CHILD
#undef NULL
#undef OP_EXTFUNCTION
#undef OP_FUNCTION
#undef OP_GROUP
#undef OP_LOCATIONPATH
#undef OP_VARIABLE

using $DTMIteratorArray = $Array<::com::sun::org::apache::xml::internal::dtm::DTMIterator>;
using $LocPathIteratorArray = $Array<::com::sun::org::apache::xpath::internal::axes::LocPathIterator>;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $AxesWalker = ::com::sun::org::apache::xpath::internal::axes::AxesWalker;
using $BasicTestIterator = ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator;
using $ChildTestIterator = ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator;
using $FilterExprWalker = ::com::sun::org::apache::xpath::internal::axes::FilterExprWalker;
using $HasPositionalPredChecker = ::com::sun::org::apache::xpath::internal::axes::HasPositionalPredChecker;
using $IteratorPool = ::com::sun::org::apache::xpath::internal::axes::IteratorPool;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $UnionChildIterator = ::com::sun::org::apache::xpath::internal::axes::UnionChildIterator;
using $UnionPathIterator$iterOwner = ::com::sun::org::apache::xpath::internal::axes::UnionPathIterator$iterOwner;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $WalkingIterator = ::com::sun::org::apache::xpath::internal::axes::WalkingIterator;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $OpCodes = ::com::sun::org::apache::xpath::internal::compiler::OpCodes;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _UnionPathIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnionPathIterator, serialVersionUID)},
	{"m_exprs", "[Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;", nullptr, $PROTECTED, $field(UnionPathIterator, m_exprs)},
	{"m_iterators", "[Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PROTECTED, $field(UnionPathIterator, m_iterators)},
	{}
};

$MethodInfo _UnionPathIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnionPathIterator::*)()>(&UnionPathIterator::init$))},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;I)V", nullptr, $PUBLIC, $method(static_cast<void(UnionPathIterator::*)($Compiler*,int32_t)>(&UnionPathIterator::init$)), "javax.xml.transform.TransformerException"},
	{"addIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"createDTMIterator", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;I)Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;", nullptr, $PROTECTED, nullptr, "javax.xml.transform.TransformerException"},
	{"createUnionIterator", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;I)Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LocPathIterator*(*)($Compiler*,int32_t)>(&UnionPathIterator::createUnionIterator)), "javax.xml.transform.TransformerException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC},
	{"detach", "()V", nullptr, $PUBLIC},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC},
	{"getAnalysisBits", "()I", nullptr, $PUBLIC},
	{"getAxis", "()I", nullptr, $PUBLIC},
	{"loadLocationPaths", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, $PROTECTED, nullptr, "javax.xml.transform.TransformerException"},
	{"nextNode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(UnionPathIterator::*)($ObjectInputStream*)>(&UnionPathIterator::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UnionPathIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.UnionPathIterator$iterOwner", "com.sun.org.apache.xpath.internal.axes.UnionPathIterator", "iterOwner", 0},
	{}
};

$ClassInfo _UnionPathIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.UnionPathIterator",
	"com.sun.org.apache.xpath.internal.axes.LocPathIterator",
	nullptr,
	_UnionPathIterator_FieldInfo_,
	_UnionPathIterator_MethodInfo_,
	nullptr,
	nullptr,
	_UnionPathIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.UnionPathIterator$iterOwner"
};

$Object* allocate$UnionPathIterator($Class* clazz) {
	return $of($alloc(UnionPathIterator));
}

void UnionPathIterator::init$() {
	$LocPathIterator::init$();
	$set(this, m_iterators, nullptr);
	$set(this, m_exprs, nullptr);
}

void UnionPathIterator::setRoot(int32_t context, Object$* environment) {
	$LocPathIterator::setRoot(context, environment);
	try {
		if (nullptr != this->m_exprs) {
			int32_t n = $nc(this->m_exprs)->length;
			$var($DTMIteratorArray, newIters, $new($DTMIteratorArray, n));
			for (int32_t i = 0; i < n; ++i) {
				$var($DTMIterator, iter, $nc($nc(this->m_exprs)->get(i))->asIterator(this->m_execContext, context));
				newIters->set(i, iter);
				$nc(iter)->nextNode();
			}
			$set(this, m_iterators, newIters);
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($WrappedRuntimeException, e);
	}
}

void UnionPathIterator::addIterator($DTMIterator* expr) {
	if (nullptr == this->m_iterators) {
		$set(this, m_iterators, $new($DTMIteratorArray, 1));
		$nc(this->m_iterators)->set(0, expr);
	} else {
		$var($DTMIteratorArray, exprs, this->m_iterators);
		int32_t len = $nc(this->m_iterators)->length;
		$set(this, m_iterators, $new($DTMIteratorArray, len + 1));
		$System::arraycopy(exprs, 0, this->m_iterators, 0, len);
		$nc(this->m_iterators)->set(len, expr);
	}
	$nc(expr)->nextNode();
	if ($instanceOf($Expression, expr)) {
		$nc(($cast($Expression, expr)))->exprSetParent(this);
	}
}

void UnionPathIterator::detach() {
	if (this->m_allowDetach && nullptr != this->m_iterators) {
		int32_t n = $nc(this->m_iterators)->length;
		for (int32_t i = 0; i < n; ++i) {
			$nc($nc(this->m_iterators)->get(i))->detach();
		}
		$set(this, m_iterators, nullptr);
	}
}

void UnionPathIterator::init$($Compiler* compiler, int32_t opPos) {
	$LocPathIterator::init$();
	opPos = $OpMap::getFirstChildPos(opPos);
	loadLocationPaths(compiler, opPos, 0);
}

$LocPathIterator* UnionPathIterator::createUnionIterator($Compiler* compiler, int32_t opPos) {
	$init(UnionPathIterator);
	$var(UnionPathIterator, upi, $new(UnionPathIterator, compiler, opPos));
	int32_t nPaths = $nc(upi->m_exprs)->length;
	bool isAllChildIterators = true;
	for (int32_t i = 0; i < nPaths; ++i) {
		$var($LocPathIterator, lpi, $nc(upi->m_exprs)->get(i));
		if ($nc(lpi)->getAxis() != $Axis::CHILD) {
			isAllChildIterators = false;
			break;
		} else if ($HasPositionalPredChecker::check(lpi)) {
			isAllChildIterators = false;
			break;
		}
	}
	if (isAllChildIterators) {
		$var($UnionChildIterator, uci, $new($UnionChildIterator));
		for (int32_t i = 0; i < nPaths; ++i) {
			$var($PredicatedNodeTest, lpi, $nc(upi->m_exprs)->get(i));
			uci->addNodeTest(lpi);
		}
		return uci;
	} else {
		return upi;
	}
}

int32_t UnionPathIterator::getAnalysisBits() {
	int32_t bits = 0;
	if (this->m_exprs != nullptr) {
		int32_t n = $nc(this->m_exprs)->length;
		for (int32_t i = 0; i < n; ++i) {
			int32_t bit = $nc($nc(this->m_exprs)->get(i))->getAnalysisBits();
			bits |= bit;
		}
	}
	return bits;
}

void UnionPathIterator::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	$set(this, m_clones, $new($IteratorPool, this));
}

$Object* UnionPathIterator::clone() {
	$var(UnionPathIterator, clone, $cast(UnionPathIterator, $LocPathIterator::clone()));
	if (this->m_iterators != nullptr) {
		int32_t n = $nc(this->m_iterators)->length;
		$set($nc(clone), m_iterators, $new($DTMIteratorArray, n));
		for (int32_t i = 0; i < n; ++i) {
			$nc(clone->m_iterators)->set(i, $cast($DTMIterator, $($nc($nc(this->m_iterators)->get(i))->clone())));
		}
	}
	return $of(clone);
}

$LocPathIterator* UnionPathIterator::createDTMIterator($Compiler* compiler, int32_t opPos) {
	$var($LocPathIterator, lpi, $cast($LocPathIterator, $WalkerFactory::newDTMIterator(compiler, opPos, ($nc(compiler)->getLocationPathDepth() <= 0))));
	return lpi;
}

void UnionPathIterator::loadLocationPaths($Compiler* compiler, int32_t opPos, int32_t count) {
	int32_t steptype = $nc(compiler)->getOp(opPos);
	if (steptype == $OpCodes::OP_LOCATIONPATH) {
		loadLocationPaths(compiler, compiler->getNextOpPos(opPos), count + 1);
		$nc(this->m_exprs)->set(count, $(createDTMIterator(compiler, opPos)));
		$nc($nc(this->m_exprs)->get(count))->exprSetParent(this);
	} else {
		{
			$var($WalkingIterator, iter, nullptr)
			switch (steptype) {
			case $OpCodes::OP_VARIABLE:
				{}
			case $OpCodes::OP_EXTFUNCTION:
				{}
			case $OpCodes::OP_FUNCTION:
				{}
			case $OpCodes::OP_GROUP:
				{
					loadLocationPaths(compiler, compiler->getNextOpPos(opPos), count + 1);
					$assign(iter, $new($WalkingIterator, $(compiler->getNamespaceContext())));
					$nc(iter)->exprSetParent(this);
					if (compiler->getLocationPathDepth() <= 0) {
						$nc(iter)->setIsTopLevel(true);
					}
					$set($nc(iter), m_firstWalker, $new($FilterExprWalker, iter));
					$nc($nc(iter)->m_firstWalker)->init(compiler, opPos, steptype);
					$nc(this->m_exprs)->set(count, iter);
					break;
				}
			default:
				{
					$set(this, m_exprs, $new($LocPathIteratorArray, count));
				}
			}
		}
	}
}

int32_t UnionPathIterator::nextNode() {
	if (this->m_foundLast) {
		return $DTM::NULL;
	}
	int32_t earliestNode = $DTM::NULL;
	if (nullptr != this->m_iterators) {
		int32_t n = $nc(this->m_iterators)->length;
		int32_t iteratorUsed = -1;
		for (int32_t i = 0; i < n; ++i) {
			int32_t node = $nc($nc(this->m_iterators)->get(i))->getCurrentNode();
			if ($DTM::NULL == node) {
				continue;
			} else if ($DTM::NULL == earliestNode) {
				iteratorUsed = i;
				earliestNode = node;
			} else if (node == earliestNode) {
				$nc($nc(this->m_iterators)->get(i))->nextNode();
			} else {
				$var($DTM, dtm, getDTM(node));
				if ($nc(dtm)->isNodeAfter(node, earliestNode)) {
					iteratorUsed = i;
					earliestNode = node;
				}
			}
		}
		if ($DTM::NULL != earliestNode) {
			$nc($nc(this->m_iterators)->get(iteratorUsed))->nextNode();
			incrementCurrentPos();
		} else {
			this->m_foundLast = true;
		}
	}
	this->m_lastFetched = earliestNode;
	return earliestNode;
}

void UnionPathIterator::fixupVariables($List* vars, int32_t globalsSize) {
	for (int32_t i = 0; i < $nc(this->m_exprs)->length; ++i) {
		$nc($nc(this->m_exprs)->get(i))->fixupVariables(vars, globalsSize);
	}
}

int32_t UnionPathIterator::getAxis() {
	return -1;
}

void UnionPathIterator::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	if ($nc(visitor)->visitUnionPath(owner, this)) {
		if (nullptr != this->m_exprs) {
			int32_t n = $nc(this->m_exprs)->length;
			for (int32_t i = 0; i < n; ++i) {
				$nc($nc(this->m_exprs)->get(i))->callVisitors($$new($UnionPathIterator$iterOwner, this, i), visitor);
			}
		}
	}
}

bool UnionPathIterator::deepEquals($Expression* expr) {
	if (!$LocPathIterator::deepEquals(expr)) {
		return false;
	}
	$var(UnionPathIterator, upi, $cast(UnionPathIterator, expr));
	if (nullptr != this->m_exprs) {
		int32_t n = $nc(this->m_exprs)->length;
		if ((nullptr == $nc(upi)->m_exprs) || ($nc($nc(upi)->m_exprs)->length != n)) {
			return false;
		}
		for (int32_t i = 0; i < n; ++i) {
			if (!$nc($nc(this->m_exprs)->get(i))->deepEquals($nc($nc(upi)->m_exprs)->get(i))) {
				return false;
			}
		}
	} else if (nullptr != upi->m_exprs) {
		return false;
	}
	return true;
}

UnionPathIterator::UnionPathIterator() {
}

$Class* UnionPathIterator::load$($String* name, bool initialize) {
	$loadClass(UnionPathIterator, name, initialize, &_UnionPathIterator_ClassInfo_, allocate$UnionPathIterator);
	return class$;
}

$Class* UnionPathIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com