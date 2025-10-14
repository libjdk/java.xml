#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ConditionOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ModifierOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$RangeOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$StringOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$UnionOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ANCHOR
#undef BACKREFERENCE
#undef CAPTURE
#undef CHAR
#undef CLOSURE
#undef CONDITION
#undef COUNT
#undef DOT
#undef INDEPENDENT
#undef LOOKAHEAD
#undef LOOKBEHIND
#undef MODIFIER
#undef NEGATIVELOOKAHEAD
#undef NEGATIVELOOKBEHIND
#undef NONGREEDYCLOSURE
#undef NONGREEDYQUESTION
#undef NRANGE
#undef QUESTION
#undef RANGE
#undef STRING
#undef UNION

using $Op$CharOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$CharOp;
using $Op$ChildOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp;
using $Op$ConditionOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ConditionOp;
using $Op$ModifierOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ModifierOp;
using $Op$RangeOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$RangeOp;
using $Op$StringOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$StringOp;
using $Op$UnionOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$UnionOp;
using $RangeToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken;
using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _Op_FieldInfo_[] = {
	{"DOT", "I", nullptr, $STATIC | $FINAL, $constField(Op, DOT)},
	{"CHAR", "I", nullptr, $STATIC | $FINAL, $constField(Op, CHAR)},
	{"RANGE", "I", nullptr, $STATIC | $FINAL, $constField(Op, RANGE)},
	{"NRANGE", "I", nullptr, $STATIC | $FINAL, $constField(Op, NRANGE)},
	{"ANCHOR", "I", nullptr, $STATIC | $FINAL, $constField(Op, ANCHOR)},
	{"STRING", "I", nullptr, $STATIC | $FINAL, $constField(Op, STRING)},
	{"CLOSURE", "I", nullptr, $STATIC | $FINAL, $constField(Op, CLOSURE)},
	{"NONGREEDYCLOSURE", "I", nullptr, $STATIC | $FINAL, $constField(Op, NONGREEDYCLOSURE)},
	{"QUESTION", "I", nullptr, $STATIC | $FINAL, $constField(Op, QUESTION)},
	{"NONGREEDYQUESTION", "I", nullptr, $STATIC | $FINAL, $constField(Op, NONGREEDYQUESTION)},
	{"UNION", "I", nullptr, $STATIC | $FINAL, $constField(Op, UNION)},
	{"CAPTURE", "I", nullptr, $STATIC | $FINAL, $constField(Op, CAPTURE)},
	{"BACKREFERENCE", "I", nullptr, $STATIC | $FINAL, $constField(Op, BACKREFERENCE)},
	{"LOOKAHEAD", "I", nullptr, $STATIC | $FINAL, $constField(Op, LOOKAHEAD)},
	{"NEGATIVELOOKAHEAD", "I", nullptr, $STATIC | $FINAL, $constField(Op, NEGATIVELOOKAHEAD)},
	{"LOOKBEHIND", "I", nullptr, $STATIC | $FINAL, $constField(Op, LOOKBEHIND)},
	{"NEGATIVELOOKBEHIND", "I", nullptr, $STATIC | $FINAL, $constField(Op, NEGATIVELOOKBEHIND)},
	{"INDEPENDENT", "I", nullptr, $STATIC | $FINAL, $constField(Op, INDEPENDENT)},
	{"MODIFIER", "I", nullptr, $STATIC | $FINAL, $constField(Op, MODIFIER)},
	{"CONDITION", "I", nullptr, $STATIC | $FINAL, $constField(Op, CONDITION)},
	{"nofinstances", "I", nullptr, $STATIC, $staticField(Op, nofinstances)},
	{"COUNT", "Z", nullptr, $STATIC | $FINAL, $constField(Op, COUNT)},
	{"type", "I", nullptr, $FINAL, $field(Op, type)},
	{"next", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $field(Op, next)},
	{}
};

$MethodInfo _Op_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Op::*)(int32_t)>(&Op::init$))},
	{"createAnchor", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp;", nullptr, $STATIC, $method(static_cast<$Op$CharOp*(*)(int32_t)>(&Op::createAnchor))},
	{"createBackReference", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp;", nullptr, $STATIC, $method(static_cast<$Op$CharOp*(*)(int32_t)>(&Op::createBackReference))},
	{"createCapture", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp;", nullptr, $STATIC, $method(static_cast<$Op$CharOp*(*)(int32_t,Op*)>(&Op::createCapture))},
	{"createChar", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp;", nullptr, $STATIC, $method(static_cast<$Op$CharOp*(*)(int32_t)>(&Op::createChar))},
	{"createClosure", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $method(static_cast<$Op$ChildOp*(*)(int32_t)>(&Op::createClosure))},
	{"createCondition", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ConditionOp;", nullptr, $STATIC, $method(static_cast<$Op$ConditionOp*(*)(Op*,int32_t,Op*,Op*,Op*)>(&Op::createCondition))},
	{"createDot", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, $STATIC, $method(static_cast<Op*(*)()>(&Op::createDot))},
	{"createIndependent", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $method(static_cast<$Op$ChildOp*(*)(Op*,Op*)>(&Op::createIndependent))},
	{"createLook", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $method(static_cast<$Op$ChildOp*(*)(int32_t,Op*,Op*)>(&Op::createLook))},
	{"createModifier", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;II)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ModifierOp;", nullptr, $STATIC, $method(static_cast<$Op$ModifierOp*(*)(Op*,Op*,int32_t,int32_t)>(&Op::createModifier))},
	{"createNonGreedyClosure", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $method(static_cast<$Op$ChildOp*(*)()>(&Op::createNonGreedyClosure))},
	{"createQuestion", "(Z)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $method(static_cast<$Op$ChildOp*(*)(bool)>(&Op::createQuestion))},
	{"createRange", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$RangeOp;", nullptr, $STATIC, $method(static_cast<$Op$RangeOp*(*)($Token*)>(&Op::createRange))},
	{"createString", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$StringOp;", nullptr, $STATIC, $method(static_cast<$Op$StringOp*(*)($String*)>(&Op::createString))},
	{"createUnion", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$UnionOp;", nullptr, $STATIC, $method(static_cast<$Op$UnionOp*(*)(int32_t)>(&Op::createUnion))},
	{"elementAt", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0},
	{"getChild", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0},
	{"getData", "()I", nullptr, 0},
	{"getData2", "()I", nullptr, 0},
	{"getString", "()Ljava/lang/String;", nullptr, 0},
	{"getToken", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, 0},
	{"size", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _Op_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ConditionOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ConditionOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$StringOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "StringOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$RangeOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "RangeOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ModifierOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ModifierOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ChildOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$UnionOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "UnionOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$CharOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "CharOp", $STATIC},
	{}
};

$ClassInfo _Op_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op",
	"java.lang.Object",
	nullptr,
	_Op_FieldInfo_,
	_Op_MethodInfo_,
	nullptr,
	nullptr,
	_Op_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ConditionOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$StringOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$RangeOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ModifierOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$UnionOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$CharOp"
};

$Object* allocate$Op($Class* clazz) {
	return $of($alloc(Op));
}

int32_t Op::nofinstances = 0;

Op* Op::createDot() {
	$init(Op);
	return $new(Op, Op::DOT);
}

$Op$CharOp* Op::createChar(int32_t data) {
	$init(Op);
	return $new($Op$CharOp, Op::CHAR, data);
}

$Op$CharOp* Op::createAnchor(int32_t data) {
	$init(Op);
	return $new($Op$CharOp, Op::ANCHOR, data);
}

$Op$CharOp* Op::createCapture(int32_t number, Op* next) {
	$init(Op);
	$var($Op$CharOp, op, $new($Op$CharOp, Op::CAPTURE, number));
	$set(op, next, next);
	return op;
}

$Op$UnionOp* Op::createUnion(int32_t size) {
	$init(Op);
	return $new($Op$UnionOp, Op::UNION, size);
}

$Op$ChildOp* Op::createClosure(int32_t id) {
	$init(Op);
	return $new($Op$ModifierOp, Op::CLOSURE, id, -1);
}

$Op$ChildOp* Op::createNonGreedyClosure() {
	$init(Op);
	return $new($Op$ChildOp, Op::NONGREEDYCLOSURE);
}

$Op$ChildOp* Op::createQuestion(bool nongreedy) {
	$init(Op);
	return $new($Op$ChildOp, nongreedy ? Op::NONGREEDYQUESTION : Op::QUESTION);
}

$Op$RangeOp* Op::createRange($Token* tok) {
	$init(Op);
	return $new($Op$RangeOp, Op::RANGE, tok);
}

$Op$ChildOp* Op::createLook(int32_t type, Op* next, Op* branch) {
	$init(Op);
	$var($Op$ChildOp, op, $new($Op$ChildOp, type));
	op->setChild(branch);
	$set(op, next, next);
	return op;
}

$Op$CharOp* Op::createBackReference(int32_t refno) {
	$init(Op);
	return $new($Op$CharOp, Op::BACKREFERENCE, refno);
}

$Op$StringOp* Op::createString($String* literal) {
	$init(Op);
	return $new($Op$StringOp, Op::STRING, literal);
}

$Op$ChildOp* Op::createIndependent(Op* next, Op* branch) {
	$init(Op);
	$var($Op$ChildOp, op, $new($Op$ChildOp, Op::INDEPENDENT));
	op->setChild(branch);
	$set(op, next, next);
	return op;
}

$Op$ModifierOp* Op::createModifier(Op* next, Op* branch, int32_t add, int32_t mask) {
	$init(Op);
	$var($Op$ModifierOp, op, $new($Op$ModifierOp, Op::MODIFIER, add, mask));
	op->setChild(branch);
	$set(op, next, next);
	return op;
}

$Op$ConditionOp* Op::createCondition(Op* next, int32_t ref, Op* conditionflow, Op* yesflow, Op* noflow) {
	$init(Op);
	$var($Op$ConditionOp, op, $new($Op$ConditionOp, Op::CONDITION, ref, conditionflow, yesflow, noflow));
	$set(op, next, next);
	return op;
}

void Op::init$(int32_t type) {
	$set(this, next, nullptr);
	this->type = type;
}

int32_t Op::size() {
	return 0;
}

Op* Op::elementAt(int32_t index) {
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

Op* Op::getChild() {
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

int32_t Op::getData() {
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

int32_t Op::getData2() {
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

$RangeToken* Op::getToken() {
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

$String* Op::getString() {
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

void clinit$Op($Class* class$) {
	Op::nofinstances = 0;
}

Op::Op() {
}

$Class* Op::load$($String* name, bool initialize) {
	$loadClass(Op, name, initialize, &_Op_ClassInfo_, clinit$Op, allocate$Op);
	return class$;
}

$Class* Op::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com