#include <javax/xml/catalog/AltCatalog.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <jcpp.h>

#undef ERR_OTHER

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $BaseEntry = ::javax::xml::catalog::BaseEntry;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _AltCatalog_FieldInfo_[] = {
	{"catalogURI", "Ljava/net/URI;", nullptr, 0, $field(AltCatalog, catalogURI)},
	{}
};

$MethodInfo _AltCatalog_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/catalog/BaseEntry$CatalogEntryType;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AltCatalog::*)($BaseEntry$CatalogEntryType*,$String*)>(&AltCatalog::init$))},
	{"getCatalogId", "()Ljava/lang/String;", nullptr, 0},
	{"getCatalogURI", "()Ljava/net/URI;", nullptr, 0},
	{"matchURI", "(Ljava/lang/String;I)Ljava/net/URI;", nullptr, $PUBLIC},
	{"setCatalog", "(Ljava/lang/String;)V", nullptr, 0},
	{}
};

$ClassInfo _AltCatalog_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.catalog.AltCatalog",
	"javax.xml.catalog.BaseEntry",
	nullptr,
	_AltCatalog_FieldInfo_,
	_AltCatalog_MethodInfo_
};

$Object* allocate$AltCatalog($Class* clazz) {
	return $of($alloc(AltCatalog));
}

void AltCatalog::init$($BaseEntry$CatalogEntryType* type, $String* base) {
	$BaseEntry::init$(type, base);
}

void AltCatalog::setCatalog($String* catalog) {
	$var($URL, url, verifyURI("catalog"_s, this->baseURI, catalog));
	try {
		$set(this, catalogURI, $nc(url)->toURI());
	} catch ($URISyntaxException&) {
		$var($URISyntaxException, ex, $catch());
		$init($CatalogMessages);
		$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_OTHER, static_cast<$Throwable*>(ex));
	}
}

$String* AltCatalog::getCatalogId() {
	return $nc(this->catalogURI)->toASCIIString();
}

$URI* AltCatalog::getCatalogURI() {
	return this->catalogURI;
}

$URI* AltCatalog::matchURI($String* id, int32_t currentMatch) {
	return nullptr;
}

AltCatalog::AltCatalog() {
}

$Class* AltCatalog::load$($String* name, bool initialize) {
	$loadClass(AltCatalog, name, initialize, &_AltCatalog_ClassInfo_, allocate$AltCatalog);
	return class$;
}

$Class* AltCatalog::class$ = nullptr;

		} // catalog
	} // xml
} // javax