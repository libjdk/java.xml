#include <org/w3c/dom/ProcessingInstruction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _ProcessingInstruction_MethodInfo_[] = {
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _ProcessingInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ProcessingInstruction",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_ProcessingInstruction_MethodInfo_
};

$Object* allocate$ProcessingInstruction($Class* clazz) {
	return $of($alloc(ProcessingInstruction));
}

$Class* ProcessingInstruction::load$($String* name, bool initialize) {
	$loadClass(ProcessingInstruction, name, initialize, &_ProcessingInstruction_ClassInfo_, allocate$ProcessingInstruction);
	return class$;
}

$Class* ProcessingInstruction::class$ = nullptr;

		} // dom
	} // w3c
} // org