#include <javax/xml/xpath/XPathException.h>

#include <java/io/InvalidClassException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $InvalidClassException = ::java::io::InvalidClassException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace javax {
	namespace xml {
		namespace xpath {

$FieldInfo _XPathException_FieldInfo_[] = {
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPathException, serialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPathException, serialVersionUID)},
	{}
};

$MethodInfo _XPathException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathException::*)($String*)>(&XPathException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathException::*)($Throwable*)>(&XPathException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"printStackTrace", "()V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(XPathException::*)($ObjectInputStream*)>(&XPathException::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(XPathException::*)($ObjectOutputStream*)>(&XPathException::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _XPathException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.xpath.XPathException",
	"java.lang.Exception",
	nullptr,
	_XPathException_FieldInfo_,
	_XPathException_MethodInfo_
};

$Object* allocate$XPathException($Class* clazz) {
	return $of($alloc(XPathException));
}


$ObjectStreamFieldArray* XPathException::serialPersistentFields = nullptr;

void XPathException::init$($String* message) {
	$Exception::init$(message);
	if (message == nullptr) {
		$throwNew($NullPointerException, "message can\'t be null"_s);
	}
}

void XPathException::init$($Throwable* cause) {
	$Exception::init$(cause);
	if (cause == nullptr) {
		$throwNew($NullPointerException, "cause can\'t be null"_s);
	}
}

$Throwable* XPathException::getCause() {
	return $Exception::getCause();
}

void XPathException::writeObject($ObjectOutputStream* out) {
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	$nc(fields)->put("cause"_s, $($of($Exception::getCause())));
	out->writeFields();
}

void XPathException::readObject($ObjectInputStream* in) {
	$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
	$var($Throwable, scause, $cast($Throwable, $nc(fields)->get("cause"_s, ($Object*)nullptr)));
	if ($Exception::getCause() == nullptr && scause != nullptr) {
		try {
			$Exception::initCause(scause);
		} catch ($IllegalStateException&) {
			$var($IllegalStateException, e, $catch());
			$throwNew($InvalidClassException, "Inconsistent state: two causes"_s);
		}
	}
}

void XPathException::printStackTrace($PrintStream* s) {
	if (getCause() != nullptr) {
		$nc($(getCause()))->printStackTrace(s);
		$nc(s)->println("--------------- linked to ------------------"_s);
	}
	$Exception::printStackTrace(s);
}

void XPathException::printStackTrace() {
	$init($System);
	printStackTrace($System::err);
}

void XPathException::printStackTrace($PrintWriter* s) {
	if (getCause() != nullptr) {
		$nc($(getCause()))->printStackTrace(s);
		$nc(s)->println("--------------- linked to ------------------"_s);
	}
	$Exception::printStackTrace(s);
}

void clinit$XPathException($Class* class$) {
	$load($Throwable);
	$assignStatic(XPathException::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "cause"_s, $Throwable::class$)}));
}

XPathException::XPathException() {
}

XPathException::XPathException(const XPathException& e) {
}

XPathException XPathException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XPathException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XPathException::load$($String* name, bool initialize) {
	$loadClass(XPathException, name, initialize, &_XPathException_ClassInfo_, clinit$XPathException, allocate$XPathException);
	return class$;
}

$Class* XPathException::class$ = nullptr;

		} // xpath
	} // xml
} // javax