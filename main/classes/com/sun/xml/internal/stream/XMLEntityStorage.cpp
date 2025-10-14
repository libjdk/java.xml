#include <com/sun/xml/internal/stream/XMLEntityStorage.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/URI.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/xml/internal/stream/Entity$ExternalEntity.h>
#include <com/sun/xml/internal/stream/Entity$InternalEntity.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <java/io/File.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef SEVERITY_WARNING
#undef WARN_ON_DUPLICATE_ENTITYDEF
#undef WARN_ON_DUPLICATE_ENTITYDEF_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XML_DOMAIN

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $URI = ::com::sun::org::apache::xerces::internal::util::URI;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $Entity = ::com::sun::xml::internal::stream::Entity;
using $Entity$ExternalEntity = ::com::sun::xml::internal::stream::Entity$ExternalEntity;
using $Entity$InternalEntity = ::com::sun::xml::internal::stream::Entity$InternalEntity;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $File = ::java::io::File;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _XMLEntityStorage_FieldInfo_[] = {
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityStorage, ERROR_REPORTER)},
	{"WARN_ON_DUPLICATE_ENTITYDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLEntityStorage, WARN_ON_DUPLICATE_ENTITYDEF)},
	{"fWarnDuplicateEntityDef", "Z", nullptr, $PROTECTED, $field(XMLEntityStorage, fWarnDuplicateEntityDef)},
	{"fEntities", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/xml/internal/stream/Entity;>;", $PROTECTED, $field(XMLEntityStorage, fEntities)},
	{"fCurrentEntity", "Lcom/sun/xml/internal/stream/Entity$ScannedEntity;", nullptr, $PROTECTED, $field(XMLEntityStorage, fCurrentEntity)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PRIVATE, $field(XMLEntityStorage, fEntityManager)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XMLEntityStorage, fErrorReporter)},
	{"fPropertyManager", "Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;", nullptr, $PROTECTED, $field(XMLEntityStorage, fPropertyManager)},
	{"fInExternalSubset", "Z", nullptr, $PROTECTED, $field(XMLEntityStorage, fInExternalSubset)},
	{"gUserDir", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityStorage, gUserDir)},
	{"gEscapedUserDir", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityStorage, gEscapedUserDir)},
	{"gNeedEscaping", "[Z", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityStorage, gNeedEscaping)},
	{"gAfterEscaping1", "[C", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityStorage, gAfterEscaping1)},
	{"gAfterEscaping2", "[C", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityStorage, gAfterEscaping2)},
	{"gHexChs", "[C", nullptr, $PRIVATE | $STATIC, $staticField(XMLEntityStorage, gHexChs)},
	{}
};

$MethodInfo _XMLEntityStorage_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLEntityStorage::*)($PropertyManager*)>(&XMLEntityStorage::init$))},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLEntityStorage::*)($XMLEntityManager*)>(&XMLEntityStorage::init$))},
	{"addExternalEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addInternalEntity", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addUnparsedEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"endExternalSubset", "()V", nullptr, $PUBLIC},
	{"expandSystemId", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&XMLEntityStorage::expandSystemId))},
	{"expandSystemId", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&XMLEntityStorage::expandSystemId))},
	{"fixURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($String*)>(&XMLEntityStorage::fixURI))},
	{"getEntities", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/xml/internal/stream/Entity;>;", $PUBLIC},
	{"getEntity", "(Ljava/lang/String;)Lcom/sun/xml/internal/stream/Entity;", nullptr, $PUBLIC},
	{"getUserDir", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$String*(*)()>(&XMLEntityStorage::getUserDir))},
	{"isDeclaredEntity", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isEntityDeclInExternalSubset", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isExternalEntity", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isUnparsedEntity", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startExternalSubset", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLEntityStorage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.XMLEntityStorage",
	"java.lang.Object",
	nullptr,
	_XMLEntityStorage_FieldInfo_,
	_XMLEntityStorage_MethodInfo_
};

$Object* allocate$XMLEntityStorage($Class* clazz) {
	return $of($alloc(XMLEntityStorage));
}


$String* XMLEntityStorage::ERROR_REPORTER = nullptr;

$String* XMLEntityStorage::WARN_ON_DUPLICATE_ENTITYDEF = nullptr;
$String* XMLEntityStorage::gUserDir = nullptr;
$String* XMLEntityStorage::gEscapedUserDir = nullptr;
$booleans* XMLEntityStorage::gNeedEscaping = nullptr;
$chars* XMLEntityStorage::gAfterEscaping1 = nullptr;
$chars* XMLEntityStorage::gAfterEscaping2 = nullptr;
$chars* XMLEntityStorage::gHexChs = nullptr;

void XMLEntityStorage::init$($PropertyManager* propertyManager) {
	$set(this, fEntities, $new($HashMap));
	this->fInExternalSubset = false;
	$set(this, fPropertyManager, propertyManager);
}

void XMLEntityStorage::init$($XMLEntityManager* entityManager) {
	$set(this, fEntities, $new($HashMap));
	this->fInExternalSubset = false;
	$set(this, fEntityManager, entityManager);
}

void XMLEntityStorage::reset($PropertyManager* propertyManager) {
	$init($Constants);
	$set(this, fErrorReporter, $cast($XMLErrorReporter, $nc(propertyManager)->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}))));
	$nc(this->fEntities)->clear();
	$set(this, fCurrentEntity, nullptr);
}

void XMLEntityStorage::reset() {
	$nc(this->fEntities)->clear();
	$set(this, fCurrentEntity, nullptr);
}

void XMLEntityStorage::reset($XMLComponentManager* componentManager) {
	this->fWarnDuplicateEntityDef = $nc(componentManager)->getFeature(XMLEntityStorage::WARN_ON_DUPLICATE_ENTITYDEF, false);
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty(XMLEntityStorage::ERROR_REPORTER)));
	$nc(this->fEntities)->clear();
	$set(this, fCurrentEntity, nullptr);
}

$Entity* XMLEntityStorage::getEntity($String* name) {
	return $cast($Entity, $nc(this->fEntities)->get(name));
}

$Map* XMLEntityStorage::getEntities() {
	return this->fEntities;
}

void XMLEntityStorage::addInternalEntity($String* name, $String* text) {
	if (!$nc(this->fEntities)->containsKey(name)) {
		$var($Entity, entity, $new($Entity$InternalEntity, name, text, this->fInExternalSubset));
		$nc(this->fEntities)->put(name, entity);
	} else if (this->fWarnDuplicateEntityDef) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_DUPLICATE_ENTITY_DEFINITION"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_WARNING);
	}
}

void XMLEntityStorage::addExternalEntity($String* name, $String* publicId, $String* literalSystemId, $String* baseSystemId$renamed) {
	$var($String, baseSystemId, baseSystemId$renamed);
	if (!$nc(this->fEntities)->containsKey(name)) {
		if (baseSystemId == nullptr) {
			if (this->fCurrentEntity != nullptr && $nc(this->fCurrentEntity)->entityLocation != nullptr) {
				$assign(baseSystemId, $nc($nc(this->fCurrentEntity)->entityLocation)->getExpandedSystemId());
			}
		}
		$set(this, fCurrentEntity, $nc(this->fEntityManager)->getCurrentEntity());
		$var($Entity, entity, $new($Entity$ExternalEntity, name, $$new($XMLResourceIdentifierImpl, publicId, literalSystemId, baseSystemId, $(expandSystemId(literalSystemId, baseSystemId))), nullptr, this->fInExternalSubset));
		$nc(this->fEntities)->put(name, entity);
	} else if (this->fWarnDuplicateEntityDef) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_DUPLICATE_ENTITY_DEFINITION"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_WARNING);
	}
}

bool XMLEntityStorage::isExternalEntity($String* entityName) {
	$var($Entity, entity, $cast($Entity, $nc(this->fEntities)->get(entityName)));
	if (entity == nullptr) {
		return false;
	}
	return $nc(entity)->isExternal();
}

bool XMLEntityStorage::isEntityDeclInExternalSubset($String* entityName) {
	$var($Entity, entity, $cast($Entity, $nc(this->fEntities)->get(entityName)));
	if (entity == nullptr) {
		return false;
	}
	return $nc(entity)->isEntityDeclInExternalSubset();
}

void XMLEntityStorage::addUnparsedEntity($String* name, $String* publicId, $String* systemId, $String* baseSystemId, $String* notation) {
	$set(this, fCurrentEntity, $nc(this->fEntityManager)->getCurrentEntity());
	if (!$nc(this->fEntities)->containsKey(name)) {
		$var($Entity, entity, $new($Entity$ExternalEntity, name, $$new($XMLResourceIdentifierImpl, publicId, systemId, baseSystemId, nullptr), notation, this->fInExternalSubset));
		$nc(this->fEntities)->put(name, entity);
	} else if (this->fWarnDuplicateEntityDef) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_DUPLICATE_ENTITY_DEFINITION"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_WARNING);
	}
}

bool XMLEntityStorage::isUnparsedEntity($String* entityName) {
	$var($Entity, entity, $cast($Entity, $nc(this->fEntities)->get(entityName)));
	if (entity == nullptr) {
		return false;
	}
	return $nc(entity)->isUnparsed();
}

bool XMLEntityStorage::isDeclaredEntity($String* entityName) {
	$var($Entity, entity, $cast($Entity, $nc(this->fEntities)->get(entityName)));
	return entity != nullptr;
}

$String* XMLEntityStorage::expandSystemId($String* systemId) {
	$init(XMLEntityStorage);
	return expandSystemId(systemId, nullptr);
}

$String* XMLEntityStorage::getUserDir() {
	$load(XMLEntityStorage);
	$synchronized(class$) {
		$init(XMLEntityStorage);
		$var($String, userDir, ""_s);
		try {
			$assign(userDir, $SecuritySupport::getSystemProperty("user.dir"_s));
		} catch ($SecurityException&) {
			$catch();
		}
		if (userDir->length() == 0) {
			return ""_s;
		}
		if (userDir->equals(XMLEntityStorage::gUserDir)) {
			return XMLEntityStorage::gEscapedUserDir;
		}
		$assignStatic(XMLEntityStorage::gUserDir, userDir);
		$init($File);
		char16_t separator = $File::separatorChar;
		$assign(userDir, userDir->replace(separator, u'/'));
		int32_t len = userDir->length();
		int32_t ch = 0;
		$var($StringBuilder, buffer, $new($StringBuilder, len * 3));
		if (len >= 2 && userDir->charAt(1) == u':') {
			ch = $Character::toUpperCase(userDir->charAt(0));
			if (ch >= u'A' && ch <= u'Z') {
				buffer->append(u'/');
			}
		}
		int32_t i = 0;
		for (; i < len; ++i) {
			ch = userDir->charAt(i);
			if (ch >= 128) {
				break;
			}
			if ($nc(XMLEntityStorage::gNeedEscaping)->get(ch)) {
				buffer->append(u'%');
				buffer->append($nc(XMLEntityStorage::gAfterEscaping1)->get(ch));
				buffer->append($nc(XMLEntityStorage::gAfterEscaping2)->get(ch));
			} else {
				buffer->append((char16_t)ch);
			}
		}
		if (i < len) {
			$var($bytes, bytes, nullptr);
			int8_t b = 0;
			try {
				$assign(bytes, $(userDir->substring(i))->getBytes("UTF-8"_s));
			} catch ($UnsupportedEncodingException&) {
				$var($UnsupportedEncodingException, e, $catch());
				return userDir;
			}
			len = $nc(bytes)->length;
			for (i = 0; i < len; ++i) {
				b = bytes->get(i);
				if (b < 0) {
					ch = b + 256;
					buffer->append(u'%');
					buffer->append($nc(XMLEntityStorage::gHexChs)->get(ch >> 4));
					buffer->append($nc(XMLEntityStorage::gHexChs)->get((int32_t)(ch & (uint32_t)15)));
				} else {
					if ($nc(XMLEntityStorage::gNeedEscaping)->get(b)) {
						buffer->append(u'%');
						buffer->append($nc(XMLEntityStorage::gAfterEscaping1)->get(b));
						buffer->append($nc(XMLEntityStorage::gAfterEscaping2)->get(b));
					} else {
						buffer->append((char16_t)b);
					}
				}
			}
		}
		if (!userDir->endsWith("/"_s)) {
			buffer->append(u'/');
		}
		$assignStatic(XMLEntityStorage::gEscapedUserDir, buffer->toString());
		return XMLEntityStorage::gEscapedUserDir;
	}
}

$String* XMLEntityStorage::expandSystemId($String* systemId, $String* baseSystemId) {
	$init(XMLEntityStorage);
	if (systemId == nullptr || $nc(systemId)->length() == 0) {
		return systemId;
	}
	try {
		$new($URI, systemId);
		return systemId;
	} catch ($URI$MalformedURIException&) {
		$catch();
	}
	$var($String, id, fixURI(systemId));
	$var($URI, base, nullptr);
	$var($URI, uri, nullptr);
	try {
		bool var$0 = baseSystemId == nullptr || $nc(baseSystemId)->length() == 0;
		if (var$0 || $nc(baseSystemId)->equals(systemId)) {
			$var($String, dir, getUserDir());
			$assign(base, $new($URI, "file"_s, ""_s, dir, nullptr, nullptr));
		} else {
			try {
				$assign(base, $new($URI, $(fixURI(baseSystemId))));
			} catch ($URI$MalformedURIException&) {
				$var($URI$MalformedURIException, e, $catch());
				if (baseSystemId->indexOf((int32_t)u':') != -1) {
					$assign(base, $new($URI, "file"_s, ""_s, $(fixURI(baseSystemId)), nullptr, nullptr));
				} else {
					$var($String, dir, getUserDir());
					$assign(dir, $str({dir, $(fixURI(baseSystemId))}));
					$assign(base, $new($URI, "file"_s, ""_s, dir, nullptr, nullptr));
				}
			}
		}
		$assign(uri, $new($URI, base, id));
	} catch ($Exception&) {
		$catch();
	}
	if (uri == nullptr) {
		return systemId;
	}
	return $nc(uri)->toString();
}

$String* XMLEntityStorage::fixURI($String* str$renamed) {
	$init(XMLEntityStorage);
	$var($String, str, str$renamed);
	$init($File);
	$assign(str, $nc(str)->replace($File::separatorChar, u'/'));
	if (str->length() >= 2) {
		char16_t ch1 = str->charAt(1);
		if (ch1 == u':') {
			char16_t ch0 = $Character::toUpperCase(str->charAt(0));
			if (ch0 >= u'A' && ch0 <= u'Z') {
				$assign(str, $str({"/"_s, str}));
			}
		} else if (ch1 == u'/' && str->charAt(0) == u'/') {
			$assign(str, $str({"file:"_s, str}));
		}
	}
	return str;
}

void XMLEntityStorage::startExternalSubset() {
	this->fInExternalSubset = true;
}

void XMLEntityStorage::endExternalSubset() {
	this->fInExternalSubset = false;
}

void clinit$XMLEntityStorage($Class* class$) {
	$init($Constants);
	$assignStatic(XMLEntityStorage::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLEntityStorage::WARN_ON_DUPLICATE_ENTITYDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ENTITYDEF_FEATURE}));
	$assignStatic(XMLEntityStorage::gNeedEscaping, $new($booleans, 128));
	$assignStatic(XMLEntityStorage::gAfterEscaping1, $new($chars, 128));
	$assignStatic(XMLEntityStorage::gAfterEscaping2, $new($chars, 128));
	$assignStatic(XMLEntityStorage::gHexChs, $new($chars, {
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'A',
		u'B',
		u'C',
		u'D',
		u'E',
		u'F'
	}));
	{
		for (int32_t i = 0; i <= 31; ++i) {
			$nc(XMLEntityStorage::gNeedEscaping)->set(i, true);
			$nc(XMLEntityStorage::gAfterEscaping1)->set(i, $nc(XMLEntityStorage::gHexChs)->get(i >> 4));
			$nc(XMLEntityStorage::gAfterEscaping2)->set(i, $nc(XMLEntityStorage::gHexChs)->get((int32_t)(i & (uint32_t)15)));
		}
		$nc(XMLEntityStorage::gNeedEscaping)->set(127, true);
		$nc(XMLEntityStorage::gAfterEscaping1)->set(127, u'7');
		$nc(XMLEntityStorage::gAfterEscaping2)->set(127, u'F');
		$var($chars, escChs, $new($chars, {
			u' ',
			u'<',
			u'>',
			u'#',
			u'%',
			u'\"',
			u'{',
			u'}',
			u'|',
			u'\\',
			u'^',
			u'~',
			u'[',
			u']',
			u'`'
		}));
		int32_t len = escChs->length;
		char16_t ch = 0;
		for (int32_t i = 0; i < len; ++i) {
			ch = escChs->get(i);
			$nc(XMLEntityStorage::gNeedEscaping)->set(ch, true);
			$nc(XMLEntityStorage::gAfterEscaping1)->set(ch, $nc(XMLEntityStorage::gHexChs)->get(ch >> 4));
			$nc(XMLEntityStorage::gAfterEscaping2)->set(ch, $nc(XMLEntityStorage::gHexChs)->get((int32_t)(ch & (uint32_t)15)));
		}
	}
}

XMLEntityStorage::XMLEntityStorage() {
}

$Class* XMLEntityStorage::load$($String* name, bool initialize) {
	$loadClass(XMLEntityStorage, name, initialize, &_XMLEntityStorage_ClassInfo_, clinit$XMLEntityStorage, allocate$XMLEntityStorage);
	return class$;
}

$Class* XMLEntityStorage::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com