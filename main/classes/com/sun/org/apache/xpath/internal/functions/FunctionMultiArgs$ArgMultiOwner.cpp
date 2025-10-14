#include <com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs$ArgMultiOwner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ExpressionArray = $Array<::com::sun::org::apache::xpath::internal::Expression>;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $Function2Args = ::com::sun::org::apache::xpath::internal::functions::Function2Args;
using $Function3Args = ::com::sun::org::apache::xpath::internal::functions::Function3Args;
using $FunctionMultiArgs = ::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FunctionMultiArgs$ArgMultiOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/functions/FunctionMultiArgs;", nullptr, $FINAL | $SYNTHETIC, $field(FunctionMultiArgs$ArgMultiOwner, this$0)},
	{"m_argIndex", "I", nullptr, 0, $field(FunctionMultiArgs$ArgMultiOwner, m_argIndex)},
	{}
};

$MethodInfo _FunctionMultiArgs$ArgMultiOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/functions/FunctionMultiArgs;I)V", nullptr, 0, $method(static_cast<void(FunctionMultiArgs$ArgMultiOwner::*)($FunctionMultiArgs*,int32_t)>(&FunctionMultiArgs$ArgMultiOwner::init$))},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FunctionMultiArgs$ArgMultiOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs$ArgMultiOwner", "com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs", "ArgMultiOwner", 0},
	{}
};

$ClassInfo _FunctionMultiArgs$ArgMultiOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs$ArgMultiOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_FunctionMultiArgs$ArgMultiOwner_FieldInfo_,
	_FunctionMultiArgs$ArgMultiOwner_MethodInfo_,
	nullptr,
	nullptr,
	_FunctionMultiArgs$ArgMultiOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs"
};

$Object* allocate$FunctionMultiArgs$ArgMultiOwner($Class* clazz) {
	return $of($alloc(FunctionMultiArgs$ArgMultiOwner));
}

void FunctionMultiArgs$ArgMultiOwner::init$($FunctionMultiArgs* this$0, int32_t index) {
	$set(this, this$0, this$0);
	this->m_argIndex = index;
}

$Expression* FunctionMultiArgs$ArgMultiOwner::getExpression() {
	return $nc(this->this$0->m_args)->get(this->m_argIndex);
}

void FunctionMultiArgs$ArgMultiOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$nc(this->this$0->m_args)->set(this->m_argIndex, exp);
}

FunctionMultiArgs$ArgMultiOwner::FunctionMultiArgs$ArgMultiOwner() {
}

$Class* FunctionMultiArgs$ArgMultiOwner::load$($String* name, bool initialize) {
	$loadClass(FunctionMultiArgs$ArgMultiOwner, name, initialize, &_FunctionMultiArgs$ArgMultiOwner_ClassInfo_, allocate$FunctionMultiArgs$ArgMultiOwner);
	return class$;
}

$Class* FunctionMultiArgs$ArgMultiOwner::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com