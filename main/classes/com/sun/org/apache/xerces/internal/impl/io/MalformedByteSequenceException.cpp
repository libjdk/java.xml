#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>

#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <java/io/CharConversionException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $CharConversionException = ::java::io::CharConversionException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace io {

$FieldInfo _MalformedByteSequenceException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MalformedByteSequenceException, serialVersionUID)},
	{"fFormatter", "Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fFormatter)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fLocale)},
	{"fDomain", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fDomain)},
	{"fKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fKey)},
	{"fArguments", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fArguments)},
	{"fMessage", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MalformedByteSequenceException, fMessage)},
	{}
};

$MethodInfo _MalformedByteSequenceException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(MalformedByteSequenceException::*)($MessageFormatter*,$Locale*,$String*,$String*,$ObjectArray*)>(&MalformedByteSequenceException::init$))},
	{"getArguments", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDomain", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MalformedByteSequenceException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.io.MalformedByteSequenceException",
	"java.io.CharConversionException",
	nullptr,
	_MalformedByteSequenceException_FieldInfo_,
	_MalformedByteSequenceException_MethodInfo_
};

$Object* allocate$MalformedByteSequenceException($Class* clazz) {
	return $of($alloc(MalformedByteSequenceException));
}

void MalformedByteSequenceException::init$($MessageFormatter* formatter, $Locale* locale, $String* domain, $String* key, $ObjectArray* arguments) {
	$CharConversionException::init$();
	$set(this, fFormatter, formatter);
	$set(this, fLocale, locale);
	$set(this, fDomain, domain);
	$set(this, fKey, key);
	$set(this, fArguments, arguments);
}

$String* MalformedByteSequenceException::getDomain() {
	return this->fDomain;
}

$String* MalformedByteSequenceException::getKey() {
	return this->fKey;
}

$ObjectArray* MalformedByteSequenceException::getArguments() {
	return this->fArguments;
}

$String* MalformedByteSequenceException::getMessage() {
	if (this->fMessage == nullptr) {
		$set(this, fMessage, $nc(this->fFormatter)->formatMessage(this->fLocale, this->fKey, this->fArguments));
		$set(this, fFormatter, nullptr);
		$set(this, fLocale, nullptr);
	}
	return this->fMessage;
}

MalformedByteSequenceException::MalformedByteSequenceException() {
}

MalformedByteSequenceException::MalformedByteSequenceException(const MalformedByteSequenceException& e) {
}

MalformedByteSequenceException MalformedByteSequenceException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MalformedByteSequenceException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MalformedByteSequenceException::load$($String* name, bool initialize) {
	$loadClass(MalformedByteSequenceException, name, initialize, &_MalformedByteSequenceException_ClassInfo_, allocate$MalformedByteSequenceException);
	return class$;
}

$Class* MalformedByteSequenceException::class$ = nullptr;

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com