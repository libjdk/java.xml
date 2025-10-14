#include <com/sun/org/apache/xml/internal/dtm/ref/ExtendedType.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _ExtendedType_FieldInfo_[] = {
	{"nodetype", "I", nullptr, $PRIVATE, $field(ExtendedType, nodetype)},
	{"namespace", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExtendedType, namespace$)},
	{"localName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExtendedType, localName)},
	{"hash", "I", nullptr, $PRIVATE, $field(ExtendedType, hash)},
	{}
};

$MethodInfo _ExtendedType_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedType::*)(int32_t,$String*,$String*)>(&ExtendedType::init$))},
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedType::*)(int32_t,$String*,$String*,int32_t)>(&ExtendedType::init$))},
	{"equals", "(Lcom/sun/org/apache/xml/internal/dtm/ref/ExtendedType;)Z", nullptr, $PUBLIC, $method(static_cast<bool(ExtendedType::*)(ExtendedType*)>(&ExtendedType::equals))},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ExtendedType::*)()>(&ExtendedType::getLocalName))},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ExtendedType::*)()>(&ExtendedType::getNamespace))},
	{"getNodeType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ExtendedType::*)()>(&ExtendedType::getNodeType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"redefine", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(ExtendedType::*)(int32_t,$String*,$String*)>(&ExtendedType::redefine))},
	{"redefine", "(ILjava/lang/String;Ljava/lang/String;I)V", nullptr, $PROTECTED, $method(static_cast<void(ExtendedType::*)(int32_t,$String*,$String*,int32_t)>(&ExtendedType::redefine))},
	{}
};

$ClassInfo _ExtendedType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.ExtendedType",
	"java.lang.Object",
	nullptr,
	_ExtendedType_FieldInfo_,
	_ExtendedType_MethodInfo_
};

$Object* allocate$ExtendedType($Class* clazz) {
	return $of($alloc(ExtendedType));
}

void ExtendedType::init$(int32_t nodetype, $String* namespace$, $String* localName) {
	this->nodetype = nodetype;
	$set(this, namespace$, namespace$);
	$set(this, localName, localName);
	int32_t var$0 = nodetype + $nc(namespace$)->hashCode();
	this->hash = var$0 + $nc(localName)->hashCode();
}

void ExtendedType::init$(int32_t nodetype, $String* namespace$, $String* localName, int32_t hash) {
	this->nodetype = nodetype;
	$set(this, namespace$, namespace$);
	$set(this, localName, localName);
	this->hash = hash;
}

void ExtendedType::redefine(int32_t nodetype, $String* namespace$, $String* localName) {
	this->nodetype = nodetype;
	$set(this, namespace$, namespace$);
	$set(this, localName, localName);
	int32_t var$0 = nodetype + $nc(namespace$)->hashCode();
	this->hash = var$0 + $nc(localName)->hashCode();
}

void ExtendedType::redefine(int32_t nodetype, $String* namespace$, $String* localName, int32_t hash) {
	this->nodetype = nodetype;
	$set(this, namespace$, namespace$);
	$set(this, localName, localName);
	this->hash = hash;
}

int32_t ExtendedType::hashCode() {
	return this->hash;
}

bool ExtendedType::equals(ExtendedType* other) {
	try {
		bool var$0 = $nc(other)->nodetype == this->nodetype && $nc(other->localName)->equals(this->localName);
		return var$0 && $nc(other->namespace$)->equals(this->namespace$);
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int32_t ExtendedType::getNodeType() {
	return this->nodetype;
}

$String* ExtendedType::getLocalName() {
	return this->localName;
}

$String* ExtendedType::getNamespace() {
	return this->namespace$;
}

ExtendedType::ExtendedType() {
}

$Class* ExtendedType::load$($String* name, bool initialize) {
	$loadClass(ExtendedType, name, initialize, &_ExtendedType_ClassInfo_, allocate$ExtendedType);
	return class$;
}

$Class* ExtendedType::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com