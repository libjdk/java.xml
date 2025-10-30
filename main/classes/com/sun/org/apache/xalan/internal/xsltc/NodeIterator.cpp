#include <com/sun/org/apache/xalan/internal/xsltc/NodeIterator.h>

#include <jcpp.h>

#undef END

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

$FieldInfo _NodeIterator_FieldInfo_[] = {
	{"END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeIterator, END)},
	{}
};

$MethodInfo _NodeIterator_MethodInfo_[] = {
	{"cloneIterator", "()Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLast", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPosition", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"gotoMark", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isReverse", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"setMark", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NodeIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.NodeIterator",
	nullptr,
	"java.lang.Cloneable",
	_NodeIterator_FieldInfo_,
	_NodeIterator_MethodInfo_
};

$Object* allocate$NodeIterator($Class* clazz) {
	return $of($alloc(NodeIterator));
}

$Class* NodeIterator::load$($String* name, bool initialize) {
	$loadClass(NodeIterator, name, initialize, &_NodeIterator_ClassInfo_, allocate$NodeIterator);
	return class$;
}

$Class* NodeIterator::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com