#pragma once

#include "RE/Bethesda/BSTArray.h"
#include "RE/Havok/hkLocalArray.h"
#include "RE/Havok/hkRefPtr.h"
#include "RE/Havok/hknpBodyId.h"
#include "RE/Havok/hknpPhysicsSystem.h"
#include "RE/Havok/hknpPhysicsSystemData.h"
#include "RE/NetImmerse/NiObject.h"

namespace RE
{
	class bhkWorld;
	class hkTransformf;

	class __declspec(novtable) bhkPhysicsSystem :
		public NiObject
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkPhysicsSystem };
		inline static constexpr auto VTABLE{ VTABLE::bhkPhysicsSystem };
		inline static constexpr auto Ni_RTTI{ Ni_RTTI::bhkPhysicsSystem };

		bhkPhysicsSystem(hknpPhysicsSystemData* a_data)
		{
			using func_t = void (*)(bhkPhysicsSystem*, hknpPhysicsSystemData*);
			static REL::Relocation<func_t> func{ REL::ID(2278008) };
			func(this, a_data);
		}

		virtual ~bhkPhysicsSystem() = default;  // 00

		// add
		virtual bhkPhysicsSystem* CreateUniqueSystem(const BSScrapArray<std::uint32_t>* a_bodyIdxA);              // 28
		virtual bool              RemoveSubSystemFromWorld(const hkLocalArray<hknpBodyId>* a_bodyIdA);            // 29
		virtual bhkPhysicsSystem* CreateInstanceImpl(bhkWorld* a_world, const hkTransformf* a_initialTransform);  // 2A

		void AddToWorld()
		{
			using func_t = decltype(&bhkPhysicsSystem::AddToWorld);
			static REL::Relocation<func_t> func{ REL::ID(2278019) };
			func(this);
		}

		void CopyMembers(bhkPhysicsSystem* a_dest, NiCloningProcess& a_cloningProcess)
		{
			using func_t = decltype(&bhkPhysicsSystem::CopyMembers);
			static REL::Relocation<func_t> func{ REL::ID(2278007) };
			func(this, a_dest, a_cloningProcess);
		}

		F4_HEAP_REDEFINE_NEW(bhkPhysicsSystem);

		// members
		hkRefPtr<hknpPhysicsSystemData> systemData;
		hkRefPtr<hknpPhysicsSystem>     systemInstance;
		bool                            activateOnAdd{ false };
	};
	static_assert(sizeof(bhkPhysicsSystem) == 0x28);
}
