#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$Schema4Annotations.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ATTVAL_ANYURI
#undef ATTVAL_ID
#undef ATTVAL_LANGUAGE
#undef ATT_ID
#undef ATT_SOURCE
#undef CONTENTTYPE_ELEMENT
#undef CONTENTTYPE_MIXED
#undef CONTEXT_PREPARSE
#undef DERIVATION_EXTENSION
#undef DERIVATION_NONE
#undef DERIVATION_RESTRICTION
#undef DERIVATION_SUBSTITUTION
#undef ELT_ANNOTATION
#undef ELT_APPINFO
#undef ELT_DOCUMENTATION
#undef EMPTY_LIST
#undef INSTANCE
#undef MODELGROUP_CHOICE
#undef MODELGROUP_SEQUENCE
#undef NSCONSTRAINT_ANY
#undef NSCONSTRAINT_NOT
#undef OCCURRENCE_UNBOUNDED
#undef PARTICLE_ELEMENT
#undef PARTICLE_MODELGROUP
#undef PARTICLE_WILDCARD
#undef PC_LAX
#undef SCOPE_LOCAL
#undef URI_SCHEMAFORSCHEMA
#undef USE_OPTIONAL
#undef VC_NONE
#undef XML_URI

using $XSParticleDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSAttributeUseImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSDDescription = ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSNotationDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $SimpleLocator = ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMParser = ::com::sun::org::apache::xerces::internal::parsers::DOMParser;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLSchemaDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSWildcard = ::com::sun::org::apache::xerces::internal::xs::XSWildcard;
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

$FieldInfo _SchemaGrammar$Schema4Annotations_FieldInfo_[] = {
	{"INSTANCE", "Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$Schema4Annotations;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaGrammar$Schema4Annotations, INSTANCE)},
	{}
};

$MethodInfo _SchemaGrammar$Schema4Annotations_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SchemaGrammar$Schema4Annotations::*)()>(&SchemaGrammar$Schema4Annotations::init$))},
	{"addComplexTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;)V", nullptr, $PUBLIC},
	{"addDocument", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addGlobalAttributeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;)V", nullptr, $PUBLIC},
	{"addGlobalAttributeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SchemaGrammar$Schema4Annotations::*)($XSAttributeGroupDecl*,$String*)>(&SchemaGrammar$Schema4Annotations::addGlobalAttributeDecl))},
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
	{"createAnnotationElementDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE, $method(static_cast<$XSElementDecl*(SchemaGrammar$Schema4Annotations::*)($String*)>(&SchemaGrammar$Schema4Annotations::createAnnotationElementDecl))},
	{"createAnyLaxWildcardParticle", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE, $method(static_cast<$XSParticleDecl*(SchemaGrammar$Schema4Annotations::*)()>(&SchemaGrammar$Schema4Annotations::createAnyLaxWildcardParticle))},
	{"createChoiceElementParticle", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE, $method(static_cast<$XSParticleDecl*(SchemaGrammar$Schema4Annotations::*)($XSElementDecl*)>(&SchemaGrammar$Schema4Annotations::createChoiceElementParticle))},
	{"createUnboundedAnyWildcardSequenceParticle", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE, $method(static_cast<$XSParticleDecl*(SchemaGrammar$Schema4Annotations::*)()>(&SchemaGrammar$Schema4Annotations::createUnboundedAnyWildcardSequenceParticle))},
	{"createUnboundedModelGroupParticle", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE, $method(static_cast<$XSParticleDecl*(SchemaGrammar$Schema4Annotations::*)()>(&SchemaGrammar$Schema4Annotations::createUnboundedModelGroupParticle))},
	{"getDOMParser", "()Lcom/sun/org/apache/xerces/internal/parsers/DOMParser;", nullptr, $SYNCHRONIZED},
	{"getGrammarDescription", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PUBLIC},
	{"getSAXParser", "()Lcom/sun/org/apache/xerces/internal/parsers/SAXParser;", nullptr, $SYNCHRONIZED},
	{"setImportedGrammars", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _SchemaGrammar$Schema4Annotations_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$Schema4Annotations", "com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar", "Schema4Annotations", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SchemaGrammar$Schema4Annotations_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$Schema4Annotations",
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar",
	nullptr,
	_SchemaGrammar$Schema4Annotations_FieldInfo_,
	_SchemaGrammar$Schema4Annotations_MethodInfo_,
	nullptr,
	nullptr,
	_SchemaGrammar$Schema4Annotations_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar"
};

$Object* allocate$SchemaGrammar$Schema4Annotations($Class* clazz) {
	return $of($alloc(SchemaGrammar$Schema4Annotations));
}

SchemaGrammar$Schema4Annotations* SchemaGrammar$Schema4Annotations::INSTANCE = nullptr;

void SchemaGrammar$Schema4Annotations::init$() {
	$useLocalCurrentObjectStackCache();
	$SchemaGrammar::init$();
	$init($SchemaSymbols);
	$set(this, fTargetNamespace, $SchemaSymbols::URI_SCHEMAFORSCHEMA);
	$set(this, fGrammarDescription, $new($XSDDescription));
	$nc(this->fGrammarDescription)->fContextType = $XSDDescription::CONTEXT_PREPARSE;
	$nc(this->fGrammarDescription)->setNamespace($SchemaSymbols::URI_SCHEMAFORSCHEMA);
	$set(this, fGlobalAttrDecls, $new($SymbolHash, 1));
	$set(this, fGlobalAttrGrpDecls, $new($SymbolHash, 1));
	$set(this, fGlobalElemDecls, $new($SymbolHash, 6));
	$set(this, fGlobalGroupDecls, $new($SymbolHash, 1));
	$set(this, fGlobalNotationDecls, $new($SymbolHash, 1));
	$set(this, fGlobalIDConstraintDecls, $new($SymbolHash, 1));
	$set(this, fGlobalAttrDeclsExt, $new($SymbolHash, 1));
	$set(this, fGlobalAttrGrpDeclsExt, $new($SymbolHash, 1));
	$set(this, fGlobalElemDeclsExt, $new($SymbolHash, 6));
	$set(this, fGlobalGroupDeclsExt, $new($SymbolHash, 1));
	$set(this, fGlobalNotationDeclsExt, $new($SymbolHash, 1));
	$set(this, fGlobalIDConstraintDeclsExt, $new($SymbolHash, 1));
	$set(this, fGlobalTypeDeclsExt, $new($SymbolHash, 1));
	$set(this, fAllGlobalElemDecls, $new($SymbolHash, 6));
	$init($SchemaGrammar);
	$set(this, fGlobalTypeDecls, $nc($SchemaGrammar::SG_SchemaNS)->fGlobalTypeDecls);
	$var($XSElementDecl, annotationDecl, createAnnotationElementDecl($SchemaSymbols::ELT_ANNOTATION));
	$var($XSElementDecl, documentationDecl, createAnnotationElementDecl($SchemaSymbols::ELT_DOCUMENTATION));
	$var($XSElementDecl, appinfoDecl, createAnnotationElementDecl($SchemaSymbols::ELT_APPINFO));
	$nc(this->fGlobalElemDecls)->put($nc(annotationDecl)->fName, annotationDecl);
	$nc(this->fGlobalElemDecls)->put($nc(documentationDecl)->fName, documentationDecl);
	$nc(this->fGlobalElemDecls)->put($nc(appinfoDecl)->fName, appinfoDecl);
	$nc(this->fGlobalElemDeclsExt)->put($$str({","_s, $nc(annotationDecl)->fName}), annotationDecl);
	$nc(this->fGlobalElemDeclsExt)->put($$str({","_s, $nc(documentationDecl)->fName}), documentationDecl);
	$nc(this->fGlobalElemDeclsExt)->put($$str({","_s, $nc(appinfoDecl)->fName}), appinfoDecl);
	$nc(this->fAllGlobalElemDecls)->put(annotationDecl, annotationDecl);
	$nc(this->fAllGlobalElemDecls)->put(documentationDecl, documentationDecl);
	$nc(this->fAllGlobalElemDecls)->put(appinfoDecl, appinfoDecl);
	$var($XSComplexTypeDecl, annotationType, $new($XSComplexTypeDecl));
	$var($XSComplexTypeDecl, documentationType, $new($XSComplexTypeDecl));
	$var($XSComplexTypeDecl, appinfoType, $new($XSComplexTypeDecl));
	$set($nc(annotationDecl), fType, annotationType);
	$set($nc(documentationDecl), fType, documentationType);
	$set($nc(appinfoDecl), fType, appinfoType);
	$var($XSAttributeGroupDecl, annotationAttrs, $new($XSAttributeGroupDecl));
	$var($XSAttributeGroupDecl, documentationAttrs, $new($XSAttributeGroupDecl));
	$var($XSAttributeGroupDecl, appinfoAttrs, $new($XSAttributeGroupDecl));
	{
		$var($XSAttributeUseImpl, annotationIDAttr, $new($XSAttributeUseImpl));
		$set(annotationIDAttr, fAttrDecl, $new($XSAttributeDecl));
		$nc(annotationIDAttr->fAttrDecl)->setValues($SchemaSymbols::ATT_ID, nullptr, $cast($XSSimpleType, $($nc(this->fGlobalTypeDecls)->get($SchemaSymbols::ATTVAL_ID))), $XSConstants::VC_NONE, $XSConstants::SCOPE_LOCAL, nullptr, annotationType, nullptr);
		annotationIDAttr->fUse = $SchemaSymbols::USE_OPTIONAL;
		annotationIDAttr->fConstraintType = $XSConstants::VC_NONE;
		$var($XSAttributeUseImpl, documentationSourceAttr, $new($XSAttributeUseImpl));
		$set(documentationSourceAttr, fAttrDecl, $new($XSAttributeDecl));
		$nc(documentationSourceAttr->fAttrDecl)->setValues($SchemaSymbols::ATT_SOURCE, nullptr, $cast($XSSimpleType, $($nc(this->fGlobalTypeDecls)->get($SchemaSymbols::ATTVAL_ANYURI))), $XSConstants::VC_NONE, $XSConstants::SCOPE_LOCAL, nullptr, documentationType, nullptr);
		documentationSourceAttr->fUse = $SchemaSymbols::USE_OPTIONAL;
		documentationSourceAttr->fConstraintType = $XSConstants::VC_NONE;
		$var($XSAttributeUseImpl, documentationLangAttr, $new($XSAttributeUseImpl));
		$set(documentationLangAttr, fAttrDecl, $new($XSAttributeDecl));
		$var($String, var$0, "lang"_s->intern());
		$init($NamespaceContext);
		$var($String, var$1, $NamespaceContext::XML_URI);
		$nc(documentationLangAttr->fAttrDecl)->setValues(var$0, var$1, $cast($XSSimpleType, $($nc(this->fGlobalTypeDecls)->get($SchemaSymbols::ATTVAL_LANGUAGE))), $XSConstants::VC_NONE, $XSConstants::SCOPE_LOCAL, nullptr, documentationType, nullptr);
		documentationLangAttr->fUse = $SchemaSymbols::USE_OPTIONAL;
		documentationLangAttr->fConstraintType = $XSConstants::VC_NONE;
		$var($XSAttributeUseImpl, appinfoSourceAttr, $new($XSAttributeUseImpl));
		$set(appinfoSourceAttr, fAttrDecl, $new($XSAttributeDecl));
		$nc(appinfoSourceAttr->fAttrDecl)->setValues($SchemaSymbols::ATT_SOURCE, nullptr, $cast($XSSimpleType, $($nc(this->fGlobalTypeDecls)->get($SchemaSymbols::ATTVAL_ANYURI))), $XSConstants::VC_NONE, $XSConstants::SCOPE_LOCAL, nullptr, appinfoType, nullptr);
		appinfoSourceAttr->fUse = $SchemaSymbols::USE_OPTIONAL;
		appinfoSourceAttr->fConstraintType = $XSConstants::VC_NONE;
		$var($XSWildcardDecl, otherAttrs, $new($XSWildcardDecl));
		$set(otherAttrs, fNamespaceList, $new($StringArray, {
			this->fTargetNamespace,
			($String*)nullptr
		}));
		otherAttrs->fType = $XSWildcard::NSCONSTRAINT_NOT;
		otherAttrs->fProcessContents = $XSWildcard::PC_LAX;
		annotationAttrs->addAttributeUse(annotationIDAttr);
		$set(annotationAttrs, fAttributeWC, otherAttrs);
		documentationAttrs->addAttributeUse(documentationSourceAttr);
		documentationAttrs->addAttributeUse(documentationLangAttr);
		$set(documentationAttrs, fAttributeWC, otherAttrs);
		appinfoAttrs->addAttributeUse(appinfoSourceAttr);
		$set(appinfoAttrs, fAttributeWC, otherAttrs);
	}
	$var($XSParticleDecl, annotationParticle, createUnboundedModelGroupParticle());
	{
		$var($XSModelGroupImpl, annotationChoice, $new($XSModelGroupImpl));
		annotationChoice->fCompositor = $XSModelGroupImpl::MODELGROUP_CHOICE;
		annotationChoice->fParticleCount = 2;
		$set(annotationChoice, fParticles, $new($XSParticleDeclArray, 2));
		$nc(annotationChoice->fParticles)->set(0, $(createChoiceElementParticle(appinfoDecl)));
		$nc(annotationChoice->fParticles)->set(1, $(createChoiceElementParticle(documentationDecl)));
		$set($nc(annotationParticle), fValue, annotationChoice);
	}
	$var($XSParticleDecl, anyWCSequenceParticle, createUnboundedAnyWildcardSequenceParticle());
	$init($XSObjectListImpl);
	annotationType->setValues($$str({"#AnonType_"_s, $SchemaSymbols::ELT_ANNOTATION}), this->fTargetNamespace, $SchemaGrammar::fAnyType, $XSConstants::DERIVATION_RESTRICTION, $XSConstants::DERIVATION_NONE, (int16_t)($XSConstants::DERIVATION_EXTENSION | $XSConstants::DERIVATION_RESTRICTION), $XSComplexTypeDecl::CONTENTTYPE_ELEMENT, false, annotationAttrs, nullptr, annotationParticle, $XSObjectListImpl::EMPTY_LIST);
	annotationType->setName($$str({"#AnonType_"_s, $SchemaSymbols::ELT_ANNOTATION}));
	annotationType->setIsAnonymous();
	documentationType->setValues($$str({"#AnonType_"_s, $SchemaSymbols::ELT_DOCUMENTATION}), this->fTargetNamespace, $SchemaGrammar::fAnyType, $XSConstants::DERIVATION_RESTRICTION, $XSConstants::DERIVATION_NONE, (int16_t)($XSConstants::DERIVATION_EXTENSION | $XSConstants::DERIVATION_RESTRICTION), $XSComplexTypeDecl::CONTENTTYPE_MIXED, false, documentationAttrs, nullptr, anyWCSequenceParticle, $XSObjectListImpl::EMPTY_LIST);
	documentationType->setName($$str({"#AnonType_"_s, $SchemaSymbols::ELT_DOCUMENTATION}));
	documentationType->setIsAnonymous();
	appinfoType->setValues($$str({"#AnonType_"_s, $SchemaSymbols::ELT_APPINFO}), this->fTargetNamespace, $SchemaGrammar::fAnyType, $XSConstants::DERIVATION_RESTRICTION, $XSConstants::DERIVATION_NONE, (int16_t)($XSConstants::DERIVATION_EXTENSION | $XSConstants::DERIVATION_RESTRICTION), $XSComplexTypeDecl::CONTENTTYPE_MIXED, false, appinfoAttrs, nullptr, anyWCSequenceParticle, $XSObjectListImpl::EMPTY_LIST);
	appinfoType->setName($$str({"#AnonType_"_s, $SchemaSymbols::ELT_APPINFO}));
	appinfoType->setIsAnonymous();
}

$XMLGrammarDescription* SchemaGrammar$Schema4Annotations::getGrammarDescription() {
	return $nc(this->fGrammarDescription)->makeClone();
}

void SchemaGrammar$Schema4Annotations::setImportedGrammars($List* importedGrammars) {
}

void SchemaGrammar$Schema4Annotations::addGlobalAttributeDecl($XSAttributeDecl* decl) {
}

void SchemaGrammar$Schema4Annotations::addGlobalAttributeDecl($XSAttributeGroupDecl* decl, $String* location) {
}

void SchemaGrammar$Schema4Annotations::addGlobalAttributeGroupDecl($XSAttributeGroupDecl* decl) {
}

void SchemaGrammar$Schema4Annotations::addGlobalAttributeGroupDecl($XSAttributeGroupDecl* decl, $String* location) {
}

void SchemaGrammar$Schema4Annotations::addGlobalElementDecl($XSElementDecl* decl) {
}

void SchemaGrammar$Schema4Annotations::addGlobalElementDecl($XSElementDecl* decl, $String* location) {
}

void SchemaGrammar$Schema4Annotations::addGlobalElementDeclAll($XSElementDecl* decl) {
}

void SchemaGrammar$Schema4Annotations::addGlobalGroupDecl($XSGroupDecl* decl) {
}

void SchemaGrammar$Schema4Annotations::addGlobalGroupDecl($XSGroupDecl* decl, $String* location) {
}

void SchemaGrammar$Schema4Annotations::addGlobalNotationDecl($XSNotationDecl* decl) {
}

void SchemaGrammar$Schema4Annotations::addGlobalNotationDecl($XSNotationDecl* decl, $String* location) {
}

void SchemaGrammar$Schema4Annotations::addGlobalTypeDecl($XSTypeDefinition* decl) {
}

void SchemaGrammar$Schema4Annotations::addGlobalTypeDecl($XSTypeDefinition* decl, $String* location) {
}

void SchemaGrammar$Schema4Annotations::addGlobalComplexTypeDecl($XSComplexTypeDecl* decl) {
}

void SchemaGrammar$Schema4Annotations::addGlobalComplexTypeDecl($XSComplexTypeDecl* decl, $String* location) {
}

void SchemaGrammar$Schema4Annotations::addGlobalSimpleTypeDecl($XSSimpleType* decl) {
}

void SchemaGrammar$Schema4Annotations::addGlobalSimpleTypeDecl($XSSimpleType* decl, $String* location) {
}

void SchemaGrammar$Schema4Annotations::addComplexTypeDecl($XSComplexTypeDecl* decl, $SimpleLocator* locator) {
}

void SchemaGrammar$Schema4Annotations::addRedefinedGroupDecl($XSGroupDecl* derived, $XSGroupDecl* base, $SimpleLocator* locator) {
}

void SchemaGrammar$Schema4Annotations::addDocument(Object$* document, $String* location) {
	$synchronized(this) {
	}
}

$DOMParser* SchemaGrammar$Schema4Annotations::getDOMParser() {
	$synchronized(this) {
		return nullptr;
	}
}

$SAXParser* SchemaGrammar$Schema4Annotations::getSAXParser() {
	$synchronized(this) {
		return nullptr;
	}
}

$XSElementDecl* SchemaGrammar$Schema4Annotations::createAnnotationElementDecl($String* localName) {
	$var($XSElementDecl, eDecl, $new($XSElementDecl));
	$set(eDecl, fName, localName);
	$set(eDecl, fTargetNamespace, this->fTargetNamespace);
	eDecl->setIsGlobal();
	eDecl->fBlock = ((int16_t)(($XSConstants::DERIVATION_EXTENSION | $XSConstants::DERIVATION_RESTRICTION) | $XSConstants::DERIVATION_SUBSTITUTION));
	eDecl->setConstraintType($XSConstants::VC_NONE);
	return eDecl;
}

$XSParticleDecl* SchemaGrammar$Schema4Annotations::createUnboundedModelGroupParticle() {
	$var($XSParticleDecl, particle, $new($XSParticleDecl));
	particle->fMinOccurs = 0;
	particle->fMaxOccurs = $SchemaSymbols::OCCURRENCE_UNBOUNDED;
	particle->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
	return particle;
}

$XSParticleDecl* SchemaGrammar$Schema4Annotations::createChoiceElementParticle($XSElementDecl* ref) {
	$var($XSParticleDecl, particle, $new($XSParticleDecl));
	particle->fMinOccurs = 1;
	particle->fMaxOccurs = 1;
	particle->fType = $XSParticleDecl::PARTICLE_ELEMENT;
	$set(particle, fValue, ref);
	return particle;
}

$XSParticleDecl* SchemaGrammar$Schema4Annotations::createUnboundedAnyWildcardSequenceParticle() {
	$useLocalCurrentObjectStackCache();
	$var($XSParticleDecl, particle, createUnboundedModelGroupParticle());
	$var($XSModelGroupImpl, sequence, $new($XSModelGroupImpl));
	sequence->fCompositor = $XSModelGroupImpl::MODELGROUP_SEQUENCE;
	sequence->fParticleCount = 1;
	$set(sequence, fParticles, $new($XSParticleDeclArray, 1));
	$nc(sequence->fParticles)->set(0, $(createAnyLaxWildcardParticle()));
	$set($nc(particle), fValue, sequence);
	return particle;
}

$XSParticleDecl* SchemaGrammar$Schema4Annotations::createAnyLaxWildcardParticle() {
	$useLocalCurrentObjectStackCache();
	$var($XSParticleDecl, particle, $new($XSParticleDecl));
	particle->fMinOccurs = 1;
	particle->fMaxOccurs = 1;
	particle->fType = $XSParticleDecl::PARTICLE_WILDCARD;
	$var($XSWildcardDecl, anyWC, $new($XSWildcardDecl));
	$set(anyWC, fNamespaceList, nullptr);
	anyWC->fType = $XSWildcard::NSCONSTRAINT_ANY;
	anyWC->fProcessContents = $XSWildcard::PC_LAX;
	$set(particle, fValue, anyWC);
	return particle;
}

void clinit$SchemaGrammar$Schema4Annotations($Class* class$) {
	$assignStatic(SchemaGrammar$Schema4Annotations::INSTANCE, $new(SchemaGrammar$Schema4Annotations));
}

SchemaGrammar$Schema4Annotations::SchemaGrammar$Schema4Annotations() {
}

$Class* SchemaGrammar$Schema4Annotations::load$($String* name, bool initialize) {
	$loadClass(SchemaGrammar$Schema4Annotations, name, initialize, &_SchemaGrammar$Schema4Annotations_ClassInfo_, clinit$SchemaGrammar$Schema4Annotations, allocate$SchemaGrammar$Schema4Annotations);
	return class$;
}

$Class* SchemaGrammar$Schema4Annotations::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com