#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinAttrDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ATTVAL_ANYURI
#undef ATTVAL_BOOLEAN
#undef ATTVAL_QNAME
#undef CONTEXT_PREPARSE
#undef EXTENDED_SCHEMA_FACTORY_CLASS
#undef SCHEMA_VERSION_1_0
#undef SCOPE_GLOBAL
#undef URI_SCHEMAFORSCHEMA
#undef URI_XSI
#undef XSI_NIL
#undef XSI_NONAMESPACESCHEMALOCATION
#undef XSI_SCHEMALOCATION
#undef XSI_TYPE

using $XSTypeDefinitionArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $SchemaDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaGrammar$BuiltinAttrDecl = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinAttrDecl;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSDDescription = ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl;
using $XSNotationDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl;
using $SimpleLocator = ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator;
using $DOMParser = ::com::sun::org::apache::xerces::internal::parsers::DOMParser;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLSchemaDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _SchemaGrammar$BuiltinSchemaGrammar_FieldInfo_[] = {
	{"EXTENDED_SCHEMA_FACTORY_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaGrammar$BuiltinSchemaGrammar, EXTENDED_SCHEMA_FACTORY_CLASS)},
	{}
};

$MethodInfo _SchemaGrammar$BuiltinSchemaGrammar_MethodInfo_[] = {
	{"<init>", "(IS)V", nullptr, $PUBLIC, $method(static_cast<void(SchemaGrammar$BuiltinSchemaGrammar::*)(int32_t,int16_t)>(&SchemaGrammar$BuiltinSchemaGrammar::init$))},
	{"addComplexTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;)V", nullptr, $PUBLIC},
	{"addDocument", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addGlobalAttributeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;)V", nullptr, $PUBLIC},
	{"addGlobalAttributeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addGlobalAttributeGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;)V", nullptr, $PUBLIC},
	{"addGlobalAttributeGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addGlobalComplexTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;)V", nullptr, $PUBLIC},
	{"addGlobalComplexTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addGlobalElementDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", nullptr, $PUBLIC},
	{"addGlobalElementDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addGlobalElementDeclAll", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", nullptr, $PUBLIC},
	{"addGlobalGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;)V", nullptr, $PUBLIC},
	{"addGlobalGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addGlobalNotationDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;)V", nullptr, $PUBLIC},
	{"addGlobalNotationDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addGlobalSimpleTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;)V", nullptr, $PUBLIC},
	{"addGlobalSimpleTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addGlobalTypeDecl", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)V", nullptr, $PUBLIC},
	{"addGlobalTypeDecl", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addRedefinedGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;)V", nullptr, $PUBLIC},
	{"getDOMParser", "()Lcom/sun/org/apache/xerces/internal/parsers/DOMParser;", nullptr, $SYNCHRONIZED},
	{"getGrammarDescription", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PUBLIC},
	{"getSAXParser", "()Lcom/sun/org/apache/xerces/internal/parsers/SAXParser;", nullptr, $SYNCHRONIZED},
	{"setImportedGrammars", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _SchemaGrammar$BuiltinSchemaGrammar_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinSchemaGrammar", "com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar", "BuiltinSchemaGrammar", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SchemaGrammar$BuiltinSchemaGrammar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinSchemaGrammar",
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar",
	nullptr,
	_SchemaGrammar$BuiltinSchemaGrammar_FieldInfo_,
	_SchemaGrammar$BuiltinSchemaGrammar_MethodInfo_,
	nullptr,
	nullptr,
	_SchemaGrammar$BuiltinSchemaGrammar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar"
};

$Object* allocate$SchemaGrammar$BuiltinSchemaGrammar($Class* clazz) {
	return $of($alloc(SchemaGrammar$BuiltinSchemaGrammar));
}

$String* SchemaGrammar$BuiltinSchemaGrammar::EXTENDED_SCHEMA_FACTORY_CLASS = nullptr;

void SchemaGrammar$BuiltinSchemaGrammar::init$(int32_t grammar, int16_t schemaVersion) {
	$useLocalCurrentObjectStackCache();
	$SchemaGrammar::init$();
	$var($SchemaDVFactory, schemaFactory, nullptr);
	if (schemaVersion == $Constants::SCHEMA_VERSION_1_0) {
		$assign(schemaFactory, $SchemaDVFactory::getInstance());
	} else {
		$assign(schemaFactory, $SchemaDVFactory::getInstance(SchemaGrammar$BuiltinSchemaGrammar::EXTENDED_SCHEMA_FACTORY_CLASS));
	}
	if (grammar == 1) {
		$init($SchemaSymbols);
		$set(this, fTargetNamespace, $SchemaSymbols::URI_SCHEMAFORSCHEMA);
		$set(this, fGrammarDescription, $new($XSDDescription));
		$nc(this->fGrammarDescription)->fContextType = $XSDDescription::CONTEXT_PREPARSE;
		$nc(this->fGrammarDescription)->setNamespace($SchemaSymbols::URI_SCHEMAFORSCHEMA);
		$set(this, fGlobalAttrDecls, $new($SymbolHash, 1));
		$set(this, fGlobalAttrGrpDecls, $new($SymbolHash, 1));
		$set(this, fGlobalElemDecls, $new($SymbolHash, 1));
		$set(this, fGlobalGroupDecls, $new($SymbolHash, 1));
		$set(this, fGlobalNotationDecls, $new($SymbolHash, 1));
		$set(this, fGlobalIDConstraintDecls, $new($SymbolHash, 1));
		$set(this, fGlobalAttrDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalAttrGrpDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalElemDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalGroupDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalNotationDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalIDConstraintDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalTypeDeclsExt, $new($SymbolHash, 1));
		$set(this, fAllGlobalElemDecls, $new($SymbolHash, 1));
		$set(this, fGlobalTypeDecls, $nc(schemaFactory)->getBuiltInTypes());
		int32_t length = $nc(this->fGlobalTypeDecls)->getLength();
		$var($XSTypeDefinitionArray, typeDefinitions, $new($XSTypeDefinitionArray, length));
		$nc(this->fGlobalTypeDecls)->getValues(typeDefinitions, 0);
		for (int32_t i = 0; i < length; ++i) {
			$var($XSTypeDefinition, xtd, typeDefinitions->get(i));
			if ($instanceOf($XSSimpleTypeDecl, xtd)) {
				$nc(($cast($XSSimpleTypeDecl, xtd)))->setNamespaceItem(this);
			}
		}
		$init($SchemaGrammar);
		$nc(this->fGlobalTypeDecls)->put($($nc($SchemaGrammar::fAnyType)->getName()), $SchemaGrammar::fAnyType);
	} else if (grammar == 2) {
		$init($SchemaSymbols);
		$set(this, fTargetNamespace, $SchemaSymbols::URI_XSI);
		$set(this, fGrammarDescription, $new($XSDDescription));
		$nc(this->fGrammarDescription)->fContextType = $XSDDescription::CONTEXT_PREPARSE;
		$nc(this->fGrammarDescription)->setNamespace($SchemaSymbols::URI_XSI);
		$set(this, fGlobalAttrGrpDecls, $new($SymbolHash, 1));
		$set(this, fGlobalElemDecls, $new($SymbolHash, 1));
		$set(this, fGlobalGroupDecls, $new($SymbolHash, 1));
		$set(this, fGlobalNotationDecls, $new($SymbolHash, 1));
		$set(this, fGlobalIDConstraintDecls, $new($SymbolHash, 1));
		$set(this, fGlobalTypeDecls, $new($SymbolHash, 1));
		$set(this, fGlobalAttrDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalAttrGrpDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalElemDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalGroupDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalNotationDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalIDConstraintDeclsExt, $new($SymbolHash, 1));
		$set(this, fGlobalTypeDeclsExt, $new($SymbolHash, 1));
		$set(this, fAllGlobalElemDecls, $new($SymbolHash, 1));
		$set(this, fGlobalAttrDecls, $new($SymbolHash, 8));
		$var($String, name, nullptr);
		$var($String, tns, nullptr);
		$var($XSSimpleType, type, nullptr);
		int16_t scope = $XSConstants::SCOPE_GLOBAL;
		$assign(name, $SchemaSymbols::XSI_TYPE);
		$assign(tns, $SchemaSymbols::URI_XSI);
		$assign(type, $nc(schemaFactory)->getBuiltInType($SchemaSymbols::ATTVAL_QNAME));
		$nc(this->fGlobalAttrDecls)->put(name, $$new($SchemaGrammar$BuiltinAttrDecl, name, tns, type, scope));
		$assign(name, $SchemaSymbols::XSI_NIL);
		$assign(tns, $SchemaSymbols::URI_XSI);
		$assign(type, schemaFactory->getBuiltInType($SchemaSymbols::ATTVAL_BOOLEAN));
		$nc(this->fGlobalAttrDecls)->put(name, $$new($SchemaGrammar$BuiltinAttrDecl, name, tns, type, scope));
		$var($XSSimpleType, anyURI, schemaFactory->getBuiltInType($SchemaSymbols::ATTVAL_ANYURI));
		$assign(name, $SchemaSymbols::XSI_SCHEMALOCATION);
		$assign(tns, $SchemaSymbols::URI_XSI);
		$assign(type, schemaFactory->createTypeList("#AnonType_schemaLocation"_s, $SchemaSymbols::URI_XSI, (int16_t)0, anyURI, nullptr));
		if ($instanceOf($XSSimpleTypeDecl, type)) {
			$nc(($cast($XSSimpleTypeDecl, type)))->setAnonymous(true);
		}
		$nc(this->fGlobalAttrDecls)->put(name, $$new($SchemaGrammar$BuiltinAttrDecl, name, tns, type, scope));
		$assign(name, $SchemaSymbols::XSI_NONAMESPACESCHEMALOCATION);
		$assign(tns, $SchemaSymbols::URI_XSI);
		$assign(type, anyURI);
		$nc(this->fGlobalAttrDecls)->put(name, $$new($SchemaGrammar$BuiltinAttrDecl, name, tns, type, scope));
	}
}

$XMLGrammarDescription* SchemaGrammar$BuiltinSchemaGrammar::getGrammarDescription() {
	return $nc(this->fGrammarDescription)->makeClone();
}

void SchemaGrammar$BuiltinSchemaGrammar::setImportedGrammars($List* importedGrammars) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalAttributeDecl($XSAttributeDecl* decl) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalAttributeDecl($XSAttributeDecl* decl, $String* location) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalAttributeGroupDecl($XSAttributeGroupDecl* decl) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalAttributeGroupDecl($XSAttributeGroupDecl* decl, $String* location) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalElementDecl($XSElementDecl* decl) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalElementDecl($XSElementDecl* decl, $String* location) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalElementDeclAll($XSElementDecl* decl) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalGroupDecl($XSGroupDecl* decl) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalGroupDecl($XSGroupDecl* decl, $String* location) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalNotationDecl($XSNotationDecl* decl) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalNotationDecl($XSNotationDecl* decl, $String* location) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalTypeDecl($XSTypeDefinition* decl) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalTypeDecl($XSTypeDefinition* decl, $String* location) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalComplexTypeDecl($XSComplexTypeDecl* decl) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalComplexTypeDecl($XSComplexTypeDecl* decl, $String* location) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalSimpleTypeDecl($XSSimpleType* decl) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addGlobalSimpleTypeDecl($XSSimpleType* decl, $String* location) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addComplexTypeDecl($XSComplexTypeDecl* decl, $SimpleLocator* locator) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addRedefinedGroupDecl($XSGroupDecl* derived, $XSGroupDecl* base, $SimpleLocator* locator) {
}

void SchemaGrammar$BuiltinSchemaGrammar::addDocument(Object$* document, $String* location) {
	$synchronized(this) {
	}
}

$DOMParser* SchemaGrammar$BuiltinSchemaGrammar::getDOMParser() {
	$synchronized(this) {
		return nullptr;
	}
}

$SAXParser* SchemaGrammar$BuiltinSchemaGrammar::getSAXParser() {
	$synchronized(this) {
		return nullptr;
	}
}

SchemaGrammar$BuiltinSchemaGrammar::SchemaGrammar$BuiltinSchemaGrammar() {
}

void clinit$SchemaGrammar$BuiltinSchemaGrammar($Class* class$) {
	$assignStatic(SchemaGrammar$BuiltinSchemaGrammar::EXTENDED_SCHEMA_FACTORY_CLASS, "com.sun.org.apache.xerces.internal.impl.dv.xs.ExtendedSchemaDVFactoryImpl"_s);
}

$Class* SchemaGrammar$BuiltinSchemaGrammar::load$($String* name, bool initialize) {
	$loadClass(SchemaGrammar$BuiltinSchemaGrammar, name, initialize, &_SchemaGrammar$BuiltinSchemaGrammar_ClassInfo_, clinit$SchemaGrammar$BuiltinSchemaGrammar, allocate$SchemaGrammar$BuiltinSchemaGrammar);
	return class$;
}

$Class* SchemaGrammar$BuiltinSchemaGrammar::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com