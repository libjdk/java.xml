#include <javax/xml/transform/stream/StreamResult.h>

#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/net/URI.h>
#include <jcpp.h>

#undef FEATURE

using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Result = ::javax::xml::transform::Result;

namespace javax {
	namespace xml {
		namespace transform {
			namespace stream {

$FieldInfo _StreamResult_FieldInfo_[] = {
	{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StreamResult, FEATURE)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StreamResult, systemId)},
	{"outputStream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(StreamResult, outputStream)},
	{"writer", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(StreamResult, writer)},
	{}
};

$MethodInfo _StreamResult_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamResult::*)()>(&StreamResult::init$))},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamResult::*)($OutputStream*)>(&StreamResult::init$))},
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamResult::*)($Writer*)>(&StreamResult::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamResult::*)($String*)>(&StreamResult::init$))},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamResult::*)($File*)>(&StreamResult::init$))},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/io/File;)V", nullptr, $PUBLIC},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StreamResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.stream.StreamResult",
	"java.lang.Object",
	"javax.xml.transform.Result",
	_StreamResult_FieldInfo_,
	_StreamResult_MethodInfo_
};

$Object* allocate$StreamResult($Class* clazz) {
	return $of($alloc(StreamResult));
}

$String* StreamResult::FEATURE = nullptr;

void StreamResult::init$() {
}

void StreamResult::init$($OutputStream* outputStream) {
	setOutputStream(outputStream);
}

void StreamResult::init$($Writer* writer) {
	setWriter(writer);
}

void StreamResult::init$($String* systemId) {
	$set(this, systemId, systemId);
}

void StreamResult::init$($File* f) {
	$useLocalCurrentObjectStackCache();
	setSystemId($($nc($($nc(f)->toURI()))->toASCIIString()));
}

void StreamResult::setOutputStream($OutputStream* outputStream) {
	$set(this, outputStream, outputStream);
}

$OutputStream* StreamResult::getOutputStream() {
	return this->outputStream;
}

void StreamResult::setWriter($Writer* writer) {
	$set(this, writer, writer);
}

$Writer* StreamResult::getWriter() {
	return this->writer;
}

void StreamResult::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

void StreamResult::setSystemId($File* f) {
	$set(this, systemId, $nc($($nc(f)->toURI()))->toASCIIString());
}

$String* StreamResult::getSystemId() {
	return this->systemId;
}

StreamResult::StreamResult() {
}

void clinit$StreamResult($Class* class$) {
	$assignStatic(StreamResult::FEATURE, "http://javax.xml.transform.stream.StreamResult/feature"_s);
}

$Class* StreamResult::load$($String* name, bool initialize) {
	$loadClass(StreamResult, name, initialize, &_StreamResult_ClassInfo_, clinit$StreamResult, allocate$StreamResult);
	return class$;
}

$Class* StreamResult::class$ = nullptr;

			} // stream
		} // transform
	} // xml
} // javax