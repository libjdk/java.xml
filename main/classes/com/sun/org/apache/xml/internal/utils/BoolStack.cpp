#include <com/sun/org/apache/xml/internal/utils/BoolStack.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _BoolStack_FieldInfo_[] = {
	{"m_values", "[Z", nullptr, $PRIVATE, $field(BoolStack, m_values)},
	{"m_allocatedSize", "I", nullptr, $PRIVATE, $field(BoolStack, m_allocatedSize)},
	{"m_index", "I", nullptr, $PRIVATE, $field(BoolStack, m_index)},
	{}
};

$MethodInfo _BoolStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BoolStack::*)()>(&BoolStack::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BoolStack::*)(int32_t)>(&BoolStack::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(BoolStack::*)()>(&BoolStack::clear))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"grow", "()V", nullptr, $PRIVATE, $method(static_cast<void(BoolStack::*)()>(&BoolStack::grow))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(BoolStack::*)()>(&BoolStack::isEmpty))},
	{"peek", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(BoolStack::*)()>(&BoolStack::peek))},
	{"peekOrFalse", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(BoolStack::*)()>(&BoolStack::peekOrFalse))},
	{"peekOrTrue", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(BoolStack::*)()>(&BoolStack::peekOrTrue))},
	{"pop", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(BoolStack::*)()>(&BoolStack::pop))},
	{"popAndTop", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(BoolStack::*)()>(&BoolStack::popAndTop))},
	{"push", "(Z)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(BoolStack::*)(bool)>(&BoolStack::push))},
	{"setTop", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(BoolStack::*)(bool)>(&BoolStack::setTop))},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(BoolStack::*)()>(&BoolStack::size))},
	{}
};

$ClassInfo _BoolStack_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.BoolStack",
	"java.lang.Object",
	"java.lang.Cloneable",
	_BoolStack_FieldInfo_,
	_BoolStack_MethodInfo_
};

$Object* allocate$BoolStack($Class* clazz) {
	return $of($alloc(BoolStack));
}

void BoolStack::init$() {
	BoolStack::init$(32);
}

void BoolStack::init$(int32_t size) {
	this->m_allocatedSize = size;
	$set(this, m_values, $new($booleans, size));
	this->m_index = -1;
}

int32_t BoolStack::size() {
	return this->m_index + 1;
}

void BoolStack::clear() {
	this->m_index = -1;
}

bool BoolStack::push(bool val) {
	if (this->m_index == this->m_allocatedSize - 1) {
		grow();
	}
	return ($nc(this->m_values)->set(++this->m_index, val));
}

bool BoolStack::pop() {
	return $nc(this->m_values)->get(this->m_index--);
}

bool BoolStack::popAndTop() {
	--this->m_index;
	return (this->m_index >= 0) ? $nc(this->m_values)->get(this->m_index) : false;
}

void BoolStack::setTop(bool b) {
	$nc(this->m_values)->set(this->m_index, b);
}

bool BoolStack::peek() {
	return $nc(this->m_values)->get(this->m_index);
}

bool BoolStack::peekOrFalse() {
	return (this->m_index > -1) ? $nc(this->m_values)->get(this->m_index) : false;
}

bool BoolStack::peekOrTrue() {
	return (this->m_index > -1) ? $nc(this->m_values)->get(this->m_index) : true;
}

bool BoolStack::isEmpty() {
	return (this->m_index == -1);
}

void BoolStack::grow() {
	this->m_allocatedSize *= 2;
	$var($booleans, newVector, $new($booleans, this->m_allocatedSize));
	$System::arraycopy(this->m_values, 0, newVector, 0, this->m_index + 1);
	$set(this, m_values, newVector);
}

$Object* BoolStack::clone() {
	return $of($Cloneable::clone());
}

BoolStack::BoolStack() {
}

$Class* BoolStack::load$($String* name, bool initialize) {
	$loadClass(BoolStack, name, initialize, &_BoolStack_ClassInfo_, allocate$BoolStack);
	return class$;
}

$Class* BoolStack::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com