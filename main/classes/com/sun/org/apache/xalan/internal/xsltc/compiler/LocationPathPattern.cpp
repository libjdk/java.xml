#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CHILD

using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $StepPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _LocationPathPattern_FieldInfo_[] = {
	{"_template", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PRIVATE, $field(LocationPathPattern, _template)},
	{"_importPrecedence", "I", nullptr, $PRIVATE, $field(LocationPathPattern, _importPrecedence)},
	{"_priority", "D", nullptr, $PRIVATE, $field(LocationPathPattern, _priority)},
	{"_position", "I", nullptr, $PRIVATE, $field(LocationPathPattern, _position)},
	{}
};

$MethodInfo _LocationPathPattern_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocationPathPattern::*)()>(&LocationPathPattern::init$))},
	{"getAxis", "()I", nullptr, $PUBLIC},
	{"getDefaultPriority", "()D", nullptr, $PUBLIC},
	{"getKernelPattern", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPriority", "()D", nullptr, $PUBLIC | $FINAL},
	{"getTemplate", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PUBLIC},
	{"isWildcard", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"noSmallerThan", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;)Z", nullptr, $PUBLIC},
	{"reduceKernelPattern", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTemplate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _LocationPathPattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LocationPathPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Pattern",
	nullptr,
	_LocationPathPattern_FieldInfo_,
	_LocationPathPattern_MethodInfo_
};

$Object* allocate$LocationPathPattern($Class* clazz) {
	return $of($alloc(LocationPathPattern));
}

void LocationPathPattern::init$() {
	$Pattern::init$();
	$init($Double);
	this->_priority = $Double::NaN;
	this->_position = 0;
}

$Type* LocationPathPattern::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $Type::Void;
}

void LocationPathPattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
}

void LocationPathPattern::setTemplate($Template* template$) {
	$set(this, _template, template$);
	this->_priority = $nc(template$)->getPriority();
	this->_importPrecedence = template$->getImportPrecedence();
	this->_position = template$->getPosition();
}

$Template* LocationPathPattern::getTemplate() {
	return this->_template;
}

double LocationPathPattern::getPriority() {
	return $Double::isNaN(this->_priority) ? getDefaultPriority() : this->_priority;
}

double LocationPathPattern::getDefaultPriority() {
	return 0.5;
}

bool LocationPathPattern::noSmallerThan(LocationPathPattern* other) {
	if (this->_importPrecedence > $nc(other)->_importPrecedence) {
		return true;
	} else if (this->_importPrecedence == other->_importPrecedence) {
		if (this->_priority > other->_priority) {
			return true;
		} else if (this->_priority == other->_priority) {
			if (this->_position > other->_position) {
				return true;
			}
		}
	}
	return false;
}

int32_t LocationPathPattern::getAxis() {
	$var($StepPattern, sp, getKernelPattern());
	return (sp != nullptr) ? $nc(sp)->getAxis() : $Axis::CHILD;
}

$String* LocationPathPattern::toString() {
	return "root()"_s;
}

LocationPathPattern::LocationPathPattern() {
}

$Class* LocationPathPattern::load$($String* name, bool initialize) {
	$loadClass(LocationPathPattern, name, initialize, &_LocationPathPattern_ClassInfo_, allocate$LocationPathPattern);
	return class$;
}

$Class* LocationPathPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com