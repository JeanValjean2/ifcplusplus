/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"

// TYPE IfcProfileTypeEnum = ENUMERATION OF	(CURVE	,AREA);
IfcProfileTypeEnum::IfcProfileTypeEnum() {}
IfcProfileTypeEnum::~IfcProfileTypeEnum() {}
shared_ptr<IfcPPObject> IfcProfileTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcProfileTypeEnum> copy_self( new IfcProfileTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcProfileTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPROFILETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CURVE:	stream << ".CURVE."; break;
		case ENUM_AREA:	stream << ".AREA."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcProfileTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CURVE:	return L"CURVE";
		case ENUM_AREA:	return L"AREA";
	}
	return L"";
}
shared_ptr<IfcProfileTypeEnum> IfcProfileTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcProfileTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcProfileTypeEnum>(); }
	shared_ptr<IfcProfileTypeEnum> type_object( new IfcProfileTypeEnum() );
	if( boost::iequals( arg, L".CURVE." ) )
	{
		type_object->m_enum = IfcProfileTypeEnum::ENUM_CURVE;
	}
	else if( boost::iequals( arg, L".AREA." ) )
	{
		type_object->m_enum = IfcProfileTypeEnum::ENUM_AREA;
	}
	return type_object;
}