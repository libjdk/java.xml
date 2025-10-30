#include <javax/xml/datatype/DatatypeConfigurationException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace datatype {

$FieldInfo _DatatypeConfigurationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DatatypeConfigurationException, serialVersionUID)},
	{}
};

$MethodInfo _DatatypeConfigurationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DatatypeConfigurationException::*)()>(&DatatypeConfigurationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DatatypeConfigurationException::*)($String*)>(&DatatypeConfigurationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(DatatypeConfigurationException::*)($String*,$Throwable*)>(&DatatypeConfigurationException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(DatatypeConfigurationException::*)($Throwable*)>(&DatatypeConfigurationException::init$))},
	{}
};

$ClassInfo _DatatypeConfigurationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.datatype.DatatypeConfigurationException",
	"java.lang.Exception",
	nullptr,
	_DatatypeConfigurationException_FieldInfo_,
	_DatatypeConfigurationException_MethodInfo_
};

$Object* allocate$DatatypeConfigurationException($Class* clazz) {
	return $of($alloc(DatatypeConfigurationException));
}

void DatatypeConfigurationException::init$() {
	$Exception::init$();
}

void DatatypeConfigurationException::init$($String* message) {
	$Exception::init$(message);
}

void DatatypeConfigurationException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void DatatypeConfigurationException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

DatatypeConfigurationException::DatatypeConfigurationException() {
}

DatatypeConfigurationException::DatatypeConfigurationException(const DatatypeConfigurationException& e) : $Exception(e) {
}

void DatatypeConfigurationException::throw$() {
	throw *this;
}

$Class* DatatypeConfigurationException::load$($String* name, bool initialize) {
	$loadClass(DatatypeConfigurationException, name, initialize, &_DatatypeConfigurationException_ClassInfo_, allocate$DatatypeConfigurationException);
	return class$;
}

$Class* DatatypeConfigurationException::class$ = nullptr;

		} // datatype
	} // xml
} // javax