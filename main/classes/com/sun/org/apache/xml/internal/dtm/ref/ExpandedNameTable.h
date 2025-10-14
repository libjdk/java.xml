#ifndef _com_sun_org_apache_xml_internal_dtm_ref_ExpandedNameTable_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_ExpandedNameTable_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable
//$ extends java.lang.Object

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/lang/Array.h>

#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("ATTRIBUTE_NODE")
#undef ATTRIBUTE_NODE
#pragma push_macro("CDATA_SECTION")
#undef CDATA_SECTION
#pragma push_macro("CDATA_SECTION_NODE")
#undef CDATA_SECTION_NODE
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("COMMENT_NODE")
#undef COMMENT_NODE
#pragma push_macro("DOCUMENT")
#undef DOCUMENT
#pragma push_macro("DOCUMENT_FRAGMENT")
#undef DOCUMENT_FRAGMENT
#pragma push_macro("DOCUMENT_FRAGMENT_NODE")
#undef DOCUMENT_FRAGMENT_NODE
#pragma push_macro("DOCUMENT_NODE")
#undef DOCUMENT_NODE
#pragma push_macro("DOCUMENT_TYPE")
#undef DOCUMENT_TYPE
#pragma push_macro("DOCUMENT_TYPE_NODE")
#undef DOCUMENT_TYPE_NODE
#pragma push_macro("ELEMENT")
#undef ELEMENT
#pragma push_macro("ELEMENT_NODE")
#undef ELEMENT_NODE
#pragma push_macro("ENTITY")
#undef ENTITY
#pragma push_macro("ENTITY_NODE")
#undef ENTITY_NODE
#pragma push_macro("ENTITY_REFERENCE")
#undef ENTITY_REFERENCE
#pragma push_macro("ENTITY_REFERENCE_NODE")
#undef ENTITY_REFERENCE_NODE
#pragma push_macro("NAMESPACE")
#undef NAMESPACE
#pragma push_macro("NAMESPACE_NODE")
#undef NAMESPACE_NODE
#pragma push_macro("NOTATION")
#undef NOTATION
#pragma push_macro("NOTATION_NODE")
#undef NOTATION_NODE
#pragma push_macro("PROCESSING_INSTRUCTION")
#undef PROCESSING_INSTRUCTION
#pragma push_macro("PROCESSING_INSTRUCTION_NODE")
#undef PROCESSING_INSTRUCTION_NODE
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("TEXT_NODE")
#undef TEXT_NODE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class ExpandedNameTable$HashEntry;
								class ExtendedType;
							}
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class ExpandedNameTable : public ::java::lang::Object {
	$class(ExpandedNameTable, 0, ::java::lang::Object)
public:
	ExpandedNameTable();
	void init$();
	virtual int32_t getExpandedTypeID($String* namespace$, $String* localName, int32_t type);
	virtual int32_t getExpandedTypeID($String* namespace$, $String* localName, int32_t type, bool searchOnly);
	virtual int32_t getExpandedTypeID(int32_t type);
	virtual $Array<::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType>* getExtendedTypes();
	virtual $String* getLocalName(int32_t ExpandedNameID);
	int32_t getLocalNameID(int32_t ExpandedNameID);
	virtual $String* getNamespace(int32_t ExpandedNameID);
	int32_t getNamespaceID(int32_t ExpandedNameID);
	virtual int32_t getSize();
	int16_t getType(int32_t ExpandedNameID);
	void initExtendedTypes();
	void rehash();
	$Array<::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType>* m_extendedTypes = nullptr;
	static int32_t m_initialSize;
	int32_t m_nextType = 0;
	static const int32_t ELEMENT = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::ELEMENT_NODE);
	static const int32_t ATTRIBUTE = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::ATTRIBUTE_NODE);
	static const int32_t TEXT = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::TEXT_NODE);
	static const int32_t CDATA_SECTION = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::CDATA_SECTION_NODE);
	static const int32_t ENTITY_REFERENCE = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::ENTITY_REFERENCE_NODE);
	static const int32_t ENTITY = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::ENTITY_NODE);
	static const int32_t PROCESSING_INSTRUCTION = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::PROCESSING_INSTRUCTION_NODE);
	static const int32_t COMMENT = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::COMMENT_NODE);
	static const int32_t DOCUMENT = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::DOCUMENT_NODE);
	static const int32_t DOCUMENT_TYPE = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::DOCUMENT_TYPE_NODE);
	static const int32_t DOCUMENT_FRAGMENT = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::DOCUMENT_FRAGMENT_NODE);
	static const int32_t NOTATION = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::NOTATION_NODE);
	static const int32_t NAMESPACE = ((int32_t)::com::sun::org::apache::xml::internal::dtm::DTM::NAMESPACE_NODE);
	::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType* hashET = nullptr;
	static $Array<::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType>* m_defaultExtendedTypes;
	static float m_loadFactor;
	static int32_t m_initialCapacity;
	int32_t m_capacity = 0;
	int32_t m_threshold = 0;
	$Array<::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable$HashEntry>* m_table = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("ATTRIBUTE_NODE")
#pragma pop_macro("CDATA_SECTION")
#pragma pop_macro("CDATA_SECTION_NODE")
#pragma pop_macro("COMMENT")
#pragma pop_macro("COMMENT_NODE")
#pragma pop_macro("DOCUMENT")
#pragma pop_macro("DOCUMENT_FRAGMENT")
#pragma pop_macro("DOCUMENT_FRAGMENT_NODE")
#pragma pop_macro("DOCUMENT_NODE")
#pragma pop_macro("DOCUMENT_TYPE")
#pragma pop_macro("DOCUMENT_TYPE_NODE")
#pragma pop_macro("ELEMENT")
#pragma pop_macro("ELEMENT_NODE")
#pragma pop_macro("ENTITY")
#pragma pop_macro("ENTITY_NODE")
#pragma pop_macro("ENTITY_REFERENCE")
#pragma pop_macro("ENTITY_REFERENCE_NODE")
#pragma pop_macro("NAMESPACE")
#pragma pop_macro("NAMESPACE_NODE")
#pragma pop_macro("NOTATION")
#pragma pop_macro("NOTATION_NODE")
#pragma pop_macro("PROCESSING_INSTRUCTION")
#pragma pop_macro("PROCESSING_INSTRUCTION_NODE")
#pragma pop_macro("TEXT")
#pragma pop_macro("TEXT_NODE")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_ExpandedNameTable_h_