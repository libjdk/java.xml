#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/ParserForXMLSchema.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/ParseException.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegexParser.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$CharToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ClosureToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConcatToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ParenToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$UnionToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DIGITS_INTS
#undef IGNORE_CASE
#undef LETTERS
#undef LETTERS_INT
#undef NAMECHARS
#undef SPACES
#undef S_INBRACKETS
#undef S_NORMAL
#undef T_BACKSOLIDUS
#undef T_CHAR
#undef T_EOF
#undef T_RPAREN
#undef T_XMLSCHEMA_CC_SUBTRACTION
#undef UTF16_MAX

using $ParseException = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::ParseException;
using $RangeToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken;
using $RegexParser = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegexParser;
using $RegularExpression = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression;
using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $Token$CharToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$CharToken;
using $Token$ClosureToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ClosureToken;
using $Token$ConcatToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ConcatToken;
using $Token$ParenToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ParenToken;
using $Token$UnionToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$UnionToken;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _ParserForXMLSchema_FieldInfo_[] = {
	{"ranges", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;", $PRIVATE | $STATIC, $staticField(ParserForXMLSchema, ranges)},
	{"ranges2", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;", $PRIVATE | $STATIC, $staticField(ParserForXMLSchema, ranges2)},
	{"SPACES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, SPACES)},
	{"NAMECHARS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, NAMECHARS)},
	{"LETTERS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, LETTERS)},
	{"LETTERS_INT", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, LETTERS_INT)},
	{"DIGITS_INTS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, DIGITS_INTS)},
	{}
};

$MethodInfo _ParserForXMLSchema_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParserForXMLSchema::*)()>(&ParserForXMLSchema::init$))},
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(ParserForXMLSchema::*)($Locale*)>(&ParserForXMLSchema::init$))},
	{"checkQuestion", "(I)Z", nullptr, 0},
	{"decodeEscaped", "()I", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"getRange", "(Ljava/lang/String;Z)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED | $STATIC | $SYNCHRONIZED, $method(static_cast<$RangeToken*(*)($String*,bool)>(&ParserForXMLSchema::getRange))},
	{"getTokenForShorthand", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0},
	{"parseCharacterClass", "(Z)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"parseSetOperations", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBackreference", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_A", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_B", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_C", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_I", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_X", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_Z", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_b", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_c", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_g", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_gt", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_i", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_lt", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_z", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processCIinCharacterClass", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;I)I", nullptr, 0},
	{"processCaret", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processCondition", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processDollar", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processIndependent", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processLookahead", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processLookbehind", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processModifiers", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processNegativelookahead", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processNegativelookbehind", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processParen", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processParen2", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processPlus", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processQuestion", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processStar", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, nullptr, "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"setupRange", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($Token*,$String*)>(&ParserForXMLSchema::setupRange))},
	{"setupRange", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;[I)V", nullptr, $STATIC, $method(static_cast<void(*)($Token*,$ints*)>(&ParserForXMLSchema::setupRange))},
	{}
};

$ClassInfo _ParserForXMLSchema_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.ParserForXMLSchema",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser",
	nullptr,
	_ParserForXMLSchema_FieldInfo_,
	_ParserForXMLSchema_MethodInfo_
};

$Object* allocate$ParserForXMLSchema($Class* clazz) {
	return $of($alloc(ParserForXMLSchema));
}

$Map* ParserForXMLSchema::ranges = nullptr;
$Map* ParserForXMLSchema::ranges2 = nullptr;
$String* ParserForXMLSchema::SPACES = nullptr;
$String* ParserForXMLSchema::NAMECHARS = nullptr;
$String* ParserForXMLSchema::LETTERS = nullptr;
$ints* ParserForXMLSchema::LETTERS_INT = nullptr;
$ints* ParserForXMLSchema::DIGITS_INTS = nullptr;

void ParserForXMLSchema::init$() {
	$RegexParser::init$();
}

void ParserForXMLSchema::init$($Locale* locale) {
	$RegexParser::init$(locale);
}

$Token* ParserForXMLSchema::processCaret() {
	this->next();
	return $Token::createChar(u'^');
}

$Token* ParserForXMLSchema::processDollar() {
	this->next();
	return $Token::createChar(u'$');
}

$Token* ParserForXMLSchema::processLookahead() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processNegativelookahead() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processLookbehind() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processNegativelookbehind() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_A() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_Z() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_z() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_b() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_B() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_lt() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_gt() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processStar($Token* tok) {
	this->next();
	return $Token::createClosure(tok);
}

$Token* ParserForXMLSchema::processPlus($Token* tok) {
	this->next();
	return $Token::createConcat(tok, $($Token::createClosure(tok)));
}

$Token* ParserForXMLSchema::processQuestion($Token* tok) {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, par, $Token::createUnion());
	$nc(par)->addChild(tok);
	par->addChild($($Token::createEmpty()));
	return par;
}

bool ParserForXMLSchema::checkQuestion(int32_t off) {
	return false;
}

$Token* ParserForXMLSchema::processParen() {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, tok, $Token::createParen($(this->parseRegex()), 0));
	if (this->read() != $RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	this->next();
	return tok;
}

$Token* ParserForXMLSchema::processParen2() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processCondition() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processModifiers() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processIndependent() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_c() {
	this->next();
	return this->getTokenForShorthand(u'c');
}

$Token* ParserForXMLSchema::processBacksolidus_C() {
	this->next();
	return this->getTokenForShorthand(u'C');
}

$Token* ParserForXMLSchema::processBacksolidus_i() {
	this->next();
	return this->getTokenForShorthand(u'i');
}

$Token* ParserForXMLSchema::processBacksolidus_I() {
	this->next();
	return this->getTokenForShorthand(u'I');
}

$Token* ParserForXMLSchema::processBacksolidus_g() {
	$throw($(this->ex("parser.process.1"_s, this->offset - 2)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_X() {
	$throw($(ex("parser.process.1"_s, this->offset - 2)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBackreference() {
	$throw($(ex("parser.process.1"_s, this->offset - 4)));
	$shouldNotReachHere();
}

int32_t ParserForXMLSchema::processCIinCharacterClass($RangeToken* tok, int32_t c) {
	$nc(tok)->mergeRanges($(this->getTokenForShorthand(c)));
	return -1;
}

$RangeToken* ParserForXMLSchema::parseCharacterClass(bool useNrange) {
	$useLocalCurrentObjectStackCache();
	this->setContext($RegexParser::S_INBRACKETS);
	this->next();
	bool nrange = false;
	bool wasDecoded = false;
	$var($RangeToken, base, nullptr);
	$var($RangeToken, tok, nullptr);
	if (this->read() == $RegexParser::T_CHAR && this->chardata == u'^') {
		nrange = true;
		this->next();
		$assign(base, $Token::createRange());
		$nc(base)->addRange(0, $Token::UTF16_MAX);
		$assign(tok, $Token::createRange());
	} else {
		$assign(tok, $Token::createRange());
	}
	int32_t type = 0;
	bool firstloop = true;
	while ((type = this->read()) != $RegexParser::T_EOF) {
		wasDecoded = false;
		if (type == $RegexParser::T_CHAR && this->chardata == u']' && !firstloop) {
			if (nrange) {
				$nc(base)->subtractRanges(tok);
				$assign(tok, base);
			}
			break;
		}
		int32_t c = this->chardata;
		bool end = false;
		if (type == $RegexParser::T_BACKSOLIDUS) {
			{
				int32_t pstart = 0;
				$var($RangeToken, tok2, nullptr)
				switch (c) {
				case u'd':
					{}
				case u'D':
					{}
				case u'w':
					{}
				case u'W':
					{}
				case u's':
					{}
				case u'S':
					{
						$nc(tok)->mergeRanges($(this->getTokenForShorthand(c)));
						end = true;
						break;
					}
				case u'i':
					{}
				case u'I':
					{}
				case u'c':
					{}
				case u'C':
					{
						c = this->processCIinCharacterClass(tok, c);
						if (c < 0) {
							end = true;
						}
						break;
					}
				case u'p':
					{}
				case u'P':
					{
						pstart = this->offset;
						$assign(tok2, this->processBacksolidus_pP(c));
						if (tok2 == nullptr) {
							$throw($(this->ex("parser.atom.5"_s, pstart)));
						}
						$nc(tok)->mergeRanges(tok2);
						end = true;
						break;
					}
				case u'-':
					{
						c = this->decodeEscaped();
						wasDecoded = true;
						break;
					}
				default:
					{
						c = this->decodeEscaped();
					}
				}
			}
		} else if (type == $RegexParser::T_XMLSCHEMA_CC_SUBTRACTION && !firstloop) {
			if (nrange) {
				$nc(base)->subtractRanges(tok);
				$assign(tok, base);
			}
			$var($RangeToken, range2, this->parseCharacterClass(false));
			$nc(tok)->subtractRanges(range2);
			if (this->read() != $RegexParser::T_CHAR || this->chardata != u']') {
				$throw($(this->ex("parser.cc.5"_s, this->offset)));
			}
			break;
		}
		this->next();
		if (!end) {
			if (type == $RegexParser::T_CHAR) {
				if (c == u'[') {
					$throw($(this->ex("parser.cc.6"_s, this->offset - 2)));
				}
				if (c == u']') {
					$throw($(this->ex("parser.cc.7"_s, this->offset - 2)));
				}
				if (c == u'-' && this->chardata != u']' && !firstloop) {
					$throw($(this->ex("parser.cc.8"_s, this->offset - 2)));
				}
			}
			if (this->read() != $RegexParser::T_CHAR || this->chardata != u'-' || c == u'-' && !wasDecoded && firstloop) {
				if (!this->isSet($RegularExpression::IGNORE_CASE) || c > 0x0000FFFF) {
					$nc(tok)->addRange(c, c);
				} else {
					addCaseInsensitiveChar(tok, c);
				}
			} else {
				this->next();
				if ((type = this->read()) == $RegexParser::T_EOF) {
					$throw($(this->ex("parser.cc.2"_s, this->offset)));
				}
				if (type == $RegexParser::T_CHAR && this->chardata == u']') {
					if (!this->isSet($RegularExpression::IGNORE_CASE) || c > 0x0000FFFF) {
						$nc(tok)->addRange(c, c);
					} else {
						addCaseInsensitiveChar(tok, c);
					}
					$nc(tok)->addRange(u'-', u'-');
				} else if (type == $RegexParser::T_XMLSCHEMA_CC_SUBTRACTION) {
					$throw($(this->ex("parser.cc.8"_s, this->offset - 1)));
				} else {
					int32_t rangeend = this->chardata;
					if (type == $RegexParser::T_CHAR) {
						if (rangeend == u'[') {
							$throw($(this->ex("parser.cc.6"_s, this->offset - 1)));
						}
						if (rangeend == u']') {
							$throw($(this->ex("parser.cc.7"_s, this->offset - 1)));
						}
						if (rangeend == u'-') {
							$throw($(this->ex("parser.cc.8"_s, this->offset - 2)));
						}
					} else if (type == $RegexParser::T_BACKSOLIDUS) {
						rangeend = this->decodeEscaped();
					}
					this->next();
					if (c > rangeend) {
						$throw($(this->ex("parser.ope.3"_s, this->offset - 1)));
					}
					if (!this->isSet($RegularExpression::IGNORE_CASE) || (c > 0x0000FFFF && rangeend > 0x0000FFFF)) {
						$nc(tok)->addRange(c, rangeend);
					} else {
						addCaseInsensitiveCharRange(tok, c, rangeend);
					}
				}
			}
		}
		firstloop = false;
	}
	if (this->read() == $RegexParser::T_EOF) {
		$throw($(this->ex("parser.cc.2"_s, this->offset)));
	}
	$nc(tok)->sortRanges();
	tok->compactRanges();
	this->setContext($RegexParser::S_NORMAL);
	this->next();
	return tok;
}

$RangeToken* ParserForXMLSchema::parseSetOperations() {
	$throw($(this->ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::getTokenForShorthand(int32_t ch) {
	$useLocalCurrentObjectStackCache();
	switch (ch) {
	case u'd':
		{
			return ParserForXMLSchema::getRange("xml:isDigit"_s, true);
		}
	case u'D':
		{
			return ParserForXMLSchema::getRange("xml:isDigit"_s, false);
		}
	case u'w':
		{
			return ParserForXMLSchema::getRange("xml:isWord"_s, true);
		}
	case u'W':
		{
			return ParserForXMLSchema::getRange("xml:isWord"_s, false);
		}
	case u's':
		{
			return ParserForXMLSchema::getRange("xml:isSpace"_s, true);
		}
	case u'S':
		{
			return ParserForXMLSchema::getRange("xml:isSpace"_s, false);
		}
	case u'c':
		{
			return ParserForXMLSchema::getRange("xml:isNameChar"_s, true);
		}
	case u'C':
		{
			return ParserForXMLSchema::getRange("xml:isNameChar"_s, false);
		}
	case u'i':
		{
			return ParserForXMLSchema::getRange("xml:isInitialNameChar"_s, true);
		}
	case u'I':
		{
			return ParserForXMLSchema::getRange("xml:isInitialNameChar"_s, false);
		}
	default:
		{
			$throwNew($RuntimeException, $$str({"Internal Error: shorthands: \\u"_s, $($Integer::toString(ch, 16))}));
		}
	}
}

int32_t ParserForXMLSchema::decodeEscaped() {
	$useLocalCurrentObjectStackCache();
	if (this->read() != $RegexParser::T_BACKSOLIDUS) {
		$throw($(ex("parser.next.1"_s, this->offset - 1)));
	}
	int32_t c = this->chardata;
	switch (c) {
	case u'n':
		{
			c = u'\n';
			break;
		}
	case u'r':
		{
			c = u'\r';
			break;
		}
	case u't':
		{
			c = u'\t';
			break;
		}
	case u'\\':
		{}
	case u'|':
		{}
	case u'.':
		{}
	case u'^':
		{}
	case u'-':
		{}
	case u'?':
		{}
	case u'*':
		{}
	case u'+':
		{}
	case u'{':
		{}
	case u'}':
		{}
	case u'(':
		{}
	case u')':
		{}
	case u'[':
		{}
	case u']':
		{
			break;
		}
	default:
		{
			$throw($(ex("parser.process.1"_s, this->offset - 2)));
		}
	}
	return c;
}

$RangeToken* ParserForXMLSchema::getRange($String* name, bool positive) {
	$load(ParserForXMLSchema);
	$synchronized(class$) {
		$init(ParserForXMLSchema);
		$useLocalCurrentObjectStackCache();
		if (ParserForXMLSchema::ranges == nullptr) {
			$assignStatic(ParserForXMLSchema::ranges, $new($HashMap));
			$assignStatic(ParserForXMLSchema::ranges2, $new($HashMap));
			$var($Token, tok, $Token::createRange());
			setupRange(tok, ParserForXMLSchema::SPACES);
			$nc(ParserForXMLSchema::ranges)->put("xml:isSpace"_s, tok);
			$nc(ParserForXMLSchema::ranges2)->put("xml:isSpace"_s, $($Token::complementRanges(tok)));
			$assign(tok, $Token::createRange());
			setupRange(tok, ParserForXMLSchema::DIGITS_INTS);
			$nc(ParserForXMLSchema::ranges)->put("xml:isDigit"_s, tok);
			$nc(ParserForXMLSchema::ranges2)->put("xml:isDigit"_s, $($Token::complementRanges(tok)));
			$assign(tok, $Token::createRange());
			$nc(tok)->mergeRanges($($Token::getRange("P"_s, true)));
			tok->mergeRanges($($Token::getRange("Z"_s, true)));
			tok->mergeRanges($($Token::getRange("C"_s, true)));
			$nc(ParserForXMLSchema::ranges2)->put("xml:isWord"_s, tok);
			$nc(ParserForXMLSchema::ranges)->put("xml:isWord"_s, $($Token::complementRanges(tok)));
			$assign(tok, $Token::createRange());
			setupRange(tok, ParserForXMLSchema::NAMECHARS);
			$nc(ParserForXMLSchema::ranges)->put("xml:isNameChar"_s, tok);
			$nc(ParserForXMLSchema::ranges2)->put("xml:isNameChar"_s, $($Token::complementRanges(tok)));
			$assign(tok, $Token::createRange());
			setupRange(tok, ParserForXMLSchema::LETTERS);
			setupRange(tok, ParserForXMLSchema::LETTERS_INT);
			tok->addRange(u'_', u'_');
			tok->addRange(u':', u':');
			$nc(ParserForXMLSchema::ranges)->put("xml:isInitialNameChar"_s, tok);
			$nc(ParserForXMLSchema::ranges2)->put("xml:isInitialNameChar"_s, $($Token::complementRanges(tok)));
		}
		$var($RangeToken, tok, positive ? $cast($RangeToken, $nc(ParserForXMLSchema::ranges)->get(name)) : $cast($RangeToken, $nc(ParserForXMLSchema::ranges2)->get(name)));
		return tok;
	}
}

void ParserForXMLSchema::setupRange($Token* range, $String* src) {
	$init(ParserForXMLSchema);
	int32_t len = $nc(src)->length();
	for (int32_t i = 0; i < len; i += 2) {
		int32_t var$0 = (int32_t)src->charAt(i);
		$nc(range)->addRange(var$0, src->charAt(i + 1));
	}
}

void ParserForXMLSchema::setupRange($Token* range, $ints* src) {
	$init(ParserForXMLSchema);
	int32_t len = $nc(src)->length;
	for (int32_t i = 0; i < len; i += 2) {
		$nc(range)->addRange(src->get(i), src->get(i + 1));
	}
}

void clinit$ParserForXMLSchema($Class* class$) {
	$assignStatic(ParserForXMLSchema::SPACES, "\t\n\r\r  "_s);
	$assignStatic(ParserForXMLSchema::NAMECHARS, u"-.0:AZ__az\u00b7\u00b7\u00c0\u00d6\u00d8\u00f6\u00f8\u0131\u0134\u013e\u0141\u0148\u014a\u017e\u0180\u01c3\u01cd\u01f0\u01f4\u01f5\u01fa\u0217\u0250\u02a8\u02bb\u02c1\u02d0\u02d1\u0300\u0345\u0360\u0361\u0386\u038a\u038c\u038c\u038e\u03a1\u03a3\u03ce\u03d0\u03d6\u03da\u03da\u03dc\u03dc\u03de\u03de\u03e0\u03e0\u03e2\u03f3\u0401\u040c\u040e\u044f\u0451\u045c\u045e\u0481\u0483\u0486\u0490\u04c4\u04c7\u04c8\u04cb\u04cc\u04d0\u04eb\u04ee\u04f5\u04f8\u04f9\u0531\u0556\u0559\u0559\u0561\u0586\u0591\u05a1\u05a3\u05b9\u05bb\u05bd\u05bf\u05bf\u05c1\u05c2\u05c4\u05c4\u05d0\u05ea\u05f0\u05f2\u0621\u063a\u0640\u0652\u0660\u0669\u0670\u06b7\u06ba\u06be\u06c0\u06ce\u06d0\u06d3\u06d5\u06e8\u06ea\u06ed\u06f0\u06f9\u0901\u0903\u0905\u0939\u093c\u094d\u0951\u0954\u0958\u0963\u0966\u096f\u0981\u0983\u0985\u098c\u098f\u0990\u0993\u09a8\u09aa\u09b0\u09b2\u09b2\u09b6\u09b9\u09bc\u09bc\u09be\u09c4\u09c7\u09c8\u09cb\u09cd\u09d7\u09d7\u09dc\u09dd\u09df\u09e3\u09e6\u09f1\u0a02\u0a02\u0a05\u0a0a\u0a0f\u0a10\u0a13\u0a28\u0a2a\u0a30\u0a32\u0a33\u0a35\u0a36\u0a38\u0a39\u0a3c\u0a3c\u0a3e\u0a42\u0a47\u0a48\u0a4b\u0a4d\u0a59\u0a5c\u0a5e\u0a5e\u0a66\u0a74\u0a81\u0a83\u0a85\u0a8b\u0a8d\u0a8d\u0a8f\u0a91\u0a93\u0aa8\u0aaa\u0ab0\u0ab2\u0ab3\u0ab5\u0ab9\u0abc\u0ac5\u0ac7\u0ac9\u0acb\u0acd\u0ae0\u0ae0\u0ae6\u0aef\u0b01\u0b03\u0b05\u0b0c\u0b0f\u0b10\u0b13\u0b28\u0b2a\u0b30\u0b32\u0b33\u0b36\u0b39\u0b3c\u0b43\u0b47\u0b48\u0b4b\u0b4d\u0b56\u0b57\u0b5c\u0b5d\u0b5f\u0b61\u0b66\u0b6f\u0b82\u0b83\u0b85\u0b8a\u0b8e\u0b90\u0b92\u0b95\u0b99\u0b9a\u0b9c\u0b9c\u0b9e\u0b9f\u0ba3\u0ba4\u0ba8\u0baa\u0bae\u0bb5\u0bb7\u0bb9\u0bbe\u0bc2\u0bc6\u0bc8\u0bca\u0bcd\u0bd7\u0bd7\u0be7\u0bef\u0c01\u0c03\u0c05\u0c0c\u0c0e\u0c10\u0c12\u0c28\u0c2a\u0c33\u0c35\u0c39\u0c3e\u0c44\u0c46\u0c48\u0c4a\u0c4d\u0c55\u0c56\u0c60\u0c61\u0c66\u0c6f\u0c82\u0c83\u0c85\u0c8c\u0c8e\u0c90\u0c92\u0ca8\u0caa\u0cb3\u0cb5\u0cb9\u0cbe\u0cc4\u0cc6\u0cc8\u0cca\u0ccd\u0cd5\u0cd6\u0cde\u0cde\u0ce0\u0ce1\u0ce6\u0cef\u0d02\u0d03\u0d05\u0d0c\u0d0e\u0d10\u0d12\u0d28\u0d2a\u0d39\u0d3e\u0d43\u0d46\u0d48\u0d4a\u0d4d\u0d57\u0d57\u0d60\u0d61\u0d66\u0d6f\u0e01\u0e2e\u0e30\u0e3a\u0e40\u0e4e\u0e50\u0e59\u0e81\u0e82\u0e84\u0e84\u0e87\u0e88\u0e8a\u0e8a\u0e8d\u0e8d\u0e94\u0e97\u0e99\u0e9f\u0ea1\u0ea3\u0ea5\u0ea5\u0ea7\u0ea7\u0eaa\u0eab\u0ead\u0eae\u0eb0\u0eb9\u0ebb\u0ebd\u0ec0\u0ec4\u0ec6\u0ec6\u0ec8\u0ecd\u0ed0\u0ed9\u0f18\u0f19\u0f20\u0f29\u0f35\u0f35\u0f37\u0f37\u0f39\u0f39\u0f3e\u0f47\u0f49\u0f69\u0f71\u0f84\u0f86\u0f8b\u0f90\u0f95\u0f97\u0f97\u0f99\u0fad\u0fb1\u0fb7\u0fb9\u0fb9\u10a0\u10c5\u10d0\u10f6\u1100\u1100\u1102\u1103\u1105\u1107\u1109\u1109\u110b\u110c\u110e\u1112\u113c\u113c\u113e\u113e\u1140\u1140\u114c\u114c\u114e\u114e\u1150\u1150\u1154\u1155\u1159\u1159\u115f\u1161\u1163\u1163\u1165\u1165\u1167\u1167\u1169\u1169\u116d\u116e\u1172\u1173\u1175\u1175\u119e\u119e\u11a8\u11a8\u11ab\u11ab\u11ae\u11af\u11b7\u11b8\u11ba\u11ba\u11bc\u11c2\u11eb\u11eb\u11f0\u11f0\u11f9\u11f9\u1e00\u1e9b\u1ea0\u1ef9\u1f00\u1f15\u1f18\u1f1d\u1f20\u1f45\u1f48\u1f4d\u1f50\u1f57\u1f59\u1f59\u1f5b\u1f5b\u1f5d\u1f5d\u1f5f\u1f7d\u1f80\u1fb4\u1fb6\u1fbc\u1fbe\u1fbe\u1fc2\u1fc4\u1fc6\u1fcc\u1fd0\u1fd3\u1fd6\u1fdb\u1fe0\u1fec\u1ff2\u1ff4\u1ff6\u1ffc\u20d0\u20dc\u20e1\u20e1\u2126\u2126\u212a\u212b\u212e\u212e\u2180\u2182\u3005\u3005\u3007\u3007\u3021\u302f\u3031\u3035\u3041\u3094\u3099\u309a\u309d\u309e\u30a1\u30fa\u30fc\u30fe\u3105\u312c\u4e00\u9fa5\uac00\ud7a3"_s);
	$assignStatic(ParserForXMLSchema::LETTERS, u"AZaz\u00c0\u00d6\u00d8\u00f6\u00f8\u0131\u0134\u013e\u0141\u0148\u014a\u017e\u0180\u01f0\u01f4\u01f5\u01fa\u0217\u0250\u02a8\u02bb\u02c1\u02b0\u02d1\u0386\u0386\u0388\u038a\u038c\u038c\u038e\u03a1\u03a3\u03ce\u03d0\u03d6\u03da\u03da\u03dc\u03dc\u03de\u03de\u03e0\u03e0\u03e2\u03f3\u0401\u040c\u040e\u044f\u0451\u045c\u045e\u0481\u0490\u04c4\u04c7\u04c8\u04cb\u04cc\u04d0\u04eb\u04ee\u04f5\u04f8\u04f9\u0531\u0556\u0559\u0559\u0561\u0586\u05d0\u05ea\u05f0\u05f2\u0621\u063a\u0641\u064a\u0671\u06b7\u06ba\u06be\u06c0\u06ce\u06d0\u06d3\u06d5\u06d5\u06e5\u06e6\u0905\u0939\u093d\u093d\u0958\u0961\u0985\u098c\u098f\u0990\u0993\u09a8\u09aa\u09b0\u09b2\u09b2\u09b6\u09b9\u09dc\u09dd\u09df\u09e1\u09f0\u09f1\u0a05\u0a0a\u0a0f\u0a10\u0a13\u0a28\u0a2a\u0a30\u0a32\u0a33\u0a35\u0a36\u0a38\u0a39\u0a59\u0a5c\u0a5e\u0a5e\u0a72\u0a74\u0a85\u0a8b\u0a8d\u0a8d\u0a8f\u0a91\u0a93\u0aa8\u0aaa\u0ab0\u0ab2\u0ab3\u0ab5\u0ab9\u0abd\u0abd\u0ae0\u0ae0\u0b05\u0b0c\u0b0f\u0b10\u0b13\u0b28\u0b2a\u0b30\u0b32\u0b33\u0b36\u0b39\u0b3d\u0b3d\u0b5c\u0b5d\u0b5f\u0b61\u0b85\u0b8a\u0b8e\u0b90\u0b92\u0b95\u0b99\u0b9a\u0b9c\u0b9c\u0b9e\u0b9f\u0ba3\u0ba4\u0ba8\u0baa\u0bae\u0bb5\u0bb7\u0bb9\u0c05\u0c0c\u0c0e\u0c10\u0c12\u0c28\u0c2a\u0c33\u0c35\u0c39\u0c60\u0c61\u0c85\u0c8c\u0c8e\u0c90\u0c92\u0ca8\u0caa\u0cb3\u0cb5\u0cb9\u0cde\u0cde\u0ce0\u0ce1\u0d05\u0d0c\u0d0e\u0d10\u0d12\u0d28\u0d2a\u0d39\u0d60\u0d61\u0e01\u0e2e\u0e30\u0e30\u0e32\u0e33\u0e40\u0e45\u0e81\u0e82\u0e84\u0e84\u0e87\u0e88\u0e8a\u0e8a\u0e8d\u0e8d\u0e94\u0e97\u0e99\u0e9f\u0ea1\u0ea3\u0ea5\u0ea5\u0ea7\u0ea7\u0eaa\u0eab\u0ead\u0eae\u0eb0\u0eb0\u0eb2\u0eb3\u0ebd\u0ebd\u0ec0\u0ec4\u0f40\u0f47\u0f49\u0f69\u10a0\u10c5\u10d0\u10f6\u1100\u1100\u1102\u1103\u1105\u1107\u1109\u1109\u110b\u110c\u110e\u1112\u113c\u113c\u113e\u113e\u1140\u1140\u114c\u114c\u114e\u114e\u1150\u1150\u1154\u1155\u1159\u1159\u115f\u1161\u1163\u1163\u1165\u1165\u1167\u1167\u1169\u1169\u116d\u116e\u1172\u1173\u1175\u1175\u119e\u119e\u11a8\u11a8\u11ab\u11ab\u11ae\u11af\u11b7\u11b8\u11ba\u11ba\u11bc\u11c2\u11eb\u11eb\u11f0\u11f0\u11f9\u11f9\u1e00\u1e9b\u1ea0\u1ef9\u1f00\u1f15\u1f18\u1f1d\u1f20\u1f45\u1f48\u1f4d\u1f50\u1f57\u1f59\u1f59\u1f5b\u1f5b\u1f5d\u1f5d\u1f5f\u1f7d\u1f80\u1fb4\u1fb6\u1fbc\u1fbe\u1fbe\u1fc2\u1fc4\u1fc6\u1fcc\u1fd0\u1fd3\u1fd6\u1fdb\u1fe0\u1fec\u1ff2\u1ff4\u1ff6\u1ffc\u2126\u2126\u212a\u212b\u212e\u212e\u2180\u2182\u3007\u3007\u3021\u3029\u3041\u3094\u30a1\u30fa\u3105\u312c\u4e00\u9fa5\uac00\ud7a3\uff66\uff9f"_s);
	$assignStatic(ParserForXMLSchema::ranges, nullptr);
	$assignStatic(ParserForXMLSchema::ranges2, nullptr);
	$assignStatic(ParserForXMLSchema::LETTERS_INT, $new($ints, {
		0x0001D790,
		0x0001D7A8,
		0x0001D7AA,
		0x0001D7C9,
		0x0002FA1B,
		0x0002FA1D
	}));
	$assignStatic(ParserForXMLSchema::DIGITS_INTS, $new($ints, {
		48,
		57,
		1632,
		1641,
		1776,
		1785,
		2406,
		2415,
		2534,
		2543,
		2662,
		2671,
		2790,
		2799,
		2918,
		2927,
		3047,
		3055,
		3174,
		3183,
		3302,
		3311,
		3430,
		3439,
		3664,
		3673,
		3792,
		3801,
		3872,
		3881,
		4160,
		4169,
		4969,
		4977,
		6112,
		6121,
		6160,
		6169,
		0x0000FF10,
		0x0000FF19,
		0x0001D7CE,
		0x0001D7FF
	}));
}

ParserForXMLSchema::ParserForXMLSchema() {
}

$Class* ParserForXMLSchema::load$($String* name, bool initialize) {
	$loadClass(ParserForXMLSchema, name, initialize, &_ParserForXMLSchema_ClassInfo_, clinit$ParserForXMLSchema, allocate$ParserForXMLSchema);
	return class$;
}

$Class* ParserForXMLSchema::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com