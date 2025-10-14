#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLSchemaLoader = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaLoader$LocationArray_FieldInfo_[] = {
	{"length", "I", nullptr, 0, $field(XMLSchemaLoader$LocationArray, length)},
	{"locations", "[Ljava/lang/String;", nullptr, 0, $field(XMLSchemaLoader$LocationArray, locations)},
	{}
};

$MethodInfo _XMLSchemaLoader$LocationArray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLSchemaLoader$LocationArray::*)()>(&XMLSchemaLoader$LocationArray::init$))},
	{"addLocation", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getFirstLocation", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getLocationArray", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"resize", "(II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLSchemaLoader$LocationArray_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader$LocationArray", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader", "LocationArray", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XMLSchemaLoader$LocationArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader$LocationArray",
	"java.lang.Object",
	nullptr,
	_XMLSchemaLoader$LocationArray_FieldInfo_,
	_XMLSchemaLoader$LocationArray_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaLoader$LocationArray_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader"
};

$Object* allocate$XMLSchemaLoader$LocationArray($Class* clazz) {
	return $of($alloc(XMLSchemaLoader$LocationArray));
}

void XMLSchemaLoader$LocationArray::init$() {
	$set(this, locations, $new($StringArray, 2));
}

void XMLSchemaLoader$LocationArray::resize(int32_t oldLength, int32_t newLength) {
	$var($StringArray, temp, $new($StringArray, newLength));
	$System::arraycopy(this->locations, 0, temp, 0, $Math::min(oldLength, newLength));
	$set(this, locations, temp);
	this->length = $Math::min(oldLength, newLength);
}

void XMLSchemaLoader$LocationArray::addLocation($String* location) {
	if (this->length >= $nc(this->locations)->length) {
		resize(this->length, $Math::max(1, this->length * 2));
	}
	$nc(this->locations)->set(this->length++, location);
}

$StringArray* XMLSchemaLoader$LocationArray::getLocationArray() {
	if (this->length < $nc(this->locations)->length) {
		resize($nc(this->locations)->length, this->length);
	}
	return this->locations;
}

$String* XMLSchemaLoader$LocationArray::getFirstLocation() {
	return this->length > 0 ? $nc(this->locations)->get(0) : ($String*)nullptr;
}

int32_t XMLSchemaLoader$LocationArray::getLength() {
	return this->length;
}

XMLSchemaLoader$LocationArray::XMLSchemaLoader$LocationArray() {
}

$Class* XMLSchemaLoader$LocationArray::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaLoader$LocationArray, name, initialize, &_XMLSchemaLoader$LocationArray_ClassInfo_, allocate$XMLSchemaLoader$LocationArray);
	return class$;
}

$Class* XMLSchemaLoader$LocationArray::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com