#include <com/sun/org/apache/xalan/internal/xsltc/dom/FilteredStepIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/Filter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/StepIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef END

using $Filter = ::com::sun::org::apache::xalan::internal::xsltc::dom::Filter;
using $StepIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::StepIterator;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _FilteredStepIterator_FieldInfo_[] = {
	{"_filter", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/Filter;", nullptr, $PRIVATE, $field(FilteredStepIterator, _filter)},
	{}
};

$MethodInfo _FilteredStepIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xalan/internal/xsltc/dom/Filter;)V", nullptr, $PUBLIC, $method(static_cast<void(FilteredStepIterator::*)($DTMAxisIterator*,$DTMAxisIterator*,$Filter*)>(&FilteredStepIterator::init$))},
	{"next", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FilteredStepIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.FilteredStepIterator",
	"com.sun.org.apache.xalan.internal.xsltc.dom.StepIterator",
	nullptr,
	_FilteredStepIterator_FieldInfo_,
	_FilteredStepIterator_MethodInfo_
};

$Object* allocate$FilteredStepIterator($Class* clazz) {
	return $of($alloc(FilteredStepIterator));
}

void FilteredStepIterator::init$($DTMAxisIterator* source, $DTMAxisIterator* iterator, $Filter* filter) {
	$StepIterator::init$(source, iterator);
	$set(this, _filter, filter);
}

int32_t FilteredStepIterator::next() {
	int32_t node = 0;
	while ((node = $StepIterator::next()) != $DTMAxisIterator::END) {
		if ($nc(this->_filter)->test(node)) {
			return returnNode(node);
		}
	}
	return node;
}

FilteredStepIterator::FilteredStepIterator() {
}

$Class* FilteredStepIterator::load$($String* name, bool initialize) {
	$loadClass(FilteredStepIterator, name, initialize, &_FilteredStepIterator_ClassInfo_, allocate$FilteredStepIterator);
	return class$;
}

$Class* FilteredStepIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com