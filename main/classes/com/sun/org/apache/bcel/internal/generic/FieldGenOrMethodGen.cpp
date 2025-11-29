#include <com/sun/org/apache/bcel/internal/generic/FieldGenOrMethodGen.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/generic/AnnotationEntryGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Error.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef T_ADDRESS

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $AnnotationEntryGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $AccessFlags = ::com::sun::org::apache::bcel::internal::classfile::AccessFlags;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $AnnotationEntryGen = ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _FieldGenOrMethodGen_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FieldGenOrMethodGen, name)},
	{"type", "Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PRIVATE, $field(FieldGenOrMethodGen, type)},
	{"cp", "Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PRIVATE, $field(FieldGenOrMethodGen, cp)},
	{"attributeList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/classfile/Attribute;>;", $PRIVATE | $FINAL, $field(FieldGenOrMethodGen, attributeList)},
	{"annotationList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;>;", $PRIVATE | $FINAL, $field(FieldGenOrMethodGen, annotationList)},
	{}
};

$MethodInfo _FieldGenOrMethodGen_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FieldGenOrMethodGen::*)()>(&FieldGenOrMethodGen::init$))},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(FieldGenOrMethodGen::*)(int32_t)>(&FieldGenOrMethodGen::init$))},
	{"addAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;)V", nullptr, $PUBLIC},
	{"addAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAnnotationEntries", "()[Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;", nullptr, $PUBLIC},
	{"getAttributes", "()[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"removeAnnotationEntries", "()V", nullptr, $PUBLIC},
	{"removeAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;)V", nullptr, $PUBLIC},
	{"removeAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC},
	{"removeAttributes", "()V", nullptr, $PUBLIC},
	{"setConstantPool", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setType", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldGenOrMethodGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.FieldGenOrMethodGen",
	"com.sun.org.apache.bcel.internal.classfile.AccessFlags",
	"com.sun.org.apache.bcel.internal.generic.NamedAndTyped,java.lang.Cloneable",
	_FieldGenOrMethodGen_FieldInfo_,
	_FieldGenOrMethodGen_MethodInfo_
};

$Object* allocate$FieldGenOrMethodGen($Class* clazz) {
	return $of($alloc(FieldGenOrMethodGen));
}

int32_t FieldGenOrMethodGen::hashCode() {
	 return this->$AccessFlags::hashCode();
}

bool FieldGenOrMethodGen::equals(Object$* arg0) {
	 return this->$AccessFlags::equals(arg0);
}

$String* FieldGenOrMethodGen::toString() {
	 return this->$AccessFlags::toString();
}

void FieldGenOrMethodGen::finalize() {
	this->$AccessFlags::finalize();
}

void FieldGenOrMethodGen::init$() {
	$AccessFlags::init$();
	$set(this, attributeList, $new($ArrayList));
	$set(this, annotationList, $new($ArrayList));
}

void FieldGenOrMethodGen::init$(int32_t access_flags) {
	$AccessFlags::init$(access_flags);
	$set(this, attributeList, $new($ArrayList));
	$set(this, annotationList, $new($ArrayList));
}

void FieldGenOrMethodGen::setType($Type* type) {
	if ($nc(type)->getType() == $Const::T_ADDRESS) {
		$throwNew($IllegalArgumentException, $$str({"Type can not be "_s, type}));
	}
	$set(this, type, type);
}

$Type* FieldGenOrMethodGen::getType() {
	return this->type;
}

$String* FieldGenOrMethodGen::getName() {
	return this->name;
}

void FieldGenOrMethodGen::setName($String* name) {
	$set(this, name, name);
}

$ConstantPoolGen* FieldGenOrMethodGen::getConstantPool() {
	return this->cp;
}

void FieldGenOrMethodGen::setConstantPool($ConstantPoolGen* cp) {
	$set(this, cp, cp);
}

void FieldGenOrMethodGen::addAttribute($Attribute* a) {
	$nc(this->attributeList)->add(a);
}

void FieldGenOrMethodGen::addAnnotationEntry($AnnotationEntryGen* ag) {
	$nc(this->annotationList)->add(ag);
}

void FieldGenOrMethodGen::removeAttribute($Attribute* a) {
	$nc(this->attributeList)->remove($of(a));
}

void FieldGenOrMethodGen::removeAnnotationEntry($AnnotationEntryGen* ag) {
	$nc(this->annotationList)->remove($of(ag));
}

void FieldGenOrMethodGen::removeAttributes() {
	$nc(this->attributeList)->clear();
}

void FieldGenOrMethodGen::removeAnnotationEntries() {
	$nc(this->annotationList)->clear();
}

$AttributeArray* FieldGenOrMethodGen::getAttributes() {
	return $fcast($AttributeArray, $nc(this->attributeList)->toArray($$new($AttributeArray, 0)));
}

$AnnotationEntryGenArray* FieldGenOrMethodGen::getAnnotationEntries() {
	return $fcast($AnnotationEntryGenArray, $nc(this->annotationList)->toArray($$new($AnnotationEntryGenArray, 0)));
}

$Object* FieldGenOrMethodGen::clone() {
	try {
		return $of($AccessFlags::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($Error, "Clone Not Supported"_s);
	}
	$shouldNotReachHere();
}

FieldGenOrMethodGen::FieldGenOrMethodGen() {
}

$Class* FieldGenOrMethodGen::load$($String* name, bool initialize) {
	$loadClass(FieldGenOrMethodGen, name, initialize, &_FieldGenOrMethodGen_ClassInfo_, allocate$FieldGenOrMethodGen);
	return class$;
}

$Class* FieldGenOrMethodGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com