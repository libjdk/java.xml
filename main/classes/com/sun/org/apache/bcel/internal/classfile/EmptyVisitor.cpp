#include <com/sun/org/apache/bcel/internal/classfile/EmptyVisitor.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationDefault.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/BootstrapMethods.h>
#include <com/sun/org/apache/bcel/internal/classfile/Code.h>
#include <com/sun/org/apache/bcel/internal/classfile/CodeException.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDouble.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDynamic.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFieldref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFloat.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInteger.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantLong.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantModule.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPackage.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantString.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/Deprecated.h>
#include <com/sun/org/apache/bcel/internal/classfile/EnclosingMethod.h>
#include <com/sun/org/apache/bcel/internal/classfile/ExceptionTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClasses.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumber.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumberTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/MethodParameter.h>
#include <com/sun/org/apache/bcel/internal/classfile/MethodParameters.h>
#include <com/sun/org/apache/bcel/internal/classfile/Module.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleExports.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleMainClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleOpens.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModulePackages.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleProvides.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleRequires.h>
#include <com/sun/org/apache/bcel/internal/classfile/NestHost.h>
#include <com/sun/org/apache/bcel/internal/classfile/NestMembers.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Signature.h>
#include <com/sun/org/apache/bcel/internal/classfile/SourceFile.h>
#include <com/sun/org/apache/bcel/internal/classfile/StackMap.h>
#include <com/sun/org/apache/bcel/internal/classfile/StackMapEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Synthetic.h>
#include <com/sun/org/apache/bcel/internal/classfile/Unknown.h>
#include <jcpp.h>

using $AnnotationDefault = ::com::sun::org::apache::bcel::internal::classfile::AnnotationDefault;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Annotations = ::com::sun::org::apache::bcel::internal::classfile::Annotations;
using $BootstrapMethods = ::com::sun::org::apache::bcel::internal::classfile::BootstrapMethods;
using $Code = ::com::sun::org::apache::bcel::internal::classfile::Code;
using $CodeException = ::com::sun::org::apache::bcel::internal::classfile::CodeException;
using $ConstantClass = ::com::sun::org::apache::bcel::internal::classfile::ConstantClass;
using $ConstantDouble = ::com::sun::org::apache::bcel::internal::classfile::ConstantDouble;
using $ConstantDynamic = ::com::sun::org::apache::bcel::internal::classfile::ConstantDynamic;
using $ConstantFieldref = ::com::sun::org::apache::bcel::internal::classfile::ConstantFieldref;
using $ConstantFloat = ::com::sun::org::apache::bcel::internal::classfile::ConstantFloat;
using $ConstantInteger = ::com::sun::org::apache::bcel::internal::classfile::ConstantInteger;
using $ConstantInterfaceMethodref = ::com::sun::org::apache::bcel::internal::classfile::ConstantInterfaceMethodref;
using $ConstantInvokeDynamic = ::com::sun::org::apache::bcel::internal::classfile::ConstantInvokeDynamic;
using $ConstantLong = ::com::sun::org::apache::bcel::internal::classfile::ConstantLong;
using $ConstantMethodHandle = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodHandle;
using $ConstantMethodType = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodType;
using $ConstantMethodref = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodref;
using $ConstantModule = ::com::sun::org::apache::bcel::internal::classfile::ConstantModule;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPackage = ::com::sun::org::apache::bcel::internal::classfile::ConstantPackage;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantString = ::com::sun::org::apache::bcel::internal::classfile::ConstantString;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ConstantValue = ::com::sun::org::apache::bcel::internal::classfile::ConstantValue;
using $Deprecated = ::com::sun::org::apache::bcel::internal::classfile::Deprecated;
using $EnclosingMethod = ::com::sun::org::apache::bcel::internal::classfile::EnclosingMethod;
using $ExceptionTable = ::com::sun::org::apache::bcel::internal::classfile::ExceptionTable;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $InnerClass = ::com::sun::org::apache::bcel::internal::classfile::InnerClass;
using $InnerClasses = ::com::sun::org::apache::bcel::internal::classfile::InnerClasses;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $LineNumber = ::com::sun::org::apache::bcel::internal::classfile::LineNumber;
using $LineNumberTable = ::com::sun::org::apache::bcel::internal::classfile::LineNumberTable;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
using $LocalVariableTypeTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTypeTable;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $MethodParameter = ::com::sun::org::apache::bcel::internal::classfile::MethodParameter;
using $MethodParameters = ::com::sun::org::apache::bcel::internal::classfile::MethodParameters;
using $Module = ::com::sun::org::apache::bcel::internal::classfile::Module;
using $ModuleExports = ::com::sun::org::apache::bcel::internal::classfile::ModuleExports;
using $ModuleMainClass = ::com::sun::org::apache::bcel::internal::classfile::ModuleMainClass;
using $ModuleOpens = ::com::sun::org::apache::bcel::internal::classfile::ModuleOpens;
using $ModulePackages = ::com::sun::org::apache::bcel::internal::classfile::ModulePackages;
using $ModuleProvides = ::com::sun::org::apache::bcel::internal::classfile::ModuleProvides;
using $ModuleRequires = ::com::sun::org::apache::bcel::internal::classfile::ModuleRequires;
using $NestHost = ::com::sun::org::apache::bcel::internal::classfile::NestHost;
using $NestMembers = ::com::sun::org::apache::bcel::internal::classfile::NestMembers;
using $ParameterAnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry;
using $ParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations;
using $Signature = ::com::sun::org::apache::bcel::internal::classfile::Signature;
using $SourceFile = ::com::sun::org::apache::bcel::internal::classfile::SourceFile;
using $StackMap = ::com::sun::org::apache::bcel::internal::classfile::StackMap;
using $StackMapEntry = ::com::sun::org::apache::bcel::internal::classfile::StackMapEntry;
using $Synthetic = ::com::sun::org::apache::bcel::internal::classfile::Synthetic;
using $Unknown = ::com::sun::org::apache::bcel::internal::classfile::Unknown;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _EmptyVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(EmptyVisitor::*)()>(&EmptyVisitor::init$))},
	{"visitAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/Annotations;)V", nullptr, $PUBLIC},
	{"visitAnnotationDefault", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationDefault;)V", nullptr, $PUBLIC},
	{"visitAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;)V", nullptr, $PUBLIC},
	{"visitBootstrapMethods", "(Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethods;)V", nullptr, $PUBLIC},
	{"visitCode", "(Lcom/sun/org/apache/bcel/internal/classfile/Code;)V", nullptr, $PUBLIC},
	{"visitCodeException", "(Lcom/sun/org/apache/bcel/internal/classfile/CodeException;)V", nullptr, $PUBLIC},
	{"visitConstantClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantClass;)V", nullptr, $PUBLIC},
	{"visitConstantDouble", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDouble;)V", nullptr, $PUBLIC},
	{"visitConstantDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDynamic;)V", nullptr, $PUBLIC},
	{"visitConstantFieldref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFieldref;)V", nullptr, $PUBLIC},
	{"visitConstantFloat", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFloat;)V", nullptr, $PUBLIC},
	{"visitConstantInteger", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInteger;)V", nullptr, $PUBLIC},
	{"visitConstantInterfaceMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref;)V", nullptr, $PUBLIC},
	{"visitConstantInvokeDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic;)V", nullptr, $PUBLIC},
	{"visitConstantLong", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantLong;)V", nullptr, $PUBLIC},
	{"visitConstantMethodHandle", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle;)V", nullptr, $PUBLIC},
	{"visitConstantMethodType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodType;)V", nullptr, $PUBLIC},
	{"visitConstantMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodref;)V", nullptr, $PUBLIC},
	{"visitConstantModule", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantModule;)V", nullptr, $PUBLIC},
	{"visitConstantNameAndType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantNameAndType;)V", nullptr, $PUBLIC},
	{"visitConstantPackage", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPackage;)V", nullptr, $PUBLIC},
	{"visitConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC},
	{"visitConstantString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantString;)V", nullptr, $PUBLIC},
	{"visitConstantUtf8", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;)V", nullptr, $PUBLIC},
	{"visitConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantValue;)V", nullptr, $PUBLIC},
	{"visitDeprecated", "(Lcom/sun/org/apache/bcel/internal/classfile/Deprecated;)V", nullptr, $PUBLIC},
	{"visitEnclosingMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/EnclosingMethod;)V", nullptr, $PUBLIC},
	{"visitExceptionTable", "(Lcom/sun/org/apache/bcel/internal/classfile/ExceptionTable;)V", nullptr, $PUBLIC},
	{"visitField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC},
	{"visitInnerClass", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;)V", nullptr, $PUBLIC},
	{"visitInnerClasses", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClasses;)V", nullptr, $PUBLIC},
	{"visitJavaClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC},
	{"visitLineNumber", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;)V", nullptr, $PUBLIC},
	{"visitLineNumberTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumberTable;)V", nullptr, $PUBLIC},
	{"visitLocalVariable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;)V", nullptr, $PUBLIC},
	{"visitLocalVariableTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;)V", nullptr, $PUBLIC},
	{"visitLocalVariableTypeTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable;)V", nullptr, $PUBLIC},
	{"visitMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC},
	{"visitMethodParameter", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameter;)V", nullptr, $PUBLIC},
	{"visitMethodParameters", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameters;)V", nullptr, $PUBLIC},
	{"visitModule", "(Lcom/sun/org/apache/bcel/internal/classfile/Module;)V", nullptr, $PUBLIC},
	{"visitModuleExports", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleExports;)V", nullptr, $PUBLIC},
	{"visitModuleMainClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleMainClass;)V", nullptr, $PUBLIC},
	{"visitModuleOpens", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleOpens;)V", nullptr, $PUBLIC},
	{"visitModulePackages", "(Lcom/sun/org/apache/bcel/internal/classfile/ModulePackages;)V", nullptr, $PUBLIC},
	{"visitModuleProvides", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleProvides;)V", nullptr, $PUBLIC},
	{"visitModuleRequires", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleRequires;)V", nullptr, $PUBLIC},
	{"visitNestHost", "(Lcom/sun/org/apache/bcel/internal/classfile/NestHost;)V", nullptr, $PUBLIC},
	{"visitNestMembers", "(Lcom/sun/org/apache/bcel/internal/classfile/NestMembers;)V", nullptr, $PUBLIC},
	{"visitParameterAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotations;)V", nullptr, $PUBLIC},
	{"visitParameterAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;)V", nullptr, $PUBLIC},
	{"visitSignature", "(Lcom/sun/org/apache/bcel/internal/classfile/Signature;)V", nullptr, $PUBLIC},
	{"visitSourceFile", "(Lcom/sun/org/apache/bcel/internal/classfile/SourceFile;)V", nullptr, $PUBLIC},
	{"visitStackMap", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMap;)V", nullptr, $PUBLIC},
	{"visitStackMapEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;)V", nullptr, $PUBLIC},
	{"visitSynthetic", "(Lcom/sun/org/apache/bcel/internal/classfile/Synthetic;)V", nullptr, $PUBLIC},
	{"visitUnknown", "(Lcom/sun/org/apache/bcel/internal/classfile/Unknown;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EmptyVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.EmptyVisitor",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.classfile.Visitor",
	nullptr,
	_EmptyVisitor_MethodInfo_
};

$Object* allocate$EmptyVisitor($Class* clazz) {
	return $of($alloc(EmptyVisitor));
}

void EmptyVisitor::init$() {
}

void EmptyVisitor::visitAnnotation($Annotations* obj) {
}

void EmptyVisitor::visitParameterAnnotation($ParameterAnnotations* obj) {
}

void EmptyVisitor::visitAnnotationEntry($AnnotationEntry* obj) {
}

void EmptyVisitor::visitAnnotationDefault($AnnotationDefault* obj) {
}

void EmptyVisitor::visitCode($Code* obj) {
}

void EmptyVisitor::visitCodeException($CodeException* obj) {
}

void EmptyVisitor::visitConstantClass($ConstantClass* obj) {
}

void EmptyVisitor::visitConstantDouble($ConstantDouble* obj) {
}

void EmptyVisitor::visitConstantFieldref($ConstantFieldref* obj) {
}

void EmptyVisitor::visitConstantFloat($ConstantFloat* obj) {
}

void EmptyVisitor::visitConstantInteger($ConstantInteger* obj) {
}

void EmptyVisitor::visitConstantInterfaceMethodref($ConstantInterfaceMethodref* obj) {
}

void EmptyVisitor::visitConstantInvokeDynamic($ConstantInvokeDynamic* obj) {
}

void EmptyVisitor::visitConstantLong($ConstantLong* obj) {
}

void EmptyVisitor::visitConstantMethodref($ConstantMethodref* obj) {
}

void EmptyVisitor::visitConstantNameAndType($ConstantNameAndType* obj) {
}

void EmptyVisitor::visitConstantPool($ConstantPool* obj) {
}

void EmptyVisitor::visitConstantString($ConstantString* obj) {
}

void EmptyVisitor::visitConstantUtf8($ConstantUtf8* obj) {
}

void EmptyVisitor::visitConstantValue($ConstantValue* obj) {
}

void EmptyVisitor::visitDeprecated($Deprecated* obj) {
}

void EmptyVisitor::visitExceptionTable($ExceptionTable* obj) {
}

void EmptyVisitor::visitField($Field* obj) {
}

void EmptyVisitor::visitInnerClass($InnerClass* obj) {
}

void EmptyVisitor::visitInnerClasses($InnerClasses* obj) {
}

void EmptyVisitor::visitBootstrapMethods($BootstrapMethods* obj) {
}

void EmptyVisitor::visitJavaClass($JavaClass* obj) {
}

void EmptyVisitor::visitLineNumber($LineNumber* obj) {
}

void EmptyVisitor::visitLineNumberTable($LineNumberTable* obj) {
}

void EmptyVisitor::visitLocalVariable($LocalVariable* obj) {
}

void EmptyVisitor::visitLocalVariableTable($LocalVariableTable* obj) {
}

void EmptyVisitor::visitMethod($Method* obj) {
}

void EmptyVisitor::visitSignature($Signature* obj) {
}

void EmptyVisitor::visitSourceFile($SourceFile* obj) {
}

void EmptyVisitor::visitSynthetic($Synthetic* obj) {
}

void EmptyVisitor::visitUnknown($Unknown* obj) {
}

void EmptyVisitor::visitStackMap($StackMap* obj) {
}

void EmptyVisitor::visitStackMapEntry($StackMapEntry* obj) {
}

void EmptyVisitor::visitEnclosingMethod($EnclosingMethod* obj) {
}

void EmptyVisitor::visitLocalVariableTypeTable($LocalVariableTypeTable* obj) {
}

void EmptyVisitor::visitMethodParameters($MethodParameters* obj) {
}

void EmptyVisitor::visitMethodParameter($MethodParameter* obj) {
}

void EmptyVisitor::visitConstantMethodType($ConstantMethodType* obj) {
}

void EmptyVisitor::visitConstantMethodHandle($ConstantMethodHandle* constantMethodHandle) {
}

void EmptyVisitor::visitParameterAnnotationEntry($ParameterAnnotationEntry* parameterAnnotationEntry) {
}

void EmptyVisitor::visitConstantPackage($ConstantPackage* constantPackage) {
}

void EmptyVisitor::visitConstantModule($ConstantModule* constantModule) {
}

void EmptyVisitor::visitConstantDynamic($ConstantDynamic* obj) {
}

void EmptyVisitor::visitModule($Module* obj) {
}

void EmptyVisitor::visitModuleRequires($ModuleRequires* obj) {
}

void EmptyVisitor::visitModuleExports($ModuleExports* obj) {
}

void EmptyVisitor::visitModuleOpens($ModuleOpens* obj) {
}

void EmptyVisitor::visitModuleProvides($ModuleProvides* obj) {
}

void EmptyVisitor::visitModulePackages($ModulePackages* obj) {
}

void EmptyVisitor::visitModuleMainClass($ModuleMainClass* obj) {
}

void EmptyVisitor::visitNestHost($NestHost* obj) {
}

void EmptyVisitor::visitNestMembers($NestMembers* obj) {
}

EmptyVisitor::EmptyVisitor() {
}

$Class* EmptyVisitor::load$($String* name, bool initialize) {
	$loadClass(EmptyVisitor, name, initialize, &_EmptyVisitor_ClassInfo_, allocate$EmptyVisitor);
	return class$;
}

$Class* EmptyVisitor::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com