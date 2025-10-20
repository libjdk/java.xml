#include <com/sun/org/apache/xpath/internal/functions/FuncUnparsedEntityURI.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
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

$FieldInfo _FuncUnparsedEntityURI_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncUnparsedEntityURI, serialVersionUID)},
	{}
};

$MethodInfo _FuncUnparsedEntityURI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FuncUnparsedEntityURI::*)()>(&FuncUnparsedEntityURI::init$))},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncUnparsedEntityURI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncUnparsedEntityURI",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncUnparsedEntityURI_FieldInfo_,
	_FuncUnparsedEntityURI_MethodInfo_
};

$Object* allocate$FuncUnparsedEntityURI($Class* clazz) {
	return $of($alloc(FuncUnparsedEntityURI));
}

void FuncUnparsedEntityURI::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncUnparsedEntityURI::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc($($nc(this->m_arg0)->execute(xctxt)))->str());
	int32_t context = $nc(xctxt)->getCurrentNode();
	$var($DTM, dtm, xctxt->getDTM(context));
	int32_t doc = $nc(dtm)->getDocument();
	$var($String, uri, dtm->getUnparsedEntityURI(name));
	return $new($XString, uri);
}

FuncUnparsedEntityURI::FuncUnparsedEntityURI() {
}

$Class* FuncUnparsedEntityURI::load$($String* name, bool initialize) {
	$loadClass(FuncUnparsedEntityURI, name, initialize, &_FuncUnparsedEntityURI_ClassInfo_, allocate$FuncUnparsedEntityURI);
	return class$;
}

$Class* FuncUnparsedEntityURI::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com