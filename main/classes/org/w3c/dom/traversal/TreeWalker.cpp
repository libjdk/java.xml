#include <org/w3c/dom/traversal/TreeWalker.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;

namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {

$MethodInfo _TreeWalker_MethodInfo_[] = {
	{"firstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCurrentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getFilter", "()Lorg/w3c/dom/traversal/NodeFilter;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWhatToShow", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"lastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"nextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"nextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"parentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"previousNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"previousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"setCurrentNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _TreeWalker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.traversal.TreeWalker",
	nullptr,
	nullptr,
	nullptr,
	_TreeWalker_MethodInfo_
};

$Object* allocate$TreeWalker($Class* clazz) {
	return $of($alloc(TreeWalker));
}

$Class* TreeWalker::load$($String* name, bool initialize) {
	$loadClass(TreeWalker, name, initialize, &_TreeWalker_ClassInfo_, allocate$TreeWalker);
	return class$;
}

$Class* TreeWalker::class$ = nullptr;

			} // traversal
		} // dom
	} // w3c
} // org