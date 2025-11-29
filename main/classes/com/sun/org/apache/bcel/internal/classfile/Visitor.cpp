#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>

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

using $ConstantDynamic = ::com::sun::org::apache::bcel::internal::classfile::ConstantDynamic;
using $MethodParameter = ::com::sun::org::apache::bcel::internal::classfile::MethodParameter;
using $Module = ::com::sun::org::apache::bcel::internal::classfile::Module;
using $ModuleExports = ::com::sun::org::apache::bcel::internal::classfile::ModuleExports;
using $ModuleMainClass = ::com::sun::org::apache::bcel::internal::classfile::ModuleMainClass;
using $ModuleOpens = ::com::sun::org::apache::bcel::internal::classfile::ModuleOpens;
using $ModulePackages = ::com::sun::org::apache::bcel::internal::classfile::ModulePackages;
using $ModuleProvides = ::com::sun::org::apache::bcel::internal::classfile::ModuleProvides;
using $ModuleRequires = ::com::sun::org::apache::bcel::internal::classfile::ModuleRequires;
using $NestHost = ::com::sun::org::apache::bcel::internal::classfile::NestHost;
using $NestMembers = ::com::sun::org::apache::bcel::internal::classfile::NestMembers;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _Visitor_MethodInfo_[] = {
	{"visitAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/Annotations;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitAnnotationDefault", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationDefault;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitBootstrapMethods", "(Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethods;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitCode", "(Lcom/sun/org/apache/bcel/internal/classfile/Code;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitCodeException", "(Lcom/sun/org/apache/bcel/internal/classfile/CodeException;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantClass;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantDouble", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDouble;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDynamic;)V", nullptr, $PUBLIC},
	{"visitConstantFieldref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFieldref;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantFloat", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFloat;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantInteger", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInteger;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantInterfaceMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantInvokeDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantLong", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantLong;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantMethodHandle", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantMethodType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodType;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodref;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantModule", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantModule;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantNameAndType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantNameAndType;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantPackage", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPackage;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantString;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantUtf8", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantValue;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDeprecated", "(Lcom/sun/org/apache/bcel/internal/classfile/Deprecated;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitEnclosingMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/EnclosingMethod;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitExceptionTable", "(Lcom/sun/org/apache/bcel/internal/classfile/ExceptionTable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitInnerClass", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitInnerClasses", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClasses;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitJavaClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLineNumber", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLineNumberTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumberTable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLocalVariable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLocalVariableTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLocalVariableTypeTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitMethodParameter", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameter;)V", nullptr, $PUBLIC},
	{"visitMethodParameters", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameters;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitModule", "(Lcom/sun/org/apache/bcel/internal/classfile/Module;)V", nullptr, $PUBLIC},
	{"visitModuleExports", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleExports;)V", nullptr, $PUBLIC},
	{"visitModuleMainClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleMainClass;)V", nullptr, $PUBLIC},
	{"visitModuleOpens", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleOpens;)V", nullptr, $PUBLIC},
	{"visitModulePackages", "(Lcom/sun/org/apache/bcel/internal/classfile/ModulePackages;)V", nullptr, $PUBLIC},
	{"visitModuleProvides", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleProvides;)V", nullptr, $PUBLIC},
	{"visitModuleRequires", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleRequires;)V", nullptr, $PUBLIC},
	{"visitNestHost", "(Lcom/sun/org/apache/bcel/internal/classfile/NestHost;)V", nullptr, $PUBLIC},
	{"visitNestMembers", "(Lcom/sun/org/apache/bcel/internal/classfile/NestMembers;)V", nullptr, $PUBLIC},
	{"visitParameterAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotations;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitParameterAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitSignature", "(Lcom/sun/org/apache/bcel/internal/classfile/Signature;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitSourceFile", "(Lcom/sun/org/apache/bcel/internal/classfile/SourceFile;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitStackMap", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMap;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitStackMapEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitSynthetic", "(Lcom/sun/org/apache/bcel/internal/classfile/Synthetic;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitUnknown", "(Lcom/sun/org/apache/bcel/internal/classfile/Unknown;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Visitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.Visitor",
	nullptr,
	nullptr,
	nullptr,
	_Visitor_MethodInfo_
};

$Object* allocate$Visitor($Class* clazz) {
	return $of($alloc(Visitor));
}

void Visitor::visitMethodParameter($MethodParameter* obj) {
}

void Visitor::visitConstantDynamic($ConstantDynamic* constantDynamic) {
}

void Visitor::visitModule($Module* constantModule) {
}

void Visitor::visitModuleRequires($ModuleRequires* constantModule) {
}

void Visitor::visitModuleExports($ModuleExports* constantModule) {
}

void Visitor::visitModuleOpens($ModuleOpens* constantModule) {
}

void Visitor::visitModuleProvides($ModuleProvides* constantModule) {
}

void Visitor::visitModulePackages($ModulePackages* constantModule) {
}

void Visitor::visitModuleMainClass($ModuleMainClass* obj) {
}

void Visitor::visitNestHost($NestHost* obj) {
}

void Visitor::visitNestMembers($NestMembers* obj) {
}

$Class* Visitor::load$($String* name, bool initialize) {
	$loadClass(Visitor, name, initialize, &_Visitor_ClassInfo_, allocate$Visitor);
	return class$;
}

$Class* Visitor::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com