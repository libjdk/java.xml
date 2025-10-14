#include <javax/xml/xpath/XPathNodes.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace xpath {

$MethodInfo _XPathNodes_MethodInfo_[] = {
	{"get", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.xpath.XPathException"},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XPathNodes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.xpath.XPathNodes",
	nullptr,
	"java.lang.Iterable",
	nullptr,
	_XPathNodes_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Lorg/w3c/dom/Node;>;"
};

$Object* allocate$XPathNodes($Class* clazz) {
	return $of($alloc(XPathNodes));
}

$Class* XPathNodes::load$($String* name, bool initialize) {
	$loadClass(XPathNodes, name, initialize, &_XPathNodes_ClassInfo_, allocate$XPathNodes);
	return class$;
}

$Class* XPathNodes::class$ = nullptr;

		} // xpath
	} // xml
} // javax