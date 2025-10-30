#include <javax/xml/catalog/CatalogManager.h>

#include <java/net/URI.h>
#include <javax/xml/catalog/Catalog.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/CatalogImpl.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/CatalogResolver.h>
#include <javax/xml/catalog/CatalogResolverImpl.h>
#include <javax/xml/catalog/Util.h>
#include <jcpp.h>

using $URIArray = $Array<::java::net::URI>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Catalog = ::javax::xml::catalog::Catalog;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogImpl = ::javax::xml::catalog::CatalogImpl;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $CatalogResolver = ::javax::xml::catalog::CatalogResolver;
using $CatalogResolverImpl = ::javax::xml::catalog::CatalogResolverImpl;
using $Util = ::javax::xml::catalog::Util;

namespace javax {
	namespace xml {
		namespace catalog {

$MethodInfo _CatalogManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CatalogManager::*)()>(&CatalogManager::init$))},
	{"catalog", "(Ljavax/xml/catalog/CatalogFeatures;[Ljava/net/URI;)Ljavax/xml/catalog/Catalog;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Catalog*(*)($CatalogFeatures*,$URIArray*)>(&CatalogManager::catalog))},
	{"catalogResolver", "(Ljavax/xml/catalog/Catalog;)Ljavax/xml/catalog/CatalogResolver;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CatalogResolver*(*)($Catalog*)>(&CatalogManager::catalogResolver))},
	{"catalogResolver", "(Ljavax/xml/catalog/CatalogFeatures;[Ljava/net/URI;)Ljavax/xml/catalog/CatalogResolver;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$CatalogResolver*(*)($CatalogFeatures*,$URIArray*)>(&CatalogManager::catalogResolver))},
	{}
};

$ClassInfo _CatalogManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.catalog.CatalogManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CatalogManager_MethodInfo_
};

$Object* allocate$CatalogManager($Class* clazz) {
	return $of($alloc(CatalogManager));
}

void CatalogManager::init$() {
}

$Catalog* CatalogManager::catalog($CatalogFeatures* features, $URIArray* uris) {
	$Util::validateUrisSyntax(uris);
	$var($CatalogImpl, catalog, $new($CatalogImpl, features, uris));
	catalog->load();
	return catalog;
}

$CatalogResolver* CatalogManager::catalogResolver($Catalog* catalog) {
	if (catalog == nullptr) {
		$CatalogMessages::reportNPEOnNull("catalog"_s, nullptr);
	}
	return $new($CatalogResolverImpl, catalog);
}

$CatalogResolver* CatalogManager::catalogResolver($CatalogFeatures* features, $URIArray* uris) {
	$var($Catalog, catalog, CatalogManager::catalog(features, uris));
	return $new($CatalogResolverImpl, catalog);
}

CatalogManager::CatalogManager() {
}

$Class* CatalogManager::load$($String* name, bool initialize) {
	$loadClass(CatalogManager, name, initialize, &_CatalogManager_ClassInfo_, allocate$CatalogManager);
	return class$;
}

$Class* CatalogManager::class$ = nullptr;

		} // catalog
	} // xml
} // javax