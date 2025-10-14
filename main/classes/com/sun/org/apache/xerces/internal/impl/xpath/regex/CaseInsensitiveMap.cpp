#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/CaseInsensitiveMap.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CHUNK_MASK
#undef CHUNK_SHIFT
#undef CHUNK_SIZE
#undef INITIAL_CHUNK_COUNT
#undef LOWER_CASE_MATCH
#undef UPPER_CASE_MATCH

using $intArray2 = $Array<int32_t, 2>;
using $intArray3 = $Array<int32_t, 3>;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _CaseInsensitiveMap_FieldInfo_[] = {
	{"CHUNK_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, CHUNK_SHIFT)},
	{"CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, CHUNK_SIZE)},
	{"CHUNK_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, CHUNK_MASK)},
	{"INITIAL_CHUNK_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, INITIAL_CHUNK_COUNT)},
	{"caseInsensitiveMap", "[[[I", nullptr, $PRIVATE | $STATIC, $staticField(CaseInsensitiveMap, caseInsensitiveMap)},
	{"LOWER_CASE_MATCH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, LOWER_CASE_MATCH)},
	{"UPPER_CASE_MATCH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, UPPER_CASE_MATCH)},
	{}
};

$MethodInfo _CaseInsensitiveMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CaseInsensitiveMap::*)()>(&CaseInsensitiveMap::init$))},
	{"buildCaseInsensitiveMap", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&CaseInsensitiveMap::buildCaseInsensitiveMap))},
	{"contains", "([II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ints*,int32_t)>(&CaseInsensitiveMap::contains))},
	{"contains", "([III)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ints*,int32_t,int32_t)>(&CaseInsensitiveMap::contains))},
	{"expandAndAdd", "([III)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t,int32_t)>(&CaseInsensitiveMap::expandAndAdd))},
	{"expandMap", "([II)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t)>(&CaseInsensitiveMap::expandMap))},
	{"get", "(I)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)(int32_t)>(&CaseInsensitiveMap::get))},
	{"getMapping", "(I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)(int32_t)>(&CaseInsensitiveMap::getMapping))},
	{"set", "(I[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$ints*)>(&CaseInsensitiveMap::set))},
	{"updateMap", "(I[II[II)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)(int32_t,$ints*,int32_t,$ints*,int32_t)>(&CaseInsensitiveMap::updateMap))},
	{}
};

$ClassInfo _CaseInsensitiveMap_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.CaseInsensitiveMap",
	"java.lang.Object",
	nullptr,
	_CaseInsensitiveMap_FieldInfo_,
	_CaseInsensitiveMap_MethodInfo_
};

$Object* allocate$CaseInsensitiveMap($Class* clazz) {
	return $of($alloc(CaseInsensitiveMap));
}

$intArray3* CaseInsensitiveMap::caseInsensitiveMap = nullptr;

void CaseInsensitiveMap::init$() {
}

$ints* CaseInsensitiveMap::get(int32_t codePoint) {
	$init(CaseInsensitiveMap);
	return (codePoint < 0x00010000) ? getMapping(codePoint) : ($ints*)nullptr;
}

$ints* CaseInsensitiveMap::getMapping(int32_t codePoint) {
	$init(CaseInsensitiveMap);
	int32_t chunk = $usr(codePoint, CaseInsensitiveMap::CHUNK_SHIFT);
	int32_t offset = (int32_t)(codePoint & (uint32_t)CaseInsensitiveMap::CHUNK_MASK);
	return $nc($nc(CaseInsensitiveMap::caseInsensitiveMap)->get(chunk))->get(offset);
}

void CaseInsensitiveMap::buildCaseInsensitiveMap() {
	$init(CaseInsensitiveMap);
	$assignStatic(CaseInsensitiveMap::caseInsensitiveMap, $new($intArray3, CaseInsensitiveMap::INITIAL_CHUNK_COUNT, CaseInsensitiveMap::CHUNK_SIZE));
	int32_t lc = 0;
	int32_t uc = 0;
	for (int32_t i = 0; i < 0x00010000; ++i) {
		lc = $Character::toLowerCase(i);
		uc = $Character::toUpperCase(i);
		if (lc != uc || lc != i) {
			$var($ints, map, $new($ints, 2));
			int32_t index = 0;
			if (lc != i) {
				map->set(index++, lc);
				map->set(index++, CaseInsensitiveMap::LOWER_CASE_MATCH);
				$var($ints, lcMap, getMapping(lc));
				if (lcMap != nullptr) {
					$assign(map, updateMap(i, map, lc, lcMap, CaseInsensitiveMap::LOWER_CASE_MATCH));
				}
			}
			if (uc != i) {
				if (index == map->length) {
					$assign(map, expandMap(map, 2));
				}
				map->set(index++, uc);
				map->set(index++, CaseInsensitiveMap::UPPER_CASE_MATCH);
				$var($ints, ucMap, getMapping(uc));
				if (ucMap != nullptr) {
					$assign(map, updateMap(i, map, uc, ucMap, CaseInsensitiveMap::UPPER_CASE_MATCH));
				}
			}
			set(i, map);
		}
	}
}

$ints* CaseInsensitiveMap::expandMap($ints* srcMap, int32_t expandBy) {
	$init(CaseInsensitiveMap);
	int32_t oldLen = $nc(srcMap)->length;
	$var($ints, newMap, $new($ints, oldLen + expandBy));
	$System::arraycopy(srcMap, 0, newMap, 0, oldLen);
	return newMap;
}

void CaseInsensitiveMap::set(int32_t codePoint, $ints* map) {
	$init(CaseInsensitiveMap);
	int32_t chunk = $usr(codePoint, CaseInsensitiveMap::CHUNK_SHIFT);
	int32_t offset = (int32_t)(codePoint & (uint32_t)CaseInsensitiveMap::CHUNK_MASK);
	$nc($nc(CaseInsensitiveMap::caseInsensitiveMap)->get(chunk))->set(offset, map);
}

$ints* CaseInsensitiveMap::updateMap(int32_t codePoint, $ints* codePointMap$renamed, int32_t ciCodePoint, $ints* ciCodePointMap$renamed, int32_t matchType) {
	$init(CaseInsensitiveMap);
	$var($ints, ciCodePointMap, ciCodePointMap$renamed);
	$var($ints, codePointMap, codePointMap$renamed);
	for (int32_t i = 0; i < $nc(ciCodePointMap)->length; i += 2) {
		int32_t c = ciCodePointMap->get(i);
		$var($ints, cMap, getMapping(c));
		if (cMap != nullptr) {
			if (contains(cMap, ciCodePoint, matchType)) {
				if (!contains(cMap, codePoint)) {
					$assign(cMap, expandAndAdd(cMap, codePoint, matchType));
					set(c, cMap);
				}
				if (!contains(codePointMap, c)) {
					$assign(codePointMap, expandAndAdd(codePointMap, c, matchType));
				}
			}
		}
	}
	if (!contains(ciCodePointMap, codePoint)) {
		$assign(ciCodePointMap, expandAndAdd(ciCodePointMap, codePoint, matchType));
		set(ciCodePoint, ciCodePointMap);
	}
	return codePointMap;
}

bool CaseInsensitiveMap::contains($ints* map, int32_t codePoint) {
	$init(CaseInsensitiveMap);
	for (int32_t i = 0; i < $nc(map)->length; i += 2) {
		if (map->get(i) == codePoint) {
			return true;
		}
	}
	return false;
}

bool CaseInsensitiveMap::contains($ints* map, int32_t codePoint, int32_t matchType) {
	$init(CaseInsensitiveMap);
	for (int32_t i = 0; i < $nc(map)->length; i += 2) {
		if (map->get(i) == codePoint && map->get(i + 1) == matchType) {
			return true;
		}
	}
	return false;
}

$ints* CaseInsensitiveMap::expandAndAdd($ints* srcMap, int32_t codePoint, int32_t matchType) {
	$init(CaseInsensitiveMap);
	int32_t oldLen = $nc(srcMap)->length;
	$var($ints, newMap, $new($ints, oldLen + 2));
	$System::arraycopy(srcMap, 0, newMap, 0, oldLen);
	newMap->set(oldLen, codePoint);
	newMap->set(oldLen + 1, matchType);
	return newMap;
}

void clinit$CaseInsensitiveMap($Class* class$) {
	{
		CaseInsensitiveMap::buildCaseInsensitiveMap();
	}
}

CaseInsensitiveMap::CaseInsensitiveMap() {
}

$Class* CaseInsensitiveMap::load$($String* name, bool initialize) {
	$loadClass(CaseInsensitiveMap, name, initialize, &_CaseInsensitiveMap_ClassInfo_, clinit$CaseInsensitiveMap, allocate$CaseInsensitiveMap);
	return class$;
}

$Class* CaseInsensitiveMap::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com