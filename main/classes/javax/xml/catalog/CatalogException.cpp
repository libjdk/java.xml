#include <javax/xml/catalog/CatalogException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _CatalogException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CatalogException, serialVersionUID)},
	{}
};

$MethodInfo _CatalogException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CatalogException::*)($String*)>(&CatalogException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CatalogException::*)($String*,$Throwable*)>(&CatalogException::init$))},
	{}
};

$ClassInfo _CatalogException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.catalog.CatalogException",
	"java.lang.RuntimeException",
	nullptr,
	_CatalogException_FieldInfo_,
	_CatalogException_MethodInfo_
};

$Object* allocate$CatalogException($Class* clazz) {
	return $of($alloc(CatalogException));
}

void CatalogException::init$($String* message) {
	$RuntimeException::init$(message);
}

void CatalogException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

CatalogException::CatalogException() {
}

CatalogException::CatalogException(const CatalogException& e) {
}

CatalogException CatalogException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CatalogException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CatalogException::load$($String* name, bool initialize) {
	$loadClass(CatalogException, name, initialize, &_CatalogException_ClassInfo_, allocate$CatalogException);
	return class$;
}

$Class* CatalogException::class$ = nullptr;

		} // catalog
	} // xml
} // javax