#include <com/sun/org/apache/xml/internal/serialize/XHTMLSerializer.h>

#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/HTMLSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef XHTML

using $BaseMarkupSerializer = ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer;
using $HTMLSerializer = ::com::sun::org::apache::xml::internal::serialize::HTMLSerializer;
using $Method = ::com::sun::org::apache::xml::internal::serialize::Method;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {
$CompoundAttribute _XHTMLSerializer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$MethodInfo _XHTMLSerializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XHTMLSerializer::*)()>(&XHTMLSerializer::init$))},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(XHTMLSerializer::*)($OutputFormat*)>(&XHTMLSerializer::init$))},
	{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(XHTMLSerializer::*)($Writer*,$OutputFormat*)>(&XHTMLSerializer::init$))},
	{"<init>", "(Ljava/io/OutputStream;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(XHTMLSerializer::*)($OutputStream*,$OutputFormat*)>(&XHTMLSerializer::init$))},
	{"setOutputFormat", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XHTMLSerializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.XHTMLSerializer",
	"com.sun.org.apache.xml.internal.serialize.HTMLSerializer",
	nullptr,
	nullptr,
	_XHTMLSerializer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_XHTMLSerializer_Annotations_
};

$Object* allocate$XHTMLSerializer($Class* clazz) {
	return $of($alloc(XHTMLSerializer));
}

void XHTMLSerializer::init$() {
	$init($Method);
	$HTMLSerializer::init$(true, $$new($OutputFormat, $Method::XHTML, nullptr, false));
}

void XHTMLSerializer::init$($OutputFormat* format) {
	$init($Method);
	$HTMLSerializer::init$(true, format != nullptr ? format : $$new($OutputFormat, $Method::XHTML, nullptr, false));
}

void XHTMLSerializer::init$($Writer* writer, $OutputFormat* format) {
	$init($Method);
	$HTMLSerializer::init$(true, format != nullptr ? format : $$new($OutputFormat, $Method::XHTML, nullptr, false));
	setOutputCharStream(writer);
}

void XHTMLSerializer::init$($OutputStream* output, $OutputFormat* format) {
	$init($Method);
	$HTMLSerializer::init$(true, format != nullptr ? format : $$new($OutputFormat, $Method::XHTML, nullptr, false));
	setOutputByteStream(output);
}

void XHTMLSerializer::setOutputFormat($OutputFormat* format) {
	$init($Method);
	$HTMLSerializer::setOutputFormat(format != nullptr ? format : $$new($OutputFormat, $Method::XHTML, nullptr, false));
}

XHTMLSerializer::XHTMLSerializer() {
}

$Class* XHTMLSerializer::load$($String* name, bool initialize) {
	$loadClass(XHTMLSerializer, name, initialize, &_XHTMLSerializer_ClassInfo_, allocate$XHTMLSerializer);
	return class$;
}

$Class* XHTMLSerializer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com