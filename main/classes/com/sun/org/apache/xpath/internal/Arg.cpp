#include <com/sun/org/apache/xpath/internal/Arg.h>

#include <com/sun/org/apache/xml/internal/utils/QName.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $QName = ::com::sun::org::apache::xml::internal::utils::QName;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _Arg_FieldInfo_[] = {
	{"m_qname", "Lcom/sun/org/apache/xml/internal/utils/QName;", nullptr, $PRIVATE, $field(Arg, m_qname)},
	{"m_val", "Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PRIVATE, $field(Arg, m_val)},
	{"m_expression", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Arg, m_expression)},
	{"m_isFromWithParam", "Z", nullptr, $PRIVATE, $field(Arg, m_isFromWithParam)},
	{"m_isVisible", "Z", nullptr, $PRIVATE, $field(Arg, m_isVisible)},
	{}
};

$MethodInfo _Arg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Arg::*)()>(&Arg::init$))},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/QName;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Arg::*)($QName*,$String*,bool)>(&Arg::init$))},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/QName;Lcom/sun/org/apache/xpath/internal/objects/XObject;)V", nullptr, $PUBLIC, $method(static_cast<void(Arg::*)($QName*,$XObject*)>(&Arg::init$))},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/QName;Lcom/sun/org/apache/xpath/internal/objects/XObject;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Arg::*)($QName*,$XObject*,bool)>(&Arg::init$))},
	{"detach", "()V", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getExpression", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getQName", "()Lcom/sun/org/apache/xml/internal/utils/QName;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$QName*(Arg::*)()>(&Arg::getQName))},
	{"getVal", "()Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$XObject*(Arg::*)()>(&Arg::getVal))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isFromWithParam", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"setExpression", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setIsVisible", "(Z)V", nullptr, $PUBLIC},
	{"setQName", "(Lcom/sun/org/apache/xml/internal/utils/QName;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Arg::*)($QName*)>(&Arg::setQName))},
	{"setVal", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Arg::*)($XObject*)>(&Arg::setVal))},
	{}
};

$ClassInfo _Arg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.Arg",
	"java.lang.Object",
	nullptr,
	_Arg_FieldInfo_,
	_Arg_MethodInfo_
};

$Object* allocate$Arg($Class* clazz) {
	return $of($alloc(Arg));
}

$QName* Arg::getQName() {
	return this->m_qname;
}

void Arg::setQName($QName* name) {
	$set(this, m_qname, name);
}

$XObject* Arg::getVal() {
	return this->m_val;
}

void Arg::setVal($XObject* val) {
	$set(this, m_val, val);
}

void Arg::detach() {
	if (nullptr != this->m_val) {
		$nc(this->m_val)->allowDetachToRelease(true);
		$nc(this->m_val)->detach();
	}
}

$String* Arg::getExpression() {
	return this->m_expression;
}

void Arg::setExpression($String* expr) {
	$set(this, m_expression, expr);
}

bool Arg::isFromWithParam() {
	return this->m_isFromWithParam;
}

bool Arg::isVisible() {
	return this->m_isVisible;
}

void Arg::setIsVisible(bool b) {
	this->m_isVisible = b;
}

void Arg::init$() {
	$set(this, m_qname, $new($QName, ""_s));
	$set(this, m_val, nullptr);
	$set(this, m_expression, nullptr);
	this->m_isVisible = true;
	this->m_isFromWithParam = false;
}

void Arg::init$($QName* qname, $String* expression, bool isFromWithParam) {
	$set(this, m_qname, qname);
	$set(this, m_val, nullptr);
	$set(this, m_expression, expression);
	this->m_isFromWithParam = isFromWithParam;
	this->m_isVisible = !isFromWithParam;
}

void Arg::init$($QName* qname, $XObject* val) {
	$set(this, m_qname, qname);
	$set(this, m_val, val);
	this->m_isVisible = true;
	this->m_isFromWithParam = false;
	$set(this, m_expression, nullptr);
}

int32_t Arg::hashCode() {
	return $Objects::hashCode(this->m_qname);
}

bool Arg::equals(Object$* obj) {
	if ($instanceOf($QName, obj)) {
		return $nc(this->m_qname)->equals(obj);
	} else {
		return $Object::equals(obj);
	}
}

void Arg::init$($QName* qname, $XObject* val, bool isFromWithParam) {
	$set(this, m_qname, qname);
	$set(this, m_val, val);
	this->m_isFromWithParam = isFromWithParam;
	this->m_isVisible = !isFromWithParam;
	$set(this, m_expression, nullptr);
}

Arg::Arg() {
}

$Class* Arg::load$($String* name, bool initialize) {
	$loadClass(Arg, name, initialize, &_Arg_ClassInfo_, allocate$Arg);
	return class$;
}

$Class* Arg::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com