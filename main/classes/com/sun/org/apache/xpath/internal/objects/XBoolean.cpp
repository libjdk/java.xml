#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>

#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/objects/XBooleanStatic.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef CLASS_BOOLEAN
#undef CLASS_NODESET
#undef S_FALSE
#undef S_TRUE

using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XBooleanStatic = ::com::sun::org::apache::xpath::internal::objects::XBooleanStatic;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XBoolean_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XBoolean, serialVersionUID)},
	{"S_TRUE", "Lcom/sun/org/apache/xpath/internal/objects/XBoolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBoolean, S_TRUE)},
	{"S_FALSE", "Lcom/sun/org/apache/xpath/internal/objects/XBoolean;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBoolean, S_FALSE)},
	{"m_val", "Z", nullptr, $PRIVATE | $FINAL, $field(XBoolean, m_val)},
	{}
};

$MethodInfo _XBoolean_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(XBoolean::*)(bool)>(&XBoolean::init$))},
	{"<init>", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC, $method(static_cast<void(XBoolean::*)($Boolean*)>(&XBoolean::init$))},
	{"bool", "()Z", nullptr, $PUBLIC},
	{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"getTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"num", "()D", nullptr, $PUBLIC},
	{"object", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XBoolean_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XBoolean",
	"com.sun.org.apache.xpath.internal.objects.XObject",
	nullptr,
	_XBoolean_FieldInfo_,
	_XBoolean_MethodInfo_
};

$Object* allocate$XBoolean($Class* clazz) {
	return $of($alloc(XBoolean));
}


XBoolean* XBoolean::S_TRUE = nullptr;

XBoolean* XBoolean::S_FALSE = nullptr;

void XBoolean::init$(bool b) {
	$XObject::init$();
	this->m_val = b;
}

void XBoolean::init$($Boolean* b) {
	$XObject::init$();
	this->m_val = $nc(b)->booleanValue();
	setObject(b);
}

int32_t XBoolean::getType() {
	return $XObject::CLASS_BOOLEAN;
}

$String* XBoolean::getTypeString() {
	return "#BOOLEAN"_s;
}

double XBoolean::num() {
	return this->m_val ? 1.0 : 0.0;
}

bool XBoolean::bool$() {
	return this->m_val;
}

$String* XBoolean::str() {
	return this->m_val ? "true"_s : "false"_s;
}

$Object* XBoolean::object() {
	if (nullptr == this->m_obj) {
		setObject($($Boolean::valueOf(this->m_val)));
	}
	return $of(this->m_obj);
}

bool XBoolean::equals($XObject* obj2) {
	if ($nc(obj2)->getType() == $XObject::CLASS_NODESET) {
		return obj2->equals(static_cast<$XObject*>(this));
	}
	try {
		return this->m_val == $nc(obj2)->bool$();
	} catch ($TransformerException&) {
		$var($TransformerException, te, $catch());
		$throwNew($WrappedRuntimeException, te);
	}
	$shouldNotReachHere();
}

void clinit$XBoolean($Class* class$) {
	$assignStatic(XBoolean::S_TRUE, $new($XBooleanStatic, true));
	$assignStatic(XBoolean::S_FALSE, $new($XBooleanStatic, false));
}

XBoolean::XBoolean() {
}

$Class* XBoolean::load$($String* name, bool initialize) {
	$loadClass(XBoolean, name, initialize, &_XBoolean_ClassInfo_, clinit$XBoolean, allocate$XBoolean);
	return class$;
}

$Class* XBoolean::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com