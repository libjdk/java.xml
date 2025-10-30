#include <com/sun/org/apache/xml/internal/utils/res/IntArrayWrapper.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

$FieldInfo _IntArrayWrapper_FieldInfo_[] = {
	{"m_int", "[I", nullptr, $PRIVATE, $field(IntArrayWrapper, m_int)},
	{}
};

$MethodInfo _IntArrayWrapper_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(IntArrayWrapper::*)($ints*)>(&IntArrayWrapper::init$))},
	{"getInt", "(I)I", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntArrayWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.IntArrayWrapper",
	"java.lang.Object",
	nullptr,
	_IntArrayWrapper_FieldInfo_,
	_IntArrayWrapper_MethodInfo_
};

$Object* allocate$IntArrayWrapper($Class* clazz) {
	return $of($alloc(IntArrayWrapper));
}

void IntArrayWrapper::init$($ints* arg) {
	$set(this, m_int, arg);
}

int32_t IntArrayWrapper::getInt(int32_t index) {
	return $nc(this->m_int)->get(index);
}

int32_t IntArrayWrapper::getLength() {
	return $nc(this->m_int)->length;
}

IntArrayWrapper::IntArrayWrapper() {
}

$Class* IntArrayWrapper::load$($String* name, bool initialize) {
	$loadClass(IntArrayWrapper, name, initialize, &_IntArrayWrapper_ClassInfo_, allocate$IntArrayWrapper);
	return class$;
}

$Class* IntArrayWrapper::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com