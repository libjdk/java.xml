#include <com/sun/org/apache/bcel/internal/classfile/RuntimeInvisibleParameterAnnotations.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>
#include <java/io/DataInput.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations;
using $DataInput = ::java::io::DataInput;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _RuntimeInvisibleParameterAnnotations_MethodInfo_[] = {
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeInvisibleParameterAnnotations::*)(int32_t,int32_t,$DataInput*,$ConstantPool*)>(&RuntimeInvisibleParameterAnnotations::init$)), "java.io.IOException"},
	{}
};

$ClassInfo _RuntimeInvisibleParameterAnnotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.RuntimeInvisibleParameterAnnotations",
	"com.sun.org.apache.bcel.internal.classfile.ParameterAnnotations",
	nullptr,
	nullptr,
	_RuntimeInvisibleParameterAnnotations_MethodInfo_
};

$Object* allocate$RuntimeInvisibleParameterAnnotations($Class* clazz) {
	return $of($alloc(RuntimeInvisibleParameterAnnotations));
}

void RuntimeInvisibleParameterAnnotations::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$ParameterAnnotations::init$($Const::ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS, name_index, length, input, constant_pool);
}

RuntimeInvisibleParameterAnnotations::RuntimeInvisibleParameterAnnotations() {
}

$Class* RuntimeInvisibleParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(RuntimeInvisibleParameterAnnotations, name, initialize, &_RuntimeInvisibleParameterAnnotations_ClassInfo_, allocate$RuntimeInvisibleParameterAnnotations);
	return class$;
}

$Class* RuntimeInvisibleParameterAnnotations::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com