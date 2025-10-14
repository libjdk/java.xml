#include <com/sun/org/apache/xalan/internal/xsltc/trax/OutputSettings.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _OutputSettings_FieldInfo_[] = {
	{"_cdata_section_elements", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _cdata_section_elements)},
	{"_doctype_public", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _doctype_public)},
	{"_encoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _encoding)},
	{"_indent", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _indent)},
	{"_media_type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _media_type)},
	{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _method)},
	{"_omit_xml_declaration", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _omit_xml_declaration)},
	{"_standalone", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _standalone)},
	{"_version", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OutputSettings, _version)},
	{}
};

$MethodInfo _OutputSettings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OutputSettings::*)()>(&OutputSettings::init$))},
	{"getProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC, $method(static_cast<$Properties*(OutputSettings::*)()>(&OutputSettings::getProperties))},
	{}
};

$ClassInfo _OutputSettings_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.OutputSettings",
	"java.lang.Object",
	nullptr,
	_OutputSettings_FieldInfo_,
	_OutputSettings_MethodInfo_
};

$Object* allocate$OutputSettings($Class* clazz) {
	return $of($alloc(OutputSettings));
}

void OutputSettings::init$() {
	$set(this, _cdata_section_elements, nullptr);
	$set(this, _doctype_public, nullptr);
	$set(this, _encoding, nullptr);
	$set(this, _indent, nullptr);
	$set(this, _media_type, nullptr);
	$set(this, _method, nullptr);
	$set(this, _omit_xml_declaration, nullptr);
	$set(this, _standalone, nullptr);
	$set(this, _version, nullptr);
}

$Properties* OutputSettings::getProperties() {
	$var($Properties, properties, $new($Properties));
	return (properties);
}

OutputSettings::OutputSettings() {
}

$Class* OutputSettings::load$($String* name, bool initialize) {
	$loadClass(OutputSettings, name, initialize, &_OutputSettings_ClassInfo_, allocate$OutputSettings);
	return class$;
}

$Class* OutputSettings::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com