#include <com/sun/org/apache/xpath/internal/axes/ContextNodeList.h>

#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$MethodInfo _ContextNodeList_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"cloneWithReset", "()Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.CloneNotSupportedException"},
	{"getCurrentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCurrentPos", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLast", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isFresh", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"runTo", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCurrentPos", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLast", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setShouldCacheNodes", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ContextNodeList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.axes.ContextNodeList",
	nullptr,
	nullptr,
	nullptr,
	_ContextNodeList_MethodInfo_
};

$Object* allocate$ContextNodeList($Class* clazz) {
	return $of($alloc(ContextNodeList));
}

$Object* ContextNodeList::clone() {
	 return this->$Object::clone();
}

$Class* ContextNodeList::load$($String* name, bool initialize) {
	$loadClass(ContextNodeList, name, initialize, &_ContextNodeList_ClassInfo_, allocate$ContextNodeList);
	return class$;
}

$Class* ContextNodeList::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com