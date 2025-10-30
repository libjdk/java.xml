#include <com/sun/org/apache/xpath/internal/functions/FuncQname.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionDef1Arg = ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncQname_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncQname, serialVersionUID)},
	{}
};

$MethodInfo _FuncQname_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FuncQname::*)()>(&FuncQname::init$))},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncQname_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncQname",
	"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
	nullptr,
	_FuncQname_FieldInfo_,
	_FuncQname_MethodInfo_
};

$Object* allocate$FuncQname($Class* clazz) {
	return $of($alloc(FuncQname));
}

void FuncQname::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncQname::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	int32_t context = getArg0AsNode(xctxt);
	$var($XObject, val, nullptr);
	if ($DTM::NULL != context) {
		$var($DTM, dtm, $nc(xctxt)->getDTM(context));
		$var($String, qname, $nc(dtm)->getNodeNameX(context));
		$init($XString);
		$assign(val, (nullptr == qname) ? static_cast<$XObject*>($XString::EMPTYSTRING) : static_cast<$XObject*>($new($XString, qname)));
	} else {
		$init($XString);
		$assign(val, $XString::EMPTYSTRING);
	}
	return val;
}

FuncQname::FuncQname() {
}

$Class* FuncQname::load$($String* name, bool initialize) {
	$loadClass(FuncQname, name, initialize, &_FuncQname_ClassInfo_, allocate$FuncQname);
	return class$;
}

$Class* FuncQname::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com