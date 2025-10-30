#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <jcpp.h>

#undef ACC_ABSTRACT
#undef ACC_ANNOTATION
#undef ACC_ENUM
#undef ACC_FINAL
#undef ACC_INTERFACE
#undef ACC_NATIVE
#undef ACC_PRIVATE
#undef ACC_PROTECTED
#undef ACC_PUBLIC
#undef ACC_STATIC
#undef ACC_STRICT
#undef ACC_SYNCHRONIZED
#undef ACC_SYNTHETIC
#undef ACC_TRANSIENT
#undef ACC_VARARGS
#undef ACC_VOLATILE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
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

$FieldInfo _AccessFlags_FieldInfo_[] = {
	{"access_flags", "I", nullptr, $PRIVATE, $field(AccessFlags, access_flags)},
	{}
};

$MethodInfo _AccessFlags_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccessFlags::*)()>(&AccessFlags::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AccessFlags::*)(int32_t)>(&AccessFlags::init$))},
	{"getAccessFlags", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AccessFlags::*)()>(&AccessFlags::getAccessFlags))},
	{"getModifiers", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AccessFlags::*)()>(&AccessFlags::getModifiers))},
	{"isAbstract", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isAbstract))},
	{"isAbstract", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isAbstract))},
	{"isAnnotation", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isAnnotation))},
	{"isAnnotation", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isAnnotation))},
	{"isEnum", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isEnum))},
	{"isEnum", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isEnum))},
	{"isFinal", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isFinal))},
	{"isFinal", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isFinal))},
	{"isInterface", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isInterface))},
	{"isInterface", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isInterface))},
	{"isNative", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isNative))},
	{"isNative", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isNative))},
	{"isPrivate", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isPrivate))},
	{"isPrivate", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isPrivate))},
	{"isProtected", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isProtected))},
	{"isProtected", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isProtected))},
	{"isPublic", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isPublic))},
	{"isPublic", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isPublic))},
	{"isStatic", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isStatic))},
	{"isStatic", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isStatic))},
	{"isStrictfp", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isStrictfp))},
	{"isStrictfp", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isStrictfp))},
	{"isSynchronized", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isSynchronized))},
	{"isSynchronized", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isSynchronized))},
	{"isSynthetic", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isSynthetic))},
	{"isSynthetic", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isSynthetic))},
	{"isTransient", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isTransient))},
	{"isTransient", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isTransient))},
	{"isVarArgs", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isVarArgs))},
	{"isVarArgs", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isVarArgs))},
	{"isVolatile", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(bool)>(&AccessFlags::isVolatile))},
	{"isVolatile", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AccessFlags::*)()>(&AccessFlags::isVolatile))},
	{"setAccessFlags", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(int32_t)>(&AccessFlags::setAccessFlags))},
	{"setFlag", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(AccessFlags::*)(int32_t,bool)>(&AccessFlags::setFlag))},
	{"setModifiers", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AccessFlags::*)(int32_t)>(&AccessFlags::setModifiers))},
	{}
};

$ClassInfo _AccessFlags_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.AccessFlags",
	"java.lang.Object",
	nullptr,
	_AccessFlags_FieldInfo_,
	_AccessFlags_MethodInfo_
};

$Object* allocate$AccessFlags($Class* clazz) {
	return $of($alloc(AccessFlags));
}

void AccessFlags::init$() {
}

void AccessFlags::init$(int32_t a) {
	this->access_flags = a;
}

int32_t AccessFlags::getAccessFlags() {
	return this->access_flags;
}

int32_t AccessFlags::getModifiers() {
	return this->access_flags;
}

void AccessFlags::setAccessFlags(int32_t access_flags) {
	this->access_flags = access_flags;
}

void AccessFlags::setModifiers(int32_t access_flags) {
	setAccessFlags(access_flags);
}

void AccessFlags::setFlag(int32_t flag, bool set) {
	if (((int32_t)(this->access_flags & (uint32_t)flag)) != 0) {
		if (!set) {
			this->access_flags ^= flag;
		}
	} else if (set) {
		this->access_flags |= flag;
	}
}

void AccessFlags::isPublic(bool flag) {
	setFlag($Const::ACC_PUBLIC, flag);
}

bool AccessFlags::isPublic() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_PUBLIC)) != 0;
}

void AccessFlags::isPrivate(bool flag) {
	setFlag($Const::ACC_PRIVATE, flag);
}

bool AccessFlags::isPrivate() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_PRIVATE)) != 0;
}

void AccessFlags::isProtected(bool flag) {
	setFlag($Const::ACC_PROTECTED, flag);
}

bool AccessFlags::isProtected() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_PROTECTED)) != 0;
}

void AccessFlags::isStatic(bool flag) {
	setFlag($Const::ACC_STATIC, flag);
}

bool AccessFlags::isStatic() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_STATIC)) != 0;
}

void AccessFlags::isFinal(bool flag) {
	setFlag($Const::ACC_FINAL, flag);
}

bool AccessFlags::isFinal() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_FINAL)) != 0;
}

void AccessFlags::isSynchronized(bool flag) {
	setFlag($Const::ACC_SYNCHRONIZED, flag);
}

bool AccessFlags::isSynchronized() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_SYNCHRONIZED)) != 0;
}

void AccessFlags::isVolatile(bool flag) {
	setFlag($Const::ACC_VOLATILE, flag);
}

bool AccessFlags::isVolatile() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_VOLATILE)) != 0;
}

void AccessFlags::isTransient(bool flag) {
	setFlag($Const::ACC_TRANSIENT, flag);
}

bool AccessFlags::isTransient() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_TRANSIENT)) != 0;
}

void AccessFlags::isNative(bool flag) {
	setFlag($Const::ACC_NATIVE, flag);
}

bool AccessFlags::isNative() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_NATIVE)) != 0;
}

void AccessFlags::isInterface(bool flag) {
	setFlag($Const::ACC_INTERFACE, flag);
}

bool AccessFlags::isInterface() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_INTERFACE)) != 0;
}

void AccessFlags::isAbstract(bool flag) {
	setFlag($Const::ACC_ABSTRACT, flag);
}

bool AccessFlags::isAbstract() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_ABSTRACT)) != 0;
}

void AccessFlags::isStrictfp(bool flag) {
	setFlag($Const::ACC_STRICT, flag);
}

bool AccessFlags::isStrictfp() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_STRICT)) != 0;
}

void AccessFlags::isSynthetic(bool flag) {
	setFlag($Const::ACC_SYNTHETIC, flag);
}

bool AccessFlags::isSynthetic() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_SYNTHETIC)) != 0;
}

void AccessFlags::isAnnotation(bool flag) {
	setFlag($Const::ACC_ANNOTATION, flag);
}

bool AccessFlags::isAnnotation() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_ANNOTATION)) != 0;
}

void AccessFlags::isEnum(bool flag) {
	setFlag($Const::ACC_ENUM, flag);
}

bool AccessFlags::isEnum() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_ENUM)) != 0;
}

void AccessFlags::isVarArgs(bool flag) {
	setFlag($Const::ACC_VARARGS, flag);
}

bool AccessFlags::isVarArgs() {
	return ((int32_t)(this->access_flags & (uint32_t)(int32_t)$Const::ACC_VARARGS)) != 0;
}

AccessFlags::AccessFlags() {
}

$Class* AccessFlags::load$($String* name, bool initialize) {
	$loadClass(AccessFlags, name, initialize, &_AccessFlags_ClassInfo_, allocate$AccessFlags);
	return class$;
}

$Class* AccessFlags::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com