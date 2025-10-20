#include <java.xml.test.h>

#include <java.xml.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$xml$test$PreloadClass(void* eventData) {
}

void java$xml$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$xml$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$xml$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$xml$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$xml$test$GetResource($String* name) {
	return nullptr;
}

void java$xml$test::init() {
	::java$xml::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.xml.test", "17.35", "",
		nullptr,
		java$xml$test$LibEventAction,
		java$xml$test$GetPackages,
		java$xml$test$GetClassEntry,
		java$xml$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}