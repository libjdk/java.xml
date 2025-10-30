#include <com/sun/org/apache/xml/internal/utils/StringVector.h>

#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
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

$FieldInfo _StringVector_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(StringVector, serialVersionUID)},
	{"m_blocksize", "I", nullptr, $PROTECTED, $field(StringVector, m_blocksize)},
	{"m_map", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(StringVector, m_map)},
	{"m_firstFree", "I", nullptr, $PROTECTED, $field(StringVector, m_firstFree)},
	{"m_mapSize", "I", nullptr, $PROTECTED, $field(StringVector, m_mapSize)},
	{}
};

$MethodInfo _StringVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringVector::*)()>(&StringVector::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(StringVector::*)(int32_t)>(&StringVector::init$))},
	{"addElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(StringVector::*)($String*)>(&StringVector::addElement))},
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(StringVector::*)($String*)>(&StringVector::contains))},
	{"containsIgnoreCase", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(StringVector::*)($String*)>(&StringVector::containsIgnoreCase))},
	{"elementAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(StringVector::*)(int32_t)>(&StringVector::elementAt))},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"peek", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(StringVector::*)()>(&StringVector::peek))},
	{"pop", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(StringVector::*)()>(&StringVector::pop))},
	{"push", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(StringVector::*)($String*)>(&StringVector::push))},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(StringVector::*)()>(&StringVector::size))},
	{}
};

$ClassInfo _StringVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.StringVector",
	"java.lang.Object",
	"java.io.Serializable",
	_StringVector_FieldInfo_,
	_StringVector_MethodInfo_
};

$Object* allocate$StringVector($Class* clazz) {
	return $of($alloc(StringVector));
}

void StringVector::init$() {
	this->m_firstFree = 0;
	this->m_blocksize = 8;
	this->m_mapSize = this->m_blocksize;
	$set(this, m_map, $new($StringArray, this->m_blocksize));
}

void StringVector::init$(int32_t blocksize) {
	this->m_firstFree = 0;
	this->m_blocksize = blocksize;
	this->m_mapSize = blocksize;
	$set(this, m_map, $new($StringArray, blocksize));
}

int32_t StringVector::getLength() {
	return this->m_firstFree;
}

int32_t StringVector::size() {
	return this->m_firstFree;
}

void StringVector::addElement($String* value) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($StringArray, newMap, $new($StringArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, value);
	++this->m_firstFree;
}

$String* StringVector::elementAt(int32_t i) {
	return $nc(this->m_map)->get(i);
}

bool StringVector::contains($String* s) {
	if (nullptr == s) {
		return false;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($nc($nc(this->m_map)->get(i))->equals(s)) {
			return true;
		}
	}
	return false;
}

bool StringVector::containsIgnoreCase($String* s) {
	if (nullptr == s) {
		return false;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($nc($nc(this->m_map)->get(i))->equalsIgnoreCase(s)) {
			return true;
		}
	}
	return false;
}

void StringVector::push($String* s) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($StringArray, newMap, $new($StringArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, s);
	++this->m_firstFree;
}

$String* StringVector::pop() {
	if (this->m_firstFree <= 0) {
		return nullptr;
	}
	--this->m_firstFree;
	$var($String, s, $nc(this->m_map)->get(this->m_firstFree));
	$nc(this->m_map)->set(this->m_firstFree, nullptr);
	return s;
}

$String* StringVector::peek() {
	return (this->m_firstFree <= 0) ? ($String*)nullptr : $nc(this->m_map)->get(this->m_firstFree - 1);
}

StringVector::StringVector() {
}

$Class* StringVector::load$($String* name, bool initialize) {
	$loadClass(StringVector, name, initialize, &_StringVector_ClassInfo_, allocate$StringVector);
	return class$;
}

$Class* StringVector::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com