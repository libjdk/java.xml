#include <com/sun/org/apache/xml/internal/utils/ListingErrorHandler.h>

#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/SAXSourceLocator.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <java/io/BufferedReader.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER

using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $SAXSourceLocator = ::com::sun::org::apache::xml::internal::utils::SAXSourceLocator;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $BufferedReader = ::java::io::BufferedReader;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _ListingErrorHandler_FieldInfo_[] = {
	{"m_pw", "Ljava/io/PrintWriter;", nullptr, $PROTECTED, $field(ListingErrorHandler, m_pw)},
	{"throwOnWarning", "Z", nullptr, $PROTECTED, $field(ListingErrorHandler, throwOnWarning)},
	{"throwOnError", "Z", nullptr, $PROTECTED, $field(ListingErrorHandler, throwOnError)},
	{"throwOnFatalError", "Z", nullptr, $PROTECTED, $field(ListingErrorHandler, throwOnFatalError)},
	{}
};

$MethodInfo _ListingErrorHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(ListingErrorHandler::*)($PrintWriter*)>(&ListingErrorHandler::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ListingErrorHandler::*)()>(&ListingErrorHandler::init$))},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"error", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"fatalError", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"getSourceLine", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($String*,int32_t)>(&ListingErrorHandler::getSourceLine)), "java.lang.Exception"},
	{"getThrowOnError", "()Z", nullptr, $PUBLIC},
	{"getThrowOnFatalError", "()Z", nullptr, $PUBLIC},
	{"getThrowOnWarning", "()Z", nullptr, $PUBLIC},
	{"logExceptionLocation", "(Ljava/io/PrintWriter;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($PrintWriter*,$Throwable*)>(&ListingErrorHandler::logExceptionLocation))},
	{"logSourceLine", "(Ljava/io/PrintWriter;Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($PrintWriter*,$SourceLocator*)>(&ListingErrorHandler::logSourceLine))},
	{"setThrowOnError", "(Z)V", nullptr, $PUBLIC},
	{"setThrowOnFatalError", "(Z)V", nullptr, $PUBLIC},
	{"setThrowOnWarning", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"warning", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _ListingErrorHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.ListingErrorHandler",
	"java.lang.Object",
	"org.xml.sax.ErrorHandler,javax.xml.transform.ErrorListener",
	_ListingErrorHandler_FieldInfo_,
	_ListingErrorHandler_MethodInfo_
};

$Object* allocate$ListingErrorHandler($Class* clazz) {
	return $of($alloc(ListingErrorHandler));
}

int32_t ListingErrorHandler::hashCode() {
	 return this->$ErrorHandler::hashCode();
}

bool ListingErrorHandler::equals(Object$* arg0) {
	 return this->$ErrorHandler::equals(arg0);
}

$Object* ListingErrorHandler::clone() {
	 return this->$ErrorHandler::clone();
}

$String* ListingErrorHandler::toString() {
	 return this->$ErrorHandler::toString();
}

void ListingErrorHandler::finalize() {
	this->$ErrorHandler::finalize();
}

void ListingErrorHandler::init$($PrintWriter* pw) {
	$set(this, m_pw, nullptr);
	this->throwOnWarning = false;
	this->throwOnError = true;
	this->throwOnFatalError = true;
	if (nullptr == pw) {
		$init($XMLErrorResources);
		$throwNew($NullPointerException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, nullptr)));
	}
	$set(this, m_pw, pw);
}

void ListingErrorHandler::init$() {
	$set(this, m_pw, nullptr);
	this->throwOnWarning = false;
	this->throwOnError = true;
	this->throwOnFatalError = true;
	$init($System);
	$set(this, m_pw, $new($PrintWriter, static_cast<$OutputStream*>($System::err), true));
}

void ListingErrorHandler::warning($SAXParseException* exception) {
	logExceptionLocation(this->m_pw, exception);
	$nc(this->m_pw)->println($$str({"warning: "_s, $($nc(exception)->getMessage())}));
	$nc(this->m_pw)->flush();
	if (getThrowOnWarning()) {
		$throw(exception);
	}
}

void ListingErrorHandler::error($SAXParseException* exception) {
	logExceptionLocation(this->m_pw, exception);
	$nc(this->m_pw)->println($$str({"error: "_s, $($nc(exception)->getMessage())}));
	$nc(this->m_pw)->flush();
	if (getThrowOnError()) {
		$throw(exception);
	}
}

void ListingErrorHandler::fatalError($SAXParseException* exception) {
	logExceptionLocation(this->m_pw, exception);
	$nc(this->m_pw)->println($$str({"fatalError: "_s, $($nc(exception)->getMessage())}));
	$nc(this->m_pw)->flush();
	if (getThrowOnFatalError()) {
		$throw(exception);
	}
}

void ListingErrorHandler::warning($TransformerException* exception) {
	logExceptionLocation(this->m_pw, exception);
	$nc(this->m_pw)->println($$str({"warning: "_s, $($nc(exception)->getMessage())}));
	$nc(this->m_pw)->flush();
	if (getThrowOnWarning()) {
		$throw(exception);
	}
}

void ListingErrorHandler::error($TransformerException* exception) {
	logExceptionLocation(this->m_pw, exception);
	$nc(this->m_pw)->println($$str({"error: "_s, $($nc(exception)->getMessage())}));
	$nc(this->m_pw)->flush();
	if (getThrowOnError()) {
		$throw(exception);
	}
}

void ListingErrorHandler::fatalError($TransformerException* exception) {
	logExceptionLocation(this->m_pw, exception);
	$nc(this->m_pw)->println($$str({"error: "_s, $($nc(exception)->getMessage())}));
	$nc(this->m_pw)->flush();
	if (getThrowOnError()) {
		$throw(exception);
	}
}

void ListingErrorHandler::logExceptionLocation($PrintWriter* pw$renamed, $Throwable* exception) {
	$init(ListingErrorHandler);
	$var($PrintWriter, pw, pw$renamed);
	if (nullptr == pw) {
		$init($System);
		$assign(pw, $new($PrintWriter, static_cast<$OutputStream*>($System::err), true));
	}
	$var($SourceLocator, locator, nullptr);
	$var($Throwable, cause, exception);
	do {
		if ($instanceOf($SAXParseException, cause)) {
			$assign(locator, $new($SAXSourceLocator, $cast($SAXParseException, cause)));
		} else if ($instanceOf($TransformerException, cause)) {
			$var($SourceLocator, causeLocator, $nc(($cast($TransformerException, cause)))->getLocator());
			if (nullptr != causeLocator) {
				$assign(locator, causeLocator);
			}
		}
		if ($instanceOf($TransformerException, cause)) {
			$assign(cause, $nc(($cast($TransformerException, cause)))->getCause());
		} else if ($instanceOf($WrappedRuntimeException, cause)) {
			$assign(cause, $nc(($cast($WrappedRuntimeException, cause)))->getException());
		} else if ($instanceOf($SAXException, cause)) {
			$assign(cause, $nc(($cast($SAXException, cause)))->getException());
		} else {
			$assign(cause, nullptr);
		}
	} while (nullptr != cause);
	if (nullptr != locator) {
		$var($String, id, (locator->getPublicId() != locator->getPublicId()) ? locator->getPublicId() : (nullptr != locator->getSystemId()) ? locator->getSystemId() : "SystemId-Unknown"_s);
		$var($String, var$1, $$str({id, ":Line="_s, $$str(locator->getLineNumber()), ";Column="_s}));
		$var($String, var$0, $$concat(var$1, $$str(locator->getColumnNumber())));
		$nc(pw)->print($$concat(var$0, ": "));
		pw->println($$str({"exception:"_s, $($nc(exception)->getMessage())}));
		pw->println($$str({"root-cause:"_s, ((nullptr != cause) ? $(cause->getMessage()) : "null"_s)}));
		logSourceLine(pw, locator);
	} else {
		$nc(pw)->print("SystemId-Unknown:locator-unavailable: "_s);
		pw->println($$str({"exception:"_s, $($nc(exception)->getMessage())}));
		pw->println($$str({"root-cause:"_s, ((nullptr != cause) ? $(cause->getMessage()) : "null"_s)}));
	}
}

void ListingErrorHandler::logSourceLine($PrintWriter* pw$renamed, $SourceLocator* locator) {
	$init(ListingErrorHandler);
	$var($PrintWriter, pw, pw$renamed);
	if (nullptr == locator) {
		return;
	}
	if (nullptr == pw) {
		$init($System);
		$assign(pw, $new($PrintWriter, static_cast<$OutputStream*>($System::err), true));
	}
	$var($String, url, $nc(locator)->getSystemId());
	if (nullptr == url) {
		$nc(pw)->println("line: (No systemId; cannot read file)"_s);
		pw->println();
		return;
	}
	try {
		int32_t line = locator->getLineNumber();
		int32_t column = locator->getColumnNumber();
		$nc(pw)->println($$str({"line: "_s, $(getSourceLine(url, line))}));
		$var($StringBuffer, buf, $new($StringBuffer, "line: "_s));
		for (int32_t i = 1; i < column; ++i) {
			buf->append(u' ');
		}
		buf->append(u'^');
		pw->println($(buf->toString()));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$nc(pw)->println($$str({"line: logSourceLine unavailable due to: "_s, $(e->getMessage())}));
		pw->println();
	}
}

$String* ListingErrorHandler::getSourceLine($String* sourceUrl, int32_t lineNum) {
	$init(ListingErrorHandler);
	$var($URL, url, nullptr);
	try {
		$assign(url, $new($URL, sourceUrl));
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, mue, $catch());
		int32_t indexOfColon = $nc(sourceUrl)->indexOf((int32_t)u':');
		int32_t indexOfSlash = sourceUrl->indexOf((int32_t)u'/');
		if ((indexOfColon != -1) && (indexOfSlash != -1) && (indexOfColon < indexOfSlash)) {
			$throw(mue);
		} else {
			$assign(url, $new($URL, $($SystemIDResolver::getAbsoluteURI(sourceUrl))));
		}
	}
	$var($String, line, nullptr);
	$var($InputStream, is, nullptr);
	$var($BufferedReader, br, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($URLConnection, uc, $nc(url)->openConnection());
			$assign(is, $nc(uc)->getInputStream());
			$assign(br, $new($BufferedReader, $$new($InputStreamReader, is)));
			for (int32_t i = 1; i <= lineNum; ++i) {
				$assign(line, br->readLine());
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(br)->close();
			$nc(is)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return line;
}

void ListingErrorHandler::setThrowOnWarning(bool b) {
	this->throwOnWarning = b;
}

bool ListingErrorHandler::getThrowOnWarning() {
	return this->throwOnWarning;
}

void ListingErrorHandler::setThrowOnError(bool b) {
	this->throwOnError = b;
}

bool ListingErrorHandler::getThrowOnError() {
	return this->throwOnError;
}

void ListingErrorHandler::setThrowOnFatalError(bool b) {
	this->throwOnFatalError = b;
}

bool ListingErrorHandler::getThrowOnFatalError() {
	return this->throwOnFatalError;
}

ListingErrorHandler::ListingErrorHandler() {
}

$Class* ListingErrorHandler::load$($String* name, bool initialize) {
	$loadClass(ListingErrorHandler, name, initialize, &_ListingErrorHandler_ClassInfo_, allocate$ListingErrorHandler);
	return class$;
}

$Class* ListingErrorHandler::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com