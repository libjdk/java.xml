#include <com/sun/org/apache/xpath/internal/operations/Equals.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef S_FALSE
#undef S_TRUE

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Operation = ::com::sun::org::apache::xpath::internal::operations::Operation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace operations {

$FieldInfo _Equals_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Equals, serialVersionUID)},
	{}
};

$MethodInfo _Equals_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Equals::*)()>(&Equals::init$))},
	{"bool", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Z", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Equals_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Equals",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Equals_FieldInfo_,
	_Equals_MethodInfo_
};

$Object* allocate$Equals($Class* clazz) {
	return $of($alloc(Equals));
}

void Equals::init$() {
	$Operation::init$();
}

$XObject* Equals::operate($XObject* left, $XObject* right) {
	$init($XBoolean);
	return $nc(left)->equals(right) ? static_cast<$XObject*>($XBoolean::S_TRUE) : static_cast<$XObject*>($XBoolean::S_FALSE);
}

bool Equals::bool$($XPathContext* xctxt) {
	$var($XObject, left, $nc(this->m_left)->execute(xctxt, true));
	$var($XObject, right, $nc(this->m_right)->execute(xctxt, true));
	bool result = $nc(left)->equals(right) ? true : false;
	$nc(left)->detach();
	$nc(right)->detach();
	return result;
}

Equals::Equals() {
}

$Class* Equals::load$($String* name, bool initialize) {
	$loadClass(Equals, name, initialize, &_Equals_ClassInfo_, allocate$Equals);
	return class$;
}

$Class* Equals::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com