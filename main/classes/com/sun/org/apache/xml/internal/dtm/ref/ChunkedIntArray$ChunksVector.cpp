#include <com/sun/org/apache/xml/internal/dtm/ref/ChunkedIntArray$ChunksVector.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/ChunkedIntArray.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BLOCKSIZE

using $intArray2 = $Array<int32_t, 2>;
using $ChunkedIntArray = ::com::sun::org::apache::xml::internal::dtm::ref::ChunkedIntArray;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _ChunkedIntArray$ChunksVector_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/ChunkedIntArray;", nullptr, $FINAL | $SYNTHETIC, $field(ChunkedIntArray$ChunksVector, this$0)},
	{"BLOCKSIZE", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedIntArray$ChunksVector, BLOCKSIZE)},
	{"m_map", "[[I", nullptr, 0, $field(ChunkedIntArray$ChunksVector, m_map)},
	{"m_mapSize", "I", nullptr, 0, $field(ChunkedIntArray$ChunksVector, m_mapSize)},
	{"pos", "I", nullptr, 0, $field(ChunkedIntArray$ChunksVector, pos)},
	{}
};

$MethodInfo _ChunkedIntArray$ChunksVector_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/ChunkedIntArray;)V", nullptr, 0, $method(static_cast<void(ChunkedIntArray$ChunksVector::*)($ChunkedIntArray*)>(&ChunkedIntArray$ChunksVector::init$))},
	{"addElement", "([I)V", nullptr, 0},
	{"elementAt", "(I)[I", nullptr, $FINAL, $method(static_cast<$ints*(ChunkedIntArray$ChunksVector::*)(int32_t)>(&ChunkedIntArray$ChunksVector::elementAt))},
	{"size", "()I", nullptr, $FINAL, $method(static_cast<int32_t(ChunkedIntArray$ChunksVector::*)()>(&ChunkedIntArray$ChunksVector::size))},
	{}
};

$InnerClassInfo _ChunkedIntArray$ChunksVector_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray$ChunksVector", "com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray", "ChunksVector", 0},
	{}
};

$ClassInfo _ChunkedIntArray$ChunksVector_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray$ChunksVector",
	"java.lang.Object",
	nullptr,
	_ChunkedIntArray$ChunksVector_FieldInfo_,
	_ChunkedIntArray$ChunksVector_MethodInfo_,
	nullptr,
	nullptr,
	_ChunkedIntArray$ChunksVector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.ChunkedIntArray"
};

$Object* allocate$ChunkedIntArray$ChunksVector($Class* clazz) {
	return $of($alloc(ChunkedIntArray$ChunksVector));
}

void ChunkedIntArray$ChunksVector::init$($ChunkedIntArray* this$0) {
	$set(this, this$0, this$0);
	$set(this, m_map, $new($intArray2, this->BLOCKSIZE));
	this->m_mapSize = this->BLOCKSIZE;
	this->pos = 0;
}

int32_t ChunkedIntArray$ChunksVector::size() {
	return this->pos;
}

void ChunkedIntArray$ChunksVector::addElement($ints* value) {
	if (this->pos >= this->m_mapSize) {
		int32_t orgMapSize = this->m_mapSize;
		while (this->pos >= this->m_mapSize) {
			this->m_mapSize += this->BLOCKSIZE;
		}
		$var($intArray2, newMap, $new($intArray2, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, orgMapSize);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->pos, value);
	++this->pos;
}

$ints* ChunkedIntArray$ChunksVector::elementAt(int32_t pos) {
	return $nc(this->m_map)->get(pos);
}

ChunkedIntArray$ChunksVector::ChunkedIntArray$ChunksVector() {
}

$Class* ChunkedIntArray$ChunksVector::load$($String* name, bool initialize) {
	$loadClass(ChunkedIntArray$ChunksVector, name, initialize, &_ChunkedIntArray$ChunksVector_ClassInfo_, allocate$ChunkedIntArray$ChunksVector);
	return class$;
}

$Class* ChunkedIntArray$ChunksVector::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com