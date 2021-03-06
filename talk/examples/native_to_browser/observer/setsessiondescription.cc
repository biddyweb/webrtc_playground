#include "talk/examples/native_to_browser/observer/setsessiondescription.h"

namespace n2b {
	namespace observer{

	void SetSessionDescription::OnSuccess(){
		onSuccess.emit();
	}

	void SetSessionDescription::OnFailure(const std::string& error){
		onFailure.emit(error);
	}
		
	} //end namespace observer
} //end namespace n2b