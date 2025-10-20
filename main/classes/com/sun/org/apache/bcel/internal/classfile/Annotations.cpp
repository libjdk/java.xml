#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _Annotations_FieldInfo_[] = {
	{"annotationTable", "[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PRIVATE, $field(Annotations, annotationTable)},
	{"isRuntimeVisible", "Z", nullptr, $PRIVATE | $FINAL, $field(Annotations, isRuntimeVisible$)},
	{}
};

$MethodInfo _Annotations_MethodInfo_[] = {
	{"<init>", "(BIILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;Z)V", nullptr, 0, $method(static_cast<void(Annotations::*)(int8_t,int32_t,int32_t,$DataInput*,$ConstantPool*,bool)>(&Annotations::init$)), "java.io.IOException"},
	{"<init>", "(BII[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Annotations::*)(int8_t,int32_t,int32_t,$AnnotationEntryArray*,$ConstantPool*,bool)>(&Annotations::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"getAnnotationEntries", "()[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PUBLIC},
	{"getNumAnnotations", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Annotations::*)()>(&Annotations::getNumAnnotations))},
	{"isRuntimeVisible", "()Z", nullptr, $PUBLIC},
	{"setAnnotationTable", "([Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Annotations::*)($AnnotationEntryArray*)>(&Annotations::setAnnotationTable))},
	{"writeAnnotations", "(Ljava/io/DataOutputStream;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _Annotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.Annotations",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_Annotations_FieldInfo_,
	_Annotations_MethodInfo_
};

$Object* allocate$Annotations($Class* clazz) {
	return $of($alloc(Annotations));
}

void Annotations::init$(int8_t annotation_type, int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool, bool isRuntimeVisible) {
	$useLocalCurrentObjectStackCache();
	Annotations::init$(annotation_type, name_index, length, ($AnnotationEntryArray*)nullptr, constant_pool, isRuntimeVisible);
	int32_t annotation_table_length = $nc(input)->readUnsignedShort();
	$set(this, annotationTable, $new($AnnotationEntryArray, annotation_table_length));
	for (int32_t i = 0; i < annotation_table_length; ++i) {
		$nc(this->annotationTable)->set(i, $($AnnotationEntry::read(input, constant_pool, isRuntimeVisible)));
	}
}

void Annotations::init$(int8_t annotationType, int32_t nameIndex, int32_t length, $AnnotationEntryArray* annotationTable, $ConstantPool* constantPool, bool isRuntimeVisible) {
	$Attribute::init$(annotationType, nameIndex, length, constantPool);
	$set(this, annotationTable, annotationTable);
	this->isRuntimeVisible$ = isRuntimeVisible;
}

void Annotations::accept($Visitor* v) {
	$nc(v)->visitAnnotation(this);
}

void Annotations::setAnnotationTable($AnnotationEntryArray* annotationTable) {
	$set(this, annotationTable, annotationTable);
}

$AnnotationEntryArray* Annotations::getAnnotationEntries() {
	return this->annotationTable;
}

int32_t Annotations::getNumAnnotations() {
	if (this->annotationTable == nullptr) {
		return 0;
	}
	return $nc(this->annotationTable)->length;
}

bool Annotations::isRuntimeVisible() {
	return this->isRuntimeVisible$;
}

void Annotations::writeAnnotations($DataOutputStream* dos) {
	$useLocalCurrentObjectStackCache();
	if (this->annotationTable == nullptr) {
		return;
	}
	$nc(dos)->writeShort($nc(this->annotationTable)->length);
	{
		$var($AnnotationEntryArray, arr$, this->annotationTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AnnotationEntry, element, arr$->get(i$));
			{
				$nc(element)->dump(dos);
			}
		}
	}
}

Annotations::Annotations() {
}

$Class* Annotations::load$($String* name, bool initialize) {
	$loadClass(Annotations, name, initialize, &_Annotations_ClassInfo_, allocate$Annotations);
	return class$;
}

$Class* Annotations::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com