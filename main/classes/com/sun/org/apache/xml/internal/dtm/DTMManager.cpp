#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <javax/xml/transform/Source.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef IDENT_DTM_DEFAULT
#undef IDENT_DTM_NODE_BITS
#undef IDENT_MAX_DTMS
#undef IDENT_NODE_DEFAULT

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMManagerDefault = ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Source = ::javax::xml::transform::Source;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$FieldInfo _DTMManager_FieldInfo_[] = {
	{"m_xsf", "Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;", nullptr, $PROTECTED, $field(DTMManager, m_xsf)},
	{"_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(DTMManager, _overrideDefaultParser)},
	{"m_incremental", "Z", nullptr, $PUBLIC, $field(DTMManager, m_incremental)},
	{"m_source_location", "Z", nullptr, $PUBLIC, $field(DTMManager, m_source_location)},
	{"IDENT_DTM_NODE_BITS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMManager, IDENT_DTM_NODE_BITS)},
	{"IDENT_NODE_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMManager, IDENT_NODE_DEFAULT)},
	{"IDENT_DTM_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMManager, IDENT_DTM_DEFAULT)},
	{"IDENT_MAX_DTMS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMManager, IDENT_MAX_DTMS)},
	{}
};

$MethodInfo _DTMManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DTMManager::*)()>(&DTMManager::init$))},
	{"createDTMIterator", "(Ljava/lang/Object;I)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"createDTMIterator", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"createDTMIterator", "(ILcom/sun/org/apache/xml/internal/dtm/DTMFilter;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"createDTMIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"createDocumentFragment", "()Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTM", "(Ljavax/xml/transform/Source;ZLcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;ZZ)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTM", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTMHandleFromNode", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTMIdentity", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTMIdentityMask", "()I", nullptr, $PUBLIC},
	{"getIncremental", "()Z", nullptr, $PUBLIC},
	{"getNodeIdentityMask", "()I", nullptr, $PUBLIC},
	{"getSource_location", "()Z", nullptr, $PUBLIC},
	{"getXMLStringFactory", "()Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;", nullptr, $PUBLIC},
	{"newInstance", "(Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;)Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DTMManager*(*)($XMLStringFactory*)>(&DTMManager::newInstance)), "com.sun.org.apache.xml.internal.dtm.DTMException"},
	{"overrideDefaultParser", "()Z", nullptr, $PUBLIC},
	{"release", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;Z)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setIncremental", "(Z)V", nullptr, $PUBLIC},
	{"setOverrideDefaultParser", "(Z)V", nullptr, $PUBLIC},
	{"setSource_location", "(Z)V", nullptr, $PUBLIC},
	{"setXMLStringFactory", "(Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DTMManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTMManager",
	"java.lang.Object",
	nullptr,
	_DTMManager_FieldInfo_,
	_DTMManager_MethodInfo_
};

$Object* allocate$DTMManager($Class* clazz) {
	return $of($alloc(DTMManager));
}

void DTMManager::init$() {
	$set(this, m_xsf, nullptr);
	this->m_incremental = false;
	this->m_source_location = false;
}

$XMLStringFactory* DTMManager::getXMLStringFactory() {
	return this->m_xsf;
}

void DTMManager::setXMLStringFactory($XMLStringFactory* xsf) {
	$set(this, m_xsf, xsf);
}

DTMManager* DTMManager::newInstance($XMLStringFactory* xsf) {
	$var(DTMManager, factoryImpl, $new($DTMManagerDefault));
	factoryImpl->setXMLStringFactory(xsf);
	return factoryImpl;
}

bool DTMManager::getIncremental() {
	return this->m_incremental;
}

void DTMManager::setIncremental(bool incremental) {
	this->m_incremental = incremental;
}

bool DTMManager::getSource_location() {
	return this->m_source_location;
}

void DTMManager::setSource_location(bool sourceLocation) {
	this->m_source_location = sourceLocation;
}

bool DTMManager::overrideDefaultParser() {
	return this->_overrideDefaultParser;
}

void DTMManager::setOverrideDefaultParser(bool flag) {
	this->_overrideDefaultParser = flag;
}

int32_t DTMManager::getDTMIdentityMask() {
	return DTMManager::IDENT_DTM_DEFAULT;
}

int32_t DTMManager::getNodeIdentityMask() {
	return DTMManager::IDENT_NODE_DEFAULT;
}

DTMManager::DTMManager() {
}

$Class* DTMManager::load$($String* name, bool initialize) {
	$loadClass(DTMManager, name, initialize, &_DTMManager_ClassInfo_, allocate$DTMManager);
	return class$;
}

$Class* DTMManager::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com