#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/IteratorPool.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

#undef ER_NODESETDTM_CANNOT_ITERATE
#undef NULL
#undef SHOW_ALL
#undef SHOW_ENTITY_REFERENCE

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $IteratorPool = ::com::sun::org::apache::xpath::internal::axes::IteratorPool;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $PathComponent = ::com::sun::org::apache::xpath::internal::axes::PathComponent;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $SubContextList = ::com::sun::org::apache::xpath::internal::axes::SubContextList;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $XPATHMessages = ::com::sun::org::apache::xpath::internal::res::XPATHMessages;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _LocPathIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(LocPathIterator, serialVersionUID)},
	{"m_allowDetach", "Z", nullptr, $PROTECTED, $field(LocPathIterator, m_allowDetach)},
	{"m_clones", "Lcom/sun/org/apache/xpath/internal/axes/IteratorPool;", nullptr, $PROTECTED | $TRANSIENT, $field(LocPathIterator, m_clones)},
	{"m_cdtm", "Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PROTECTED | $TRANSIENT, $field(LocPathIterator, m_cdtm)},
	{"m_stackFrame", "I", nullptr, $TRANSIENT, $field(LocPathIterator, m_stackFrame)},
	{"m_isTopLevel", "Z", nullptr, $PRIVATE, $field(LocPathIterator, m_isTopLevel)},
	{"m_lastFetched", "I", nullptr, $PUBLIC | $TRANSIENT, $field(LocPathIterator, m_lastFetched)},
	{"m_context", "I", nullptr, $PROTECTED | $TRANSIENT, $field(LocPathIterator, m_context)},
	{"m_currentContextNode", "I", nullptr, $PROTECTED | $TRANSIENT, $field(LocPathIterator, m_currentContextNode)},
	{"m_pos", "I", nullptr, $PROTECTED | $TRANSIENT, $field(LocPathIterator, m_pos)},
	{"m_length", "I", nullptr, $PROTECTED | $TRANSIENT, $field(LocPathIterator, m_length)},
	{"m_prefixResolver", "Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;", nullptr, $PRIVATE, $field(LocPathIterator, m_prefixResolver)},
	{"m_execContext", "Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $PROTECTED | $TRANSIENT, $field(LocPathIterator, m_execContext)},
	{}
};

$MethodInfo _LocPathIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LocPathIterator::*)()>(&LocPathIterator::init$))},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PROTECTED, $method(static_cast<void(LocPathIterator::*)($PrefixResolver*)>(&LocPathIterator::init$))},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, $PROTECTED, $method(static_cast<void(LocPathIterator::*)($Compiler*,int32_t,int32_t)>(&LocPathIterator::init$)), "javax.xml.transform.TransformerException"},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;IIZ)V", nullptr, $PROTECTED, $method(static_cast<void(LocPathIterator::*)($Compiler*,int32_t,int32_t,bool)>(&LocPathIterator::init$)), "javax.xml.transform.TransformerException"},
	{"allowDetachToRelease", "(Z)V", nullptr, $PUBLIC},
	{"asIterator", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"asNode", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"bool", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Z", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC},
	{"cloneWithReset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"detach", "()V", nullptr, $PUBLIC},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"executeCharsToContentHandler", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException,org.xml.sax.SAXException"},
	{"getAnalysisBits", "()I", nullptr, $PUBLIC},
	{"getAxis", "()I", nullptr, $PUBLIC},
	{"getContext", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(LocPathIterator::*)()>(&LocPathIterator::getContext))},
	{"getCurrentContextNode", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(LocPathIterator::*)()>(&LocPathIterator::getCurrentContextNode))},
	{"getCurrentNode", "()I", nullptr, $PUBLIC},
	{"getCurrentPos", "()I", nullptr, $PUBLIC | $FINAL},
	{"getDTM", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC},
	{"getDTMManager", "()Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC},
	{"getFilter", "()Lcom/sun/org/apache/xml/internal/dtm/DTMFilter;", nullptr, $PUBLIC},
	{"getFoundLast", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(LocPathIterator::*)()>(&LocPathIterator::getFoundLast))},
	{"getIsTopLevel", "()Z", nullptr, $PUBLIC},
	{"getLastPos", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getPrefixResolver", "()Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$PrefixResolver*(LocPathIterator::*)()>(&LocPathIterator::getPrefixResolver))},
	{"getRoot", "()I", nullptr, $PUBLIC},
	{"getWhatToShow", "()I", nullptr, $PUBLIC},
	{"getXPathContext", "()Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$XPathContext*(LocPathIterator::*)()>(&LocPathIterator::getXPathContext))},
	{"incrementCurrentPos", "()V", nullptr, $PUBLIC},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC},
	{"isFresh", "()Z", nullptr, $PUBLIC},
	{"isMutable", "()Z", nullptr, $PUBLIC},
	{"isNodesetExpr", "()Z", nullptr, $PUBLIC},
	{"item", "(I)I", nullptr, $PUBLIC},
	{"nextNode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"previousNode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LocPathIterator::*)($ObjectInputStream*)>(&LocPathIterator::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"returnNextNode", "(I)I", nullptr, $PROTECTED},
	{"runTo", "(I)V", nullptr, $PUBLIC},
	{"setCurrentContextNode", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(LocPathIterator::*)(int32_t)>(&LocPathIterator::setCurrentContextNode))},
	{"setCurrentPos", "(I)V", nullptr, $PUBLIC},
	{"setEnvironment", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setIsTopLevel", "(Z)V", nullptr, $PUBLIC},
	{"setItem", "(II)V", nullptr, $PUBLIC},
	{"setNextPosition", "(I)V", nullptr, $PROTECTED},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setShouldCacheNodes", "(Z)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LocPathIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.axes.LocPathIterator",
	"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest",
	"java.lang.Cloneable,com.sun.org.apache.xml.internal.dtm.DTMIterator,com.sun.org.apache.xpath.internal.axes.PathComponent",
	_LocPathIterator_FieldInfo_,
	_LocPathIterator_MethodInfo_
};

$Object* allocate$LocPathIterator($Class* clazz) {
	return $of($alloc(LocPathIterator));
}

$Object* LocPathIterator::clone() {
	 return this->$PredicatedNodeTest::clone();
}

int32_t LocPathIterator::hashCode() {
	 return this->$PredicatedNodeTest::hashCode();
}

bool LocPathIterator::equals(Object$* arg0) {
	 return this->$PredicatedNodeTest::equals(arg0);
}

$String* LocPathIterator::toString() {
	 return this->$PredicatedNodeTest::toString();
}

void LocPathIterator::finalize() {
	this->$PredicatedNodeTest::finalize();
}

void LocPathIterator::init$() {
	$PredicatedNodeTest::init$();
	this->m_allowDetach = true;
	$set(this, m_clones, $new($IteratorPool, this));
	this->m_stackFrame = -1;
	this->m_isTopLevel = false;
	this->m_lastFetched = $DTM::NULL;
	this->m_context = $DTM::NULL;
	this->m_currentContextNode = $DTM::NULL;
	this->m_pos = 0;
	this->m_length = -1;
}

void LocPathIterator::init$($PrefixResolver* nscontext) {
	$PredicatedNodeTest::init$();
	this->m_allowDetach = true;
	$set(this, m_clones, $new($IteratorPool, this));
	this->m_stackFrame = -1;
	this->m_isTopLevel = false;
	this->m_lastFetched = $DTM::NULL;
	this->m_context = $DTM::NULL;
	this->m_currentContextNode = $DTM::NULL;
	this->m_pos = 0;
	this->m_length = -1;
	setLocPathIterator(this);
	$set(this, m_prefixResolver, nscontext);
}

void LocPathIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	LocPathIterator::init$(compiler, opPos, analysis, true);
}

void LocPathIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis, bool shouldLoadWalkers) {
	$PredicatedNodeTest::init$();
	this->m_allowDetach = true;
	$set(this, m_clones, $new($IteratorPool, this));
	this->m_stackFrame = -1;
	this->m_isTopLevel = false;
	this->m_lastFetched = $DTM::NULL;
	this->m_context = $DTM::NULL;
	this->m_currentContextNode = $DTM::NULL;
	this->m_pos = 0;
	this->m_length = -1;
	setLocPathIterator(this);
}

int32_t LocPathIterator::getAnalysisBits() {
	int32_t axis = getAxis();
	int32_t bit = $WalkerFactory::getAnalysisBitFromAxes(axis);
	return bit;
}

void LocPathIterator::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	$set(this, m_clones, $new($IteratorPool, this));
}

void LocPathIterator::setEnvironment(Object$* environment) {
}

$DTM* LocPathIterator::getDTM(int32_t nodeHandle) {
	return $nc(this->m_execContext)->getDTM(nodeHandle);
}

$DTMManager* LocPathIterator::getDTMManager() {
	return $nc(this->m_execContext)->getDTMManager();
}

$XObject* LocPathIterator::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($XNodeSet, iter, $new($XNodeSet, $cast(LocPathIterator, $($nc(this->m_clones)->getInstance()))));
	iter->setRoot($nc(xctxt)->getCurrentNode(), xctxt);
	return iter;
}

void LocPathIterator::executeCharsToContentHandler($XPathContext* xctxt, $ContentHandler* handler) {
	$useLocalCurrentObjectStackCache();
	$var(LocPathIterator, clone, $cast(LocPathIterator, $nc(this->m_clones)->getInstance()));
	int32_t current = $nc(xctxt)->getCurrentNode();
	$nc(clone)->setRoot(current, xctxt);
	int32_t node = clone->nextNode();
	$var($DTM, dtm, clone->getDTM(node));
	clone->detach();
	if (node != $DTM::NULL) {
		$nc(dtm)->dispatchCharactersEvents(node, handler, false);
	}
}

$DTMIterator* LocPathIterator::asIterator($XPathContext* xctxt, int32_t contextNode) {
	$useLocalCurrentObjectStackCache();
	$var($XNodeSet, iter, $new($XNodeSet, $cast(LocPathIterator, $($nc(this->m_clones)->getInstance()))));
	iter->setRoot(contextNode, xctxt);
	return iter;
}

bool LocPathIterator::isNodesetExpr() {
	return true;
}

int32_t LocPathIterator::asNode($XPathContext* xctxt) {
	$var($DTMIterator, iter, $nc(this->m_clones)->getInstance());
	int32_t current = $nc(xctxt)->getCurrentNode();
	$nc(iter)->setRoot(current, xctxt);
	int32_t next = iter->nextNode();
	iter->detach();
	return next;
}

bool LocPathIterator::bool$($XPathContext* xctxt) {
	return (asNode(xctxt) != $DTM::NULL);
}

void LocPathIterator::setIsTopLevel(bool b) {
	this->m_isTopLevel = b;
}

bool LocPathIterator::getIsTopLevel() {
	return this->m_isTopLevel;
}

void LocPathIterator::setRoot(int32_t context, Object$* environment) {
	$useLocalCurrentObjectStackCache();
	this->m_context = context;
	$var($XPathContext, xctxt, $cast($XPathContext, environment));
	$set(this, m_execContext, xctxt);
	$set(this, m_cdtm, $nc(xctxt)->getDTM(context));
	this->m_currentContextNode = context;
	if (nullptr == this->m_prefixResolver) {
		$set(this, m_prefixResolver, xctxt->getNamespaceContext());
	}
	this->m_lastFetched = $DTM::NULL;
	this->m_foundLast = false;
	this->m_pos = 0;
	this->m_length = -1;
	if (this->m_isTopLevel) {
		this->m_stackFrame = $nc($(xctxt->getVarStack()))->getStackFrame();
	}
}

void LocPathIterator::setNextPosition(int32_t next) {
	assertion(false, "setNextPosition not supported in this iterator!"_s);
}

int32_t LocPathIterator::getCurrentPos() {
	return this->m_pos;
}

void LocPathIterator::setShouldCacheNodes(bool b) {
	assertion(false, "setShouldCacheNodes not supported by this iterater!"_s);
}

bool LocPathIterator::isMutable() {
	return false;
}

void LocPathIterator::setCurrentPos(int32_t i) {
	assertion(false, "setCurrentPos not supported by this iterator!"_s);
}

void LocPathIterator::incrementCurrentPos() {
	++this->m_pos;
}

int32_t LocPathIterator::size() {
	assertion(false, "size() not supported by this iterator!"_s);
	return 0;
}

int32_t LocPathIterator::item(int32_t index) {
	assertion(false, "item(int index) not supported by this iterator!"_s);
	return 0;
}

void LocPathIterator::setItem(int32_t node, int32_t index) {
	assertion(false, "setItem not supported by this iterator!"_s);
}

int32_t LocPathIterator::getLength() {
	bool isPredicateTest = ($equals(this, $nc(this->m_execContext)->getSubContextList()));
	int32_t predCount = getPredicateCount();
	if (-1 != this->m_length && isPredicateTest && this->m_predicateIndex < 1) {
		return this->m_length;
	}
	if (this->m_foundLast) {
		return this->m_pos;
	}
	int32_t pos = (this->m_predicateIndex >= 0) ? getProximityPosition() : this->m_pos;
	$var(LocPathIterator, clone, nullptr);
	try {
		$assign(clone, $cast(LocPathIterator, this->clone()));
	} catch ($CloneNotSupportedException& cnse) {
		return -1;
	}
	if (predCount > 0 && isPredicateTest) {
		$nc(clone)->m_predCount = this->m_predicateIndex;
	}
	int32_t next = 0;
	while ($DTM::NULL != (next = $nc(clone)->nextNode())) {
		++pos;
	}
	if (isPredicateTest && this->m_predicateIndex < 1) {
		this->m_length = pos;
	}
	return pos;
}

bool LocPathIterator::isFresh() {
	return (this->m_pos == 0);
}

int32_t LocPathIterator::previousNode() {
	$init($XPATHErrorResources);
	$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_CANNOT_ITERATE, nullptr)));
	$shouldNotReachHere();
}

int32_t LocPathIterator::getWhatToShow() {
	return (int32_t)($DTMFilter::SHOW_ALL & (uint32_t)~$DTMFilter::SHOW_ENTITY_REFERENCE);
}

$DTMFilter* LocPathIterator::getFilter() {
	return nullptr;
}

int32_t LocPathIterator::getRoot() {
	return this->m_context;
}

bool LocPathIterator::getExpandEntityReferences() {
	return true;
}

void LocPathIterator::allowDetachToRelease(bool allowRelease) {
	this->m_allowDetach = allowRelease;
}

void LocPathIterator::detach() {
	if (this->m_allowDetach) {
		$set(this, m_execContext, nullptr);
		$set(this, m_cdtm, nullptr);
		this->m_length = -1;
		this->m_pos = 0;
		this->m_lastFetched = $DTM::NULL;
		this->m_context = $DTM::NULL;
		this->m_currentContextNode = $DTM::NULL;
		$nc(this->m_clones)->freeInstance(this);
	}
}

void LocPathIterator::reset() {
	assertion(false, "This iterator can not reset!"_s);
}

$DTMIterator* LocPathIterator::cloneWithReset() {
	$var(LocPathIterator, clone, nullptr);
	$assign(clone, $cast(LocPathIterator, $nc(this->m_clones)->getInstanceOrThrow()));
	$set($nc(clone), m_execContext, this->m_execContext);
	$set(clone, m_cdtm, this->m_cdtm);
	clone->m_context = this->m_context;
	clone->m_currentContextNode = this->m_currentContextNode;
	clone->m_stackFrame = this->m_stackFrame;
	return clone;
}

int32_t LocPathIterator::returnNextNode(int32_t nextNode) {
	if ($DTM::NULL != nextNode) {
		++this->m_pos;
	}
	this->m_lastFetched = nextNode;
	if ($DTM::NULL == nextNode) {
		this->m_foundLast = true;
	}
	return nextNode;
}

int32_t LocPathIterator::getCurrentNode() {
	return this->m_lastFetched;
}

void LocPathIterator::runTo(int32_t index) {
	if (this->m_foundLast || ((index >= 0) && (index <= getCurrentPos()))) {
		return;
	}
	int32_t n = 0;
	if (-1 == index) {
		while ($DTM::NULL != (n = nextNode())) {
		}
	} else {
		while ($DTM::NULL != (n = nextNode())) {
			if (getCurrentPos() >= index) {
				break;
			}
		}
	}
}

bool LocPathIterator::getFoundLast() {
	return this->m_foundLast;
}

$XPathContext* LocPathIterator::getXPathContext() {
	return this->m_execContext;
}

int32_t LocPathIterator::getContext() {
	return this->m_context;
}

int32_t LocPathIterator::getCurrentContextNode() {
	return this->m_currentContextNode;
}

void LocPathIterator::setCurrentContextNode(int32_t n) {
	this->m_currentContextNode = n;
}

$PrefixResolver* LocPathIterator::getPrefixResolver() {
	if (nullptr == this->m_prefixResolver) {
		$set(this, m_prefixResolver, $cast($PrefixResolver, getExpressionOwner()));
	}
	return this->m_prefixResolver;
}

void LocPathIterator::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	if ($nc(visitor)->visitLocationPath(owner, this)) {
		visitor->visitStep(owner, this);
		callPredicateVisitors(visitor);
	}
}

bool LocPathIterator::isDocOrdered() {
	return true;
}

int32_t LocPathIterator::getAxis() {
	return -1;
}

int32_t LocPathIterator::getLastPos($XPathContext* xctxt) {
	return getLength();
}

LocPathIterator::LocPathIterator() {
}

$Class* LocPathIterator::load$($String* name, bool initialize) {
	$loadClass(LocPathIterator, name, initialize, &_LocPathIterator_ClassInfo_, allocate$LocPathIterator);
	return class$;
}

$Class* LocPathIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com