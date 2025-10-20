#include <com/sun/org/apache/bcel/internal/classfile/NestMembers.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ATTR_NEST_MEMBERS

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
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

$FieldInfo _NestMembers_FieldInfo_[] = {
	{"classes", "[I", nullptr, $PRIVATE, $field(NestMembers, classes)},
	{}
};

$MethodInfo _NestMembers_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/NestMembers;)V", nullptr, $PUBLIC, $method(static_cast<void(NestMembers::*)(NestMembers*)>(&NestMembers::init$))},
	{"<init>", "(II[ILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(static_cast<void(NestMembers::*)(int32_t,int32_t,$ints*,$ConstantPool*)>(&NestMembers::init$))},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(static_cast<void(NestMembers::*)(int32_t,int32_t,$DataInput*,$ConstantPool*)>(&NestMembers::init$)), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getClassNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$StringArray*(NestMembers::*)()>(&NestMembers::getClassNames))},
	{"getClasses", "()[I", nullptr, $PUBLIC, $method(static_cast<$ints*(NestMembers::*)()>(&NestMembers::getClasses))},
	{"getNumberClasses", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(NestMembers::*)()>(&NestMembers::getNumberClasses))},
	{"setClasses", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(NestMembers::*)($ints*)>(&NestMembers::setClasses))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NestMembers_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.NestMembers",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_NestMembers_FieldInfo_,
	_NestMembers_MethodInfo_
};

$Object* allocate$NestMembers($Class* clazz) {
	return $of($alloc(NestMembers));
}

void NestMembers::init$(NestMembers* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($ints, var$2, c->getClasses());
	NestMembers::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void NestMembers::init$(int32_t name_index, int32_t length, $ints* classes, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_NEST_MEMBERS, name_index, length, constant_pool);
	$set(this, classes, classes != nullptr ? classes : $new($ints, 0));
}

void NestMembers::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	NestMembers::init$(name_index, length, ($ints*)nullptr, constant_pool);
	int32_t number_of_classes = $nc(input)->readUnsignedShort();
	$set(this, classes, $new($ints, number_of_classes));
	for (int32_t i = 0; i < number_of_classes; ++i) {
		$nc(this->classes)->set(i, input->readUnsignedShort());
	}
}

void NestMembers::accept($Visitor* v) {
	$nc(v)->visitNestMembers(this);
}

void NestMembers::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort($nc(this->classes)->length);
	{
		$var($ints, arr$, this->classes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t index = arr$->get(i$);
			{
				file->writeShort(index);
			}
		}
	}
}

$ints* NestMembers::getClasses() {
	return this->classes;
}

int32_t NestMembers::getNumberClasses() {
	return this->classes == nullptr ? 0 : $nc(this->classes)->length;
}

$StringArray* NestMembers::getClassNames() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, names, $new($StringArray, $nc(this->classes)->length));
	for (int32_t i = 0; i < $nc(this->classes)->length; ++i) {
		names->set(i, $($nc($($nc($($Attribute::getConstantPool()))->getConstantString($nc(this->classes)->get(i), $Const::CONSTANT_Class)))->replace(u'/', u'.')));
	}
	return names;
}

void NestMembers::setClasses($ints* classes) {
	$set(this, classes, classes != nullptr ? classes : $new($ints, 0));
}

$String* NestMembers::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("NestMembers("_s);
	buf->append($nc(this->classes)->length);
	buf->append("):\n"_s);
	{
		$var($ints, arr$, this->classes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t index = arr$->get(i$);
			{
				$var($String, class_name, $nc($($Attribute::getConstantPool()))->getConstantString(index, $Const::CONSTANT_Class));
				buf->append("  "_s)->append($($Utility::compactClassName(class_name, false)))->append("\n"_s);
			}
		}
	}
	return buf->substring(0, buf->length() - 1);
}

$Attribute* NestMembers::copy($ConstantPool* _constant_pool) {
	$var(NestMembers, c, $cast(NestMembers, clone()));
	if (this->classes != nullptr) {
		$set($nc(c), classes, $new($ints, $nc(this->classes)->length));
		$System::arraycopy(this->classes, 0, c->classes, 0, $nc(this->classes)->length);
	}
	$nc(c)->setConstantPool(_constant_pool);
	return c;
}

NestMembers::NestMembers() {
}

$Class* NestMembers::load$($String* name, bool initialize) {
	$loadClass(NestMembers, name, initialize, &_NestMembers_ClassInfo_, allocate$NestMembers);
	return class$;
}

$Class* NestMembers::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com