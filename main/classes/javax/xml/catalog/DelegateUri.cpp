#include <javax/xml/catalog/DelegateUri.h>

#include <java/net/URI.h>
#include <javax/xml/catalog/AltCatalog.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <jcpp.h>

#undef DELEGATEURI

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $AltCatalog = ::javax::xml::catalog::AltCatalog;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $Normalizer = ::javax::xml::catalog::Normalizer;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _DelegateUri_FieldInfo_[] = {
	{"uriStartString", "Ljava/lang/String;", nullptr, 0, $field(DelegateUri, uriStartString)},
	{}
};

$MethodInfo _DelegateUri_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DelegateUri::*)($String*,$String*,$String*)>(&DelegateUri::init$))},
	{"getURIStartString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(DelegateUri::*)()>(&DelegateUri::getURIStartString))},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"matchURI", "(Ljava/lang/String;I)Ljava/net/URI;", nullptr, $PUBLIC},
	{"setURIStartString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DelegateUri::*)($String*)>(&DelegateUri::setURIStartString))},
	{}
};

$ClassInfo _DelegateUri_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.DelegateUri",
	"javax.xml.catalog.AltCatalog",
	nullptr,
	_DelegateUri_FieldInfo_,
	_DelegateUri_MethodInfo_
};

$Object* allocate$DelegateUri($Class* clazz) {
	return $of($alloc(DelegateUri));
}

void DelegateUri::init$($String* base, $String* uriStartString, $String* catalog) {
	$init($BaseEntry$CatalogEntryType);
	$AltCatalog::init$($BaseEntry$CatalogEntryType::DELEGATEURI, base);
	setURIStartString(uriStartString);
	setCatalog(catalog);
}

void DelegateUri::setURIStartString($String* uriStartString) {
	$CatalogMessages::reportNPEOnNull("uriStartString"_s, uriStartString);
	$set(this, uriStartString, $Normalizer::normalizeURI(uriStartString));
	setMatchId(this->uriStartString);
}

$String* DelegateUri::getURIStartString() {
	return this->uriStartString;
}

$String* DelegateUri::match($String* systemId) {
	return match(systemId, 0);
}

$URI* DelegateUri::matchURI($String* systemId, int32_t currentMatch) {
	int32_t var$1 = $nc(this->uriStartString)->length();
	bool var$0 = var$1 <= $nc(systemId)->length();
	if (var$0 && $nc(this->uriStartString)->equals($(systemId->substring(0, $nc(this->uriStartString)->length())))) {
		if (currentMatch < $nc(this->uriStartString)->length()) {
			return this->catalogURI;
		}
	}
	return nullptr;
}

DelegateUri::DelegateUri() {
}

$Class* DelegateUri::load$($String* name, bool initialize) {
	$loadClass(DelegateUri, name, initialize, &_DelegateUri_ClassInfo_, allocate$DelegateUri);
	return class$;
}

$Class* DelegateUri::class$ = nullptr;

		} // catalog
	} // xml
} // javax