#include <javax/xml/catalog/SystemEntry.h>

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

#undef SYSTEM

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

$FieldInfo _SystemEntry_FieldInfo_[] = {
	{"systemId", "Ljava/lang/String;", nullptr, 0, $field(SystemEntry, systemId)},
	{"uri", "Ljava/net/URL;", nullptr, 0, $field(SystemEntry, uri)},
	{}
};

$MethodInfo _SystemEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SystemEntry::*)($String*,$String*,$String*)>(&SystemEntry::init$))},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SystemEntry::*)()>(&SystemEntry::getSystemId))},
	{"getURI", "()Ljava/net/URL;", nullptr, $PUBLIC, $method(static_cast<$URL*(SystemEntry::*)()>(&SystemEntry::getURI))},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SystemEntry::*)($String*)>(&SystemEntry::setSystemId))},
	{"setURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SystemEntry::*)($String*)>(&SystemEntry::setURI))},
	{}
};

$ClassInfo _SystemEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.SystemEntry",
	"javax.xml.catalog.BaseEntry",
	nullptr,
	_SystemEntry_FieldInfo_,
	_SystemEntry_MethodInfo_
};

$Object* allocate$SystemEntry($Class* clazz) {
	return $of($alloc(SystemEntry));
}

void SystemEntry::init$($String* base, $String* systemId, $String* uri) {
	$init($BaseEntry$CatalogEntryType);
	$BaseEntry::init$($BaseEntry$CatalogEntryType::SYSTEM, base);
	setSystemId(systemId);
	setURI(uri);
}

void SystemEntry::setSystemId($String* systemId) {
	$CatalogMessages::reportNPEOnNull("systemId"_s, systemId);
	$set(this, systemId, $Normalizer::normalizeURI(systemId));
}

void SystemEntry::setURI($String* uri) {
	$set(this, uri, verifyURI("setURI"_s, this->baseURI, uri));
}

$String* SystemEntry::getSystemId() {
	return this->systemId;
}

$URL* SystemEntry::getURI() {
	return this->uri;
}

$String* SystemEntry::match($String* systemId) {
	if ($nc(this->systemId)->equals(systemId)) {
		return $nc(this->uri)->toString();
	}
	return nullptr;
}

SystemEntry::SystemEntry() {
}

$Class* SystemEntry::load$($String* name, bool initialize) {
	$loadClass(SystemEntry, name, initialize, &_SystemEntry_ClassInfo_, allocate$SystemEntry);
	return class$;
}

$Class* SystemEntry::class$ = nullptr;

		} // catalog
	} // xml
} // javax