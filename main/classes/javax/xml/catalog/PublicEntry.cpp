#include <javax/xml/catalog/PublicEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <jcpp.h>

#undef PUBLIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $BaseEntry = ::javax::xml::catalog::BaseEntry;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $Normalizer = ::javax::xml::catalog::Normalizer;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _PublicEntry_FieldInfo_[] = {
	{"publicId", "Ljava/lang/String;", nullptr, 0, $field(PublicEntry, publicId)},
	{"uri", "Ljava/net/URL;", nullptr, 0, $field(PublicEntry, uri)},
	{}
};

$MethodInfo _PublicEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PublicEntry::*)($String*,$String*,$String*)>(&PublicEntry::init$))},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(PublicEntry::*)()>(&PublicEntry::getPublicId))},
	{"getURI", "()Ljava/net/URL;", nullptr, $PUBLIC, $method(static_cast<$URL*(PublicEntry::*)()>(&PublicEntry::getURI))},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PublicEntry::*)($String*)>(&PublicEntry::setPublicId))},
	{"setURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PublicEntry::*)($String*)>(&PublicEntry::setURI))},
	{}
};

$ClassInfo _PublicEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.PublicEntry",
	"javax.xml.catalog.BaseEntry",
	nullptr,
	_PublicEntry_FieldInfo_,
	_PublicEntry_MethodInfo_
};

$Object* allocate$PublicEntry($Class* clazz) {
	return $of($alloc(PublicEntry));
}

void PublicEntry::init$($String* base, $String* publicId, $String* uri) {
	$init($BaseEntry$CatalogEntryType);
	$BaseEntry::init$($BaseEntry$CatalogEntryType::PUBLIC, base);
	setPublicId(publicId);
	setURI(uri);
}

void PublicEntry::setPublicId($String* publicId) {
	$CatalogMessages::reportNPEOnNull("publicId"_s, publicId);
	$set(this, publicId, $Normalizer::normalizePublicId(publicId));
}

void PublicEntry::setURI($String* uri) {
	$set(this, uri, verifyURI("uri"_s, this->baseURI, uri));
}

$String* PublicEntry::getPublicId() {
	return this->publicId;
}

$URL* PublicEntry::getURI() {
	return this->uri;
}

$String* PublicEntry::match($String* publicId) {
	if ($nc(this->publicId)->equals(publicId)) {
		return $nc(this->uri)->toString();
	}
	return nullptr;
}

PublicEntry::PublicEntry() {
}

$Class* PublicEntry::load$($String* name, bool initialize) {
	$loadClass(PublicEntry, name, initialize, &_PublicEntry_ClassInfo_, allocate$PublicEntry);
	return class$;
}

$Class* PublicEntry::class$ = nullptr;

		} // catalog
	} // xml
} // javax