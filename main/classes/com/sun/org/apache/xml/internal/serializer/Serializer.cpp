#include <com/sun/org/apache/xml/internal/serializer/Serializer.h>

#include <com/sun/org/apache/xml/internal/serializer/DOMSerializer.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/util/Properties.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

using $DOMSerializer = ::com::sun::org::apache::xml::internal::serializer::DOMSerializer;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _Serializer_MethodInfo_[] = {
	{"asContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"asDOM3Serializer", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"asDOMSerializer", "()Lcom/sun/org/apache/xml/internal/serializer/DOMSerializer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getOutputFormat", "()Ljava/util/Properties;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setOutputFormat", "(Ljava/util/Properties;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Serializer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.Serializer",
	nullptr,
	nullptr,
	nullptr,
	_Serializer_MethodInfo_
};

$Object* allocate$Serializer($Class* clazz) {
	return $of($alloc(Serializer));
}

$Class* Serializer::load$($String* name, bool initialize) {
	$loadClass(Serializer, name, initialize, &_Serializer_ClassInfo_, allocate$Serializer);
	return class$;
}

$Class* Serializer::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com