#include <javax/xml/transform/stream/StreamSource.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <jcpp.h>

#undef FEATURE

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Source = ::javax::xml::transform::Source;

namespace javax {
	namespace xml {
		namespace transform {
			namespace stream {

$FieldInfo _StreamSource_FieldInfo_[] = {
	{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StreamSource, FEATURE)},
	{"publicId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StreamSource, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StreamSource, systemId)},
	{"inputStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(StreamSource, inputStream)},
	{"reader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(StreamSource, reader)},
	{}
};

$MethodInfo _StreamSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamSource::*)()>(&StreamSource::init$))},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamSource::*)($InputStream*)>(&StreamSource::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamSource::*)($InputStream*,$String*)>(&StreamSource::init$))},
	{"<init>", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamSource::*)($Reader*)>(&StreamSource::init$))},
	{"<init>", "(Ljava/io/Reader;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamSource::*)($Reader*,$String*)>(&StreamSource::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamSource::*)($String*)>(&StreamSource::init$))},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamSource::*)($File*)>(&StreamSource::init$))},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReader", "()Ljava/io/Reader;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isStreamEmpty", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(StreamSource::*)()>(&StreamSource::isStreamEmpty))},
	{"setInputStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setReader", "(Ljava/io/Reader;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/io/File;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StreamSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.stream.StreamSource",
	"java.lang.Object",
	"javax.xml.transform.Source",
	_StreamSource_FieldInfo_,
	_StreamSource_MethodInfo_
};

$Object* allocate$StreamSource($Class* clazz) {
	return $of($alloc(StreamSource));
}


$String* StreamSource::FEATURE = nullptr;

void StreamSource::init$() {
}

void StreamSource::init$($InputStream* inputStream) {
	setInputStream(inputStream);
}

void StreamSource::init$($InputStream* inputStream, $String* systemId) {
	setInputStream(inputStream);
	setSystemId(systemId);
}

void StreamSource::init$($Reader* reader) {
	setReader(reader);
}

void StreamSource::init$($Reader* reader, $String* systemId) {
	setReader(reader);
	setSystemId(systemId);
}

void StreamSource::init$($String* systemId) {
	$set(this, systemId, systemId);
}

void StreamSource::init$($File* f) {
	setSystemId($($nc($($nc(f)->toURI()))->toASCIIString()));
}

void StreamSource::setInputStream($InputStream* inputStream) {
	$set(this, inputStream, inputStream);
}

$InputStream* StreamSource::getInputStream() {
	return this->inputStream;
}

void StreamSource::setReader($Reader* reader) {
	$set(this, reader, reader);
}

$Reader* StreamSource::getReader() {
	return this->reader;
}

void StreamSource::setPublicId($String* publicId) {
	$set(this, publicId, publicId);
}

$String* StreamSource::getPublicId() {
	return this->publicId;
}

void StreamSource::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

$String* StreamSource::getSystemId() {
	return this->systemId;
}

void StreamSource::setSystemId($File* f) {
	$set(this, systemId, $nc($($nc(f)->toURI()))->toASCIIString());
}

bool StreamSource::isEmpty() {
	return (this->publicId == nullptr && this->systemId == nullptr && isStreamEmpty());
}

bool StreamSource::isStreamEmpty() {
	bool empty = true;
	try {
		if (this->inputStream != nullptr) {
			$nc(this->inputStream)->reset();
			int32_t bytesRead = $nc(this->inputStream)->available();
			if (bytesRead > 0) {
				return false;
			}
		}
		if (this->reader != nullptr) {
			$nc(this->reader)->reset();
			int32_t c = $nc(this->reader)->read();
			$nc(this->reader)->reset();
			if (c != -1) {
				return false;
			}
		}
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		return false;
	}
	return empty;
}

StreamSource::StreamSource() {
}

void clinit$StreamSource($Class* class$) {
	$assignStatic(StreamSource::FEATURE, "http://javax.xml.transform.stream.StreamSource/feature"_s);
}

$Class* StreamSource::load$($String* name, bool initialize) {
	$loadClass(StreamSource, name, initialize, &_StreamSource_ClassInfo_, clinit$StreamSource, allocate$StreamSource);
	return class$;
}

$Class* StreamSource::class$ = nullptr;

			} // stream
		} // transform
	} // xml
} // javax