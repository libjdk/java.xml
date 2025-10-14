#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CHILD
#undef NULL

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $BasicTestIterator = ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _ChildTestIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ChildTestIterator, serialVersionUID)},
	{"m_traverser", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PROTECTED | $TRANSIENT, $field(ChildTestIterator, m_traverser)},
	{}
};

$MethodInfo _ChildTestIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, 0, $method(static_cast<void(ChildTestIterator::*)($Compiler*,int32_t,int32_t)>(&ChildTestIterator::init$)), "javax.xml.transform.TransformerException"},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;)V", nullptr, $PUBLIC, $method(static_cast<void(ChildTestIterator::*)($DTMAxisTraverser*)>(&ChildTestIterator::init$))},
	{"cloneWithReset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"detach", "()V", nullptr, $PUBLIC},
	{"getAxis", "()I", nullptr, $PUBLIC},
	{"getNextNode", "()I", nullptr, $PROTECTED},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ChildTestIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.ChildTestIterator",
	"com.sun.org.apache.xpath.internal.axes.BasicTestIterator",
	nullptr,
	_ChildTestIterator_FieldInfo_,
	_ChildTestIterator_MethodInfo_
};

$Object* allocate$ChildTestIterator($Class* clazz) {
	return $of($alloc(ChildTestIterator));
}

void ChildTestIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	$BasicTestIterator::init$(compiler, opPos, analysis);
}

void ChildTestIterator::init$($DTMAxisTraverser* traverser) {
	$BasicTestIterator::init$(nullptr);
	$set(this, m_traverser, traverser);
}

int32_t ChildTestIterator::getNextNode() {
	{
		this->m_lastFetched = ($DTM::NULL == this->m_lastFetched) ? $nc(this->m_traverser)->first(this->m_context) : $nc(this->m_traverser)->next(this->m_context, this->m_lastFetched);
	}
	return this->m_lastFetched;
}

$DTMIterator* ChildTestIterator::cloneWithReset() {
	$var(ChildTestIterator, clone, $cast(ChildTestIterator, $BasicTestIterator::cloneWithReset()));
	$set($nc(clone), m_traverser, this->m_traverser);
	return clone;
}

void ChildTestIterator::setRoot(int32_t context, Object$* environment) {
	$BasicTestIterator::setRoot(context, environment);
	$set(this, m_traverser, $nc(this->m_cdtm)->getAxisTraverser($Axis::CHILD));
}

int32_t ChildTestIterator::getAxis() {
	return $Axis::CHILD;
}

void ChildTestIterator::detach() {
	if (this->m_allowDetach) {
		$set(this, m_traverser, nullptr);
		$BasicTestIterator::detach();
	}
}

ChildTestIterator::ChildTestIterator() {
}

$Class* ChildTestIterator::load$($String* name, bool initialize) {
	$loadClass(ChildTestIterator, name, initialize, &_ChildTestIterator_ClassInfo_, allocate$ChildTestIterator);
	return class$;
}

$Class* ChildTestIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com