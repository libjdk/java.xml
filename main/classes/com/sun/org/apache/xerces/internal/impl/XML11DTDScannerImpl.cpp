#include <com/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLDTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner = ::com::sun::org::apache::xerces::internal::impl::XMLScanner;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XML11DTDScannerImpl_FieldInfo_[] = {
	{"fStringBuffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE, $field(XML11DTDScannerImpl, fStringBuffer)},
	{}
};

$MethodInfo _XML11DTDScannerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XML11DTDScannerImpl::*)()>(&XML11DTDScannerImpl::init$))},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XML11DTDScannerImpl::*)($SymbolTable*,$XMLErrorReporter*,$XMLEntityManager*)>(&XML11DTDScannerImpl::init$))},
	{"getVersionNotSupportedKey", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"isInvalid", "(I)Z", nullptr, $PROTECTED},
	{"isInvalidLiteral", "(I)Z", nullptr, $PROTECTED},
	{"isUnchangedByNormalization", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)I", nullptr, $PROTECTED},
	{"isValidNCName", "(I)Z", nullptr, $PROTECTED},
	{"isValidNameChar", "(I)Z", nullptr, $PROTECTED},
	{"isValidNameStartChar", "(I)Z", nullptr, $PROTECTED},
	{"isValidNameStartHighSurrogate", "(I)Z", nullptr, $PROTECTED},
	{"normalizeWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PROTECTED},
	{"normalizeWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;I)V", nullptr, $PROTECTED},
	{"scanPubidLiteral", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)Z", nullptr, $PROTECTED, nullptr, "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"versionSupported", "(Ljava/lang/String;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XML11DTDScannerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XML11DTDScannerImpl",
	"com.sun.org.apache.xerces.internal.impl.XMLDTDScannerImpl",
	nullptr,
	_XML11DTDScannerImpl_FieldInfo_,
	_XML11DTDScannerImpl_MethodInfo_
};

$Object* allocate$XML11DTDScannerImpl($Class* clazz) {
	return $of($alloc(XML11DTDScannerImpl));
}

void XML11DTDScannerImpl::init$() {
	$XMLDTDScannerImpl::init$();
	$set(this, fStringBuffer, $new($XMLStringBuffer));
}

void XML11DTDScannerImpl::init$($SymbolTable* symbolTable, $XMLErrorReporter* errorReporter, $XMLEntityManager* entityManager) {
	$XMLDTDScannerImpl::init$(symbolTable, errorReporter, entityManager);
	$set(this, fStringBuffer, $new($XMLStringBuffer));
}

bool XML11DTDScannerImpl::scanPubidLiteral($XMLString* literal) {
	$useLocalCurrentObjectStackCache();
	int32_t quote = $nc(this->fEntityScanner)->scanChar(nullptr);
	if (quote != u'\'' && quote != u'\"') {
		reportFatalError("QuoteRequiredInPublicID"_s, nullptr);
		return false;
	}
	$nc(this->fStringBuffer)->clear();
	bool skipSpace = true;
	bool dataok = true;
	while (true) {
		int32_t c = $nc(this->fEntityScanner)->scanChar(nullptr);
		if (c == u' ' || c == u'\n' || c == u'\r' || c == 133 || c == 8232) {
			if (!skipSpace) {
				$nc(this->fStringBuffer)->append(u' ');
				skipSpace = true;
			}
		} else if (c == quote) {
			if (skipSpace) {
				--$nc(this->fStringBuffer)->length;
			}
			$nc(literal)->setValues(this->fStringBuffer);
			break;
		} else if ($XMLChar::isPubid(c)) {
			$nc(this->fStringBuffer)->append((char16_t)c);
			skipSpace = false;
		} else if (c == -1) {
			reportFatalError("PublicIDUnterminated"_s, nullptr);
			return false;
		} else {
			dataok = false;
			reportFatalError("InvalidCharInPublicID"_s, $$new($ObjectArray, {$($of($Integer::toHexString(c)))}));
		}
	}
	return dataok;
}

void XML11DTDScannerImpl::normalizeWhitespace($XMLString* value) {
	int32_t end = $nc(value)->offset + value->length;
	for (int32_t i = value->offset; i < end; ++i) {
		int32_t c = $nc(value->ch)->get(i);
		if ($XMLChar::isSpace(c)) {
			$nc(value->ch)->set(i, u' ');
		}
	}
}

void XML11DTDScannerImpl::normalizeWhitespace($XMLString* value, int32_t fromIndex) {
	int32_t end = $nc(value)->offset + value->length;
	for (int32_t i = value->offset + fromIndex; i < end; ++i) {
		int32_t c = $nc(value->ch)->get(i);
		if ($XMLChar::isSpace(c)) {
			$nc(value->ch)->set(i, u' ');
		}
	}
}

int32_t XML11DTDScannerImpl::isUnchangedByNormalization($XMLString* value) {
	int32_t end = $nc(value)->offset + value->length;
	for (int32_t i = value->offset; i < end; ++i) {
		int32_t c = $nc(value->ch)->get(i);
		if ($XMLChar::isSpace(c)) {
			return i - value->offset;
		}
	}
	return -1;
}

bool XML11DTDScannerImpl::isInvalid(int32_t value) {
	return (!$XML11Char::isXML11Valid(value));
}

bool XML11DTDScannerImpl::isInvalidLiteral(int32_t value) {
	return (!$XML11Char::isXML11ValidLiteral(value));
}

bool XML11DTDScannerImpl::isValidNameChar(int32_t value) {
	return ($XML11Char::isXML11Name(value));
}

bool XML11DTDScannerImpl::isValidNameStartChar(int32_t value) {
	return ($XML11Char::isXML11NameStart(value));
}

bool XML11DTDScannerImpl::isValidNCName(int32_t value) {
	return ($XML11Char::isXML11NCName(value));
}

bool XML11DTDScannerImpl::isValidNameStartHighSurrogate(int32_t value) {
	return $XML11Char::isXML11NameHighSurrogate(value);
}

bool XML11DTDScannerImpl::versionSupported($String* version) {
	bool var$0 = $nc(version)->equals("1.1"_s);
	return var$0 || $nc(version)->equals("1.0"_s);
}

$String* XML11DTDScannerImpl::getVersionNotSupportedKey() {
	return "VersionNotSupported11"_s;
}

XML11DTDScannerImpl::XML11DTDScannerImpl() {
}

$Class* XML11DTDScannerImpl::load$($String* name, bool initialize) {
	$loadClass(XML11DTDScannerImpl, name, initialize, &_XML11DTDScannerImpl_ClassInfo_, allocate$XML11DTDScannerImpl);
	return class$;
}

$Class* XML11DTDScannerImpl::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com