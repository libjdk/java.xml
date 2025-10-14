#include <com/sun/org/apache/xml/internal/utils/IntStack.h>

#include <com/sun/org/apache/xml/internal/utils/IntVector.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EmptyStackException.h>
#include <jcpp.h>

using $IntVector = ::com::sun::org::apache::xml::internal::utils::IntVector;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EmptyStackException = ::java::util::EmptyStackException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _IntStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntStack::*)()>(&IntStack::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IntStack::*)(int32_t)>(&IntStack::init$))},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/IntStack;)V", nullptr, $PUBLIC, $method(static_cast<void(IntStack::*)(IntStack*)>(&IntStack::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"empty", "()Z", nullptr, $PUBLIC},
	{"peek", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(IntStack::*)()>(&IntStack::peek))},
	{"peek", "(I)I", nullptr, $PUBLIC},
	{"pop", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(IntStack::*)()>(&IntStack::pop))},
	{"push", "(I)I", nullptr, $PUBLIC},
	{"quickPop", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(IntStack::*)(int32_t)>(&IntStack::quickPop))},
	{"search", "(I)I", nullptr, $PUBLIC},
	{"setTop", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.IntStack",
	"com.sun.org.apache.xml.internal.utils.IntVector",
	nullptr,
	nullptr,
	_IntStack_MethodInfo_
};

$Object* allocate$IntStack($Class* clazz) {
	return $of($alloc(IntStack));
}

void IntStack::init$() {
	$IntVector::init$();
}

void IntStack::init$(int32_t blocksize) {
	$IntVector::init$(blocksize);
}

void IntStack::init$(IntStack* v) {
	$IntVector::init$(static_cast<$IntVector*>(v));
}

int32_t IntStack::push(int32_t i) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($ints, newMap, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, i);
	++this->m_firstFree;
	return i;
}

int32_t IntStack::pop() {
	return $nc(this->m_map)->get(--this->m_firstFree);
}

void IntStack::quickPop(int32_t n) {
	this->m_firstFree -= n;
}

int32_t IntStack::peek() {
	try {
		return $nc(this->m_map)->get(this->m_firstFree - 1);
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		$throwNew($EmptyStackException);
	}
	$shouldNotReachHere();
}

int32_t IntStack::peek(int32_t n) {
	try {
		return $nc(this->m_map)->get(this->m_firstFree - (1 + n));
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		$throwNew($EmptyStackException);
	}
	$shouldNotReachHere();
}

void IntStack::setTop(int32_t val) {
	try {
		$nc(this->m_map)->set(this->m_firstFree - 1, val);
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		$throwNew($EmptyStackException);
	}
}

bool IntStack::empty() {
	return this->m_firstFree == 0;
}

int32_t IntStack::search(int32_t o) {
	int32_t i = lastIndexOf(o);
	if (i >= 0) {
		return size() - i;
	}
	return -1;
}

$Object* IntStack::clone() {
	return $of($cast(IntStack, $IntVector::clone()));
}

IntStack::IntStack() {
}

$Class* IntStack::load$($String* name, bool initialize) {
	$loadClass(IntStack, name, initialize, &_IntStack_ClassInfo_, allocate$IntStack);
	return class$;
}

$Class* IntStack::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com