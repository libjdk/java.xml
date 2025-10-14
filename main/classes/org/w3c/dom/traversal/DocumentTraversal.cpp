#include <org/w3c/dom/traversal/DocumentTraversal.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <org/w3c/dom/traversal/TreeWalker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;
using $TreeWalker = ::org::w3c::dom::traversal::TreeWalker;

namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {

$MethodInfo _DocumentTraversal_MethodInfo_[] = {
	{"createNodeIterator", "(Lorg/w3c/dom/Node;ILorg/w3c/dom/traversal/NodeFilter;Z)Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createTreeWalker", "(Lorg/w3c/dom/Node;ILorg/w3c/dom/traversal/NodeFilter;Z)Lorg/w3c/dom/traversal/TreeWalker;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _DocumentTraversal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.traversal.DocumentTraversal",
	nullptr,
	nullptr,
	nullptr,
	_DocumentTraversal_MethodInfo_
};

$Object* allocate$DocumentTraversal($Class* clazz) {
	return $of($alloc(DocumentTraversal));
}

$Class* DocumentTraversal::load$($String* name, bool initialize) {
	$loadClass(DocumentTraversal, name, initialize, &_DocumentTraversal_ClassInfo_, allocate$DocumentTraversal);
	return class$;
}

$Class* DocumentTraversal::class$ = nullptr;

			} // traversal
		} // dom
	} // w3c
} // org