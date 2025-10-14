#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>

#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $InstructionTargeterArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionTargeter>;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionTargeter = ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$CompoundAttribute _InstructionHandle_MethodAnnotations_addHandle3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _InstructionHandle_FieldInfo_[] = {
	{"next", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(InstructionHandle, next)},
	{"prev", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(InstructionHandle, prev)},
	{"instruction", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE, $field(InstructionHandle, instruction)},
	{"i_position", "I", nullptr, $PRIVATE, $field(InstructionHandle, i_position)},
	{"targeters", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/org/apache/bcel/internal/generic/InstructionTargeter;>;", $PRIVATE, $field(InstructionHandle, targeters)},
	{"attributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(InstructionHandle, attributes)},
	{}
};

$MethodInfo _InstructionHandle_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)V", nullptr, $PROTECTED, $method(static_cast<void(InstructionHandle::*)($Instruction*)>(&InstructionHandle::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addHandle", "()V", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _InstructionHandle_MethodAnnotations_addHandle3},
	{"addTargeter", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionTargeter;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, 0},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributes", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Object;>;", $PUBLIC},
	{"getInstruction", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Instruction*(InstructionHandle::*)()>(&InstructionHandle::getInstruction))},
	{"getInstructionHandle", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $STATIC, $method(static_cast<InstructionHandle*(*)($Instruction*)>(&InstructionHandle::getInstructionHandle))},
	{"getNext", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC | $FINAL, $method(static_cast<InstructionHandle*(InstructionHandle::*)()>(&InstructionHandle::getNext))},
	{"getPosition", "()I", nullptr, $PUBLIC},
	{"getPrev", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC | $FINAL, $method(static_cast<InstructionHandle*(InstructionHandle::*)()>(&InstructionHandle::getPrev))},
	{"getTargeters", "()[Lcom/sun/org/apache/bcel/internal/generic/InstructionTargeter;", nullptr, $PUBLIC},
	{"hasTargeters", "()Z", nullptr, $PUBLIC},
	{"removeAllTargeters", "()V", nullptr, $PUBLIC},
	{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removeTargeter", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionTargeter;)V", nullptr, $PUBLIC},
	{"setInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)V", nullptr, $PUBLIC},
	{"setNext", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $FINAL, $method(static_cast<InstructionHandle*(InstructionHandle::*)(InstructionHandle*)>(&InstructionHandle::setNext))},
	{"setPosition", "(I)V", nullptr, 0},
	{"setPrev", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $FINAL, $method(static_cast<InstructionHandle*(InstructionHandle::*)(InstructionHandle*)>(&InstructionHandle::setPrev))},
	{"swapInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updatePosition", "(II)I", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InstructionHandle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.InstructionHandle",
	"java.lang.Object",
	nullptr,
	_InstructionHandle_FieldInfo_,
	_InstructionHandle_MethodInfo_
};

$Object* allocate$InstructionHandle($Class* clazz) {
	return $of($alloc(InstructionHandle));
}

void InstructionHandle::addHandle() {
}

InstructionHandle* InstructionHandle::getNext() {
	return this->next;
}

InstructionHandle* InstructionHandle::getPrev() {
	return this->prev;
}

$Instruction* InstructionHandle::getInstruction() {
	return this->instruction;
}

void InstructionHandle::setInstruction($Instruction* i) {
	if (i == nullptr) {
		$throwNew($ClassGenException, "Assigning null to handle"_s);
	}
	$load($BranchHandle);
	if (($of(this)->getClass() != $BranchHandle::class$) && ($instanceOf($BranchInstruction, i))) {
		$throwNew($ClassGenException, $$str({"Assigning branch instruction "_s, i, " to plain handle"_s}));
	}
	if (this->instruction != nullptr) {
		$nc(this->instruction)->dispose();
	}
	$set(this, instruction, i);
}

$Instruction* InstructionHandle::swapInstruction($Instruction* i) {
	$var($Instruction, oldInstruction, this->instruction);
	$set(this, instruction, i);
	return oldInstruction;
}

void InstructionHandle::init$($Instruction* i) {
	this->i_position = -1;
	setInstruction(i);
}

InstructionHandle* InstructionHandle::getInstructionHandle($Instruction* i) {
	return $new(InstructionHandle, i);
}

int32_t InstructionHandle::updatePosition(int32_t offset, int32_t max_offset) {
	this->i_position += offset;
	return 0;
}

int32_t InstructionHandle::getPosition() {
	return this->i_position;
}

void InstructionHandle::setPosition(int32_t pos) {
	this->i_position = pos;
}

void InstructionHandle::dispose() {
	$set(this, next, ($assignField(this, prev, nullptr)));
	$nc(this->instruction)->dispose();
	$set(this, instruction, nullptr);
	this->i_position = -1;
	$set(this, attributes, nullptr);
	removeAllTargeters();
}

void InstructionHandle::removeAllTargeters() {
	if (this->targeters != nullptr) {
		$nc(this->targeters)->clear();
	}
}

void InstructionHandle::removeTargeter($InstructionTargeter* t) {
	if (this->targeters != nullptr) {
		$nc(this->targeters)->remove(t);
	}
}

void InstructionHandle::addTargeter($InstructionTargeter* t) {
	if (this->targeters == nullptr) {
		$set(this, targeters, $new($HashSet));
	}
	$nc(this->targeters)->add(t);
}

bool InstructionHandle::hasTargeters() {
	return (this->targeters != nullptr) && ($nc(this->targeters)->size() > 0);
}

$InstructionTargeterArray* InstructionHandle::getTargeters() {
	if (!hasTargeters()) {
		return $new($InstructionTargeterArray, 0);
	}
	$var($InstructionTargeterArray, t, $new($InstructionTargeterArray, $nc(this->targeters)->size()));
	$nc(this->targeters)->toArray(t);
	return t;
}

$String* InstructionHandle::toString(bool verbose) {
	$var($String, var$0, $$str({$($Utility::format(this->i_position, 4, false, u' ')), ": "_s}));
	return $concat(var$0, $($nc(this->instruction)->toString(verbose)));
}

$String* InstructionHandle::toString() {
	return toString(true);
}

void InstructionHandle::addAttribute(Object$* key, Object$* attr) {
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashMap, 3));
	}
	$nc(this->attributes)->put(key, attr);
}

void InstructionHandle::removeAttribute(Object$* key) {
	if (this->attributes != nullptr) {
		$nc(this->attributes)->remove(key);
	}
}

$Object* InstructionHandle::getAttribute(Object$* key) {
	if (this->attributes != nullptr) {
		return $of($nc(this->attributes)->get(key));
	}
	return $of(nullptr);
}

$Collection* InstructionHandle::getAttributes() {
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashMap, 3));
	}
	return $nc(this->attributes)->values();
}

void InstructionHandle::accept($Visitor* v) {
	$nc(this->instruction)->accept(v);
}

InstructionHandle* InstructionHandle::setNext(InstructionHandle* next) {
	$set(this, next, next);
	return next;
}

InstructionHandle* InstructionHandle::setPrev(InstructionHandle* prev) {
	$set(this, prev, prev);
	return prev;
}

InstructionHandle::InstructionHandle() {
}

$Class* InstructionHandle::load$($String* name, bool initialize) {
	$loadClass(InstructionHandle, name, initialize, &_InstructionHandle_ClassInfo_, allocate$InstructionHandle);
	return class$;
}

$Class* InstructionHandle::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com