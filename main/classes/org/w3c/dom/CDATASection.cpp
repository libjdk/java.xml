#include <org/w3c/dom/CDATASection.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Text = ::org::w3c::dom::Text;

namespace org {
	namespace w3c {
		namespace dom {

$ClassInfo _CDATASection_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.CDATASection",
	nullptr,
	"org.w3c.dom.Text"
};

$Object* allocate$CDATASection($Class* clazz) {
	return $of($alloc(CDATASection));
}

$Class* CDATASection::load$($String* name, bool initialize) {
	$loadClass(CDATASection, name, initialize, &_CDATASection_ClassInfo_, allocate$CDATASection);
	return class$;
}

$Class* CDATASection::class$ = nullptr;

		} // dom
	} // w3c
} // org