#pragma once

#include "RE/Bethesda/BSFixedString.h"
#include "RE/Bethesda/BSTSingleton.h"
#include "RE/Bethesda/TESForms.h"

namespace RE
{
	enum class DEFAULT_OBJECT
	{
		kSittingAngleLimit = 0x1,
		kAllowPlayerShout = 0x2,
		kGold = 0x3,
		kLockpick = 0x4,
		kSkeletonKey = 0x5,
		kPlayerFaction = 0x6,
		kGuardFaction = 0x7,
		kBattleMusic = 0x8,
		kDeathMusic = 0x9,
		kDungeonClearedMusic = 0xA,
		kPlayerVoiceMale = 0xB,
		kPlayerVoiceMaleChild = 0xC,
		kPlayerVoiceFemale = 0xD,
		kPlayerVoiceFemaleChild = 0xE,
		kEatPackageDefaultFood = 0xF,
		kVoiceEquip = 0x10,
		kPotionEquip = 0x11,
		kEveryActorAbility = 0x12,
		kCommandedActorAbility = 0x13,
		kDrugWearsOffImageSpace = 0x14,
		kFootstepSet = 0x15,
		kLandscapeMaterial = 0x16,
		kDragonLandZoneMarker = 0x17,
		kDragonCrashZoneMarker = 0x18,
		kCombatStyle = 0x19,
		kDefaultPackList = 0x1A,
		kWaitForDialoguePackage = 0x1B,
		kVirtualLocation = 0x1C,
		kPersistAllLocation = 0x1D,
		kPathingTestNPC = 0x1E,
		kActionSwimStateChange = 0x1F,
		kActionLook = 0x20,
		kActionLeftAttack = 0x21,
		kActionLeftReady = 0x22,
		kActionLeftRelease = 0x23,
		kActionLeftInterrupt = 0x24,
		kActionRightAttack = 0x25,
		kActionRightReady = 0x26,
		kActionRightRelease = 0x27,
		kActionRightInterrupt = 0x28,
		kActionDualAttack = 0x29,
		kActionDualRelease = 0x2A,
		kActionActivate = 0x2B,
		kActionJump = 0x2C,
		kActionFall = 0x2D,
		kActionLand = 0x2E,
		kActionMantle = 0x2F,
		kActionSneak = 0x30,
		kActionVoice = 0x31,
		kActionVoiceReady = 0x32,
		kActionVoiceRelease = 0x33,
		kActionVoiceInterrupt = 0x34,
		kActionIdle = 0x35,
		kActionSprintStart = 0x36,
		kActionSprintStop = 0x37,
		kActionDraw = 0x38,
		kActionSheath = 0x39,
		kActionLeftPowerAttack = 0x3A,
		kActionRightPowerAttack = 0x3B,
		kActionDualPowerAttack = 0x3C,
		kActionLeftSyncAttack = 0x3D,
		kActionRightSyncAttack = 0x3E,
		kActionStaggerStart = 0x3F,
		kActionBlockHit = 0x40,
		kActionBlockAnticipate = 0x41,
		kActionRecoil = 0x42,
		kActionLargeRecoil = 0x43,
		kActionBleedoutStart = 0x44,
		kActionBleedoutStop = 0x45,
		kActionIdleStop = 0x46,
		kActionWardHit = 0x47,
		kActionForceEquip = 0x48,
		kActionShieldChange = 0x49,
		kActionPathStart = 0x4A,
		kActionPathEnd = 0x4B,
		kActionLargeMovementDelta = 0x4C,
		kActionFlyStart = 0x4D,
		kActionFlyStop = 0x4E,
		kActionHoverStart = 0x4F,
		kActionHoverStop = 0x50,
		kActionBumpedInto = 0x51,
		kActionSummonedStart = 0x52,
		kActionDialogueTalking = 0x53,
		kActionDialogueListen = 0x54,
		kActionDialogueListenPositive = 0x55,
		kActionDialogueListenNegative = 0x56,
		kActionDialogueListenQuestion = 0x57,
		kActionDialogueListenNeutral = 0x58,
		kActionDialogueEnter = 0x59,
		kActionDialogueExit = 0x5A,
		kActionDeath = 0x5B,
		kActionDeathWait = 0x5C,
		kActionIdleWarn = 0x5D,
		kActionMoveStart = 0x5E,
		kActionMoveStop = 0x5F,
		kActionTurnRight = 0x60,
		kActionTurnLeft = 0x61,
		kActionTurnStop = 0x62,
		kActionMoveForward = 0x63,
		kActionMoveBackward = 0x64,
		kActionMoveLeft = 0x65,
		kActionMoveRight = 0x66,
		kActionKnockdown = 0x67,
		kActionGetUp = 0x68,
		kActionIdleStopInstant = 0x69,
		kActionRagdollInstant = 0x6A,
		kActionWaterwalkStart = 0x6B,
		kActionReload = 0x6C,
		kActionBoltCharge = 0x6D,
		kActionSighted = 0x6E,
		kActionSightedRelease = 0x6F,
		kActionMelee = 0x70,
		kActionFireSingle = 0x71,
		kActionFireCharge = 0x72,
		kActionFireChargeHold = 0x73,
		kActionFireAuto = 0x74,
		kActionFireEmpty = 0x75,
		kActionThrow = 0x76,
		kActionEnterCover = 0x77,
		kActionExitCover = 0x78,
		kActionCoverSprintStart = 0x79,
		kActionShuffle = 0x7A,
		kActionPipboy = 0x7B,
		kActionPipboyClose = 0x7C,
		kActionPipboyZoom = 0x7D,
		kActionPipboyStats = 0x7E,
		kActionPipboyInventory = 0x7F,
		kActionPipboyData = 0x80,
		kActionPipboyMap = 0x81,
		kActionPipboyTab = 0x82,
		kActionPipboyTabPrevious = 0x83,
		kActionPipboySelect = 0x84,
		kActionPipboyRadioOn = 0x85,
		kActionPipboyRadioOff = 0x86,
		kActionPipboyLoadHolotape = 0x87,
		kActionPipboyInspect = 0x88,
		kActionNonSupportContact = 0x89,
		kActionInteractionEnter = 0x8A,
		kActionInteractionExit = 0x8B,
		kActionInteractionExitAlternate = 0x8C,
		kActionInteractionExitQuick = 0x8D,
		kActionIntimidate = 0x8E,
		kActionGunChargeStart = 0x8F,
		kActionGunDown = 0x90,
		kActionGunRelaxed = 0x91,
		kActionGunAlert = 0x92,
		kActionGunReady = 0x93,
		kActionFlipThrow = 0x94,
		kActionEnterCombat = 0x95,
		kActionExitCombat = 0x96,
		kActionLimbCritical = 0x97,
		kActionEvade = 0x98,
		kActionDodge = 0x99,
		kActionAoEAttack = 0x9A,
		kActionPanic = 0x9B,
		kActionCower = 0x9C,
		kActionTunnel = 0x9D,
		kActionHide = 0x9E,
		kPickupSoundGeneric = 0x9F,
		kPutdownSoundGeneric = 0xA0,
		kPickupSoundWeapon = 0xA1,
		kPutdownSoundWeapon = 0xA2,
		kPickupSoundArmor = 0xA3,
		kPutdownSoundArmor = 0xA4,
		kPickupSoundBook = 0xA5,
		kPutdownSoundBook = 0xA6,
		kPickupSoundIngredient = 0xA7,
		kPutdownSoundIngredient = 0xA8,
		kHarvestSound = 0xA9,
		kHarvestFailedSound = 0xAA,
		kWardBreakSound = 0xAB,
		kWardAbsorbSound = 0xAC,
		kWardDeflectSound = 0xAD,
		kMagicFailSound = 0xAE,
		kShoutFailSound = 0xAF,
		kHeartbeatSoundFast = 0xB0,
		kHeartbeatSoundSlow = 0xB1,
		kImagespaceLowHealth = 0xB2,
		kSoulCapturedSound = 0xB3,
		kNoActivationSound = 0xB4,
		kMapMenuLoopingSound = 0xB5,
		kDialogueVoiceCategory = 0xB6,
		kNonDialogueVoiceCategory = 0xB7,
		kSFXToFadeInDialogueCategory = 0xB8,
		kPauseDuringMenuCategoryFade = 0xB9,
		kPauseDuringMenuCategoryImmediate = 0xBA,
		kPauseDuringLoadingMenuCategory = 0xBB,
		kMusicSoundCategory = 0xBC,
		kStatsMuteCategory = 0xBD,
		kStatsMusic = 0xBE,
		kMasterSoundCategory = 0xBF,
		kDialogueOutputModel3D = 0xC0,
		kDialogueOutputModel2D = 0xC1,
		kPlayersOutputModel1stPerson = 0xC2,
		kPlayersOutputModel3rdPerson = 0xC3,
		kInterfaceOutputModel = 0xC4,
		kReverbType = 0xC5,
		kUnderwaterLoopSound = 0xC6,
		kUnderwaterReverbType = 0xC7,
		kKeywordHorse = 0xC8,
		kKeywordUndead = 0xC9,
		kKeywordNPC = 0xCA,

		kKeywordDummyObject = 0xCC,
		kKeywordUseGeometryEmitter = 0xCD,
		kKeywordMustStop = 0xCE,
		kMaleFaceTextureSetHead = 0xCF,
		kMaleFaceTextureSetMouth = 0xD0,
		kMaleFaceTextureSetEyes = 0xD1,
		kFemaleFaceTextureSetHead = 0xD2,
		kFemaleFaceTextureSetMouth = 0xD3,
		kFemaleFaceTextureSetEyes = 0xD4,
		kImageSpaceModifierForInventoryMenu = 0xD5,
		kImageSpaceModifierForPipboyMenuInPowerArmor = 0xD6,
		kPackageTemplate = 0xD7,
		kMainMenuCell = 0xD8,
		kDefaultMovementTypeDefault = 0xD9,
		kDefaultMovementTypeSwim = 0xDA,
		kDefaultMovementTypeFly = 0xDB,
		kDefaultMovementTypeSneak = 0xDC,
		kKeywordSpecialFurniture = 0xDD,
		kKeywordFurnitureForces1stPerson = 0xDE,
		kKeywordFurnitureForces3rdPerson = 0xDF,
		kKeywordActivatorFurnitureNoPlayer = 0xE0,
		kTelekinesisGrabSound = 0xE1,
		kTelekinesisThrowSound = 0xE2,
		kWorldMapWeather = 0xE3,
		kHelpManualPC = 0xE4,
		kHelpManualXBox = 0xE5,
		kKeywordTypeAmmo = 0xE6,
		kKeywordTypeArmor = 0xE7,
		kKeywordTypeBook = 0xE8,
		kKeywordTypeIngredient = 0xE9,
		kKeywordTypeKey = 0xEA,
		kKeywordTypeMisc = 0xEB,
		kKeywordTypeSoulGem = 0xEC,
		kKeywordTypeWeapon = 0xED,
		kKeywordTypePotion = 0xEE,
		kBaseWeaponEnchantment = 0xEF,
		kBaseArmorEnchantment = 0xF0,
		kBasePotion = 0xF1,
		kBasePoison = 0xF2,
		kKeywordDragon = 0xF3,
		kKeywordMovable = 0xF4,
		kArtObjectAbsorbEffect = 0xF5,
		kWeaponMaterialList = 0xF6,
		kArmorMaterialList = 0xF7,
		kKeywordDisallowEnchanting = 0xF8,
		kFavortravelmarkerlocation = 0xF9,
		kTeammateReadyWeapon = 0xFA,
		kKeywordHoldLocation = 0xFB,
		kKeywordCivilWarOwner = 0xFC,
		kKeywordCivilWarNeutral = 0xFD,
		kLocRefTypeCivilWarSoldier = 0xFE,
		kKeywordClearableLocation = 0xFF,
		kLocRefTypeResourceDestructible = 0x100,
		kFormListHairColorList = 0x101,
		kComplexSceneObject = 0x102,
		kKeywordReusableSoulGem = 0x103,
		kKeywordAnimal = 0x104,
		kKeywordDaedra = 0x105,
		kKeywordRobot = 0x106,
		kKeywordNirnroot = 0x107,
		kFightersGuildFaction = 0x108,
		kMagesGuildFaction = 0x109,
		kThievesGuildFaction = 0x10A,
		kDarkBrotherhoodFaction = 0x10B,
		kJarlFaction = 0x10C,
		kBunnyFaction = 0x10D,
		kPlayerIsVampireVariable = 0x10E,

		kRoadMarker = 0x110,
		kKeywordScaleActorTo10 = 0x111,
		kKeywordVampire = 0x112,
		kKeywordForge = 0x113,
		kKeywordCookingPot = 0x114,
		kKeywordSmelter = 0x115,
		kKeywordTanningRack = 0x116,
		kHelpBasicLockpickingPC = 0x117,
		kHelpBasicLockpickingConsole = 0x118,
		kHelpBasicForging = 0x119,
		kHelpBasicCooking = 0x11A,
		kHelpBasicSmelting = 0x11B,
		kHelpBasicTanning = 0x11C,
		kHelpBasicObjectCreation = 0x11D,
		kHelpBasicEnchanting = 0x11E,
		kHelpBasicSmithingWeapon = 0x11F,
		kHelpBasicSmithingArmor = 0x120,
		kHelpBasicAlchemy = 0x121,
		kHelpBarter = 0x122,
		kHelpLevelingup = 0x123,
		kHelpSkillsMenu = 0x124,
		kHelpMapMenu = 0x125,
		kHelpJournal = 0x126,
		kHelpLowHealth = 0x127,
		kHelpLowMagicka = 0x128,
		kHelpLowStamina = 0x129,
		kHelpJail = 0x12A,
		kHelpTeamateFavor = 0x12B,
		kHelpWeaponCharge = 0x12C,
		kHelpFavorites = 0x12D,
		kKinectHelpFormList = 0x12E,
		kImagespaceLoadscreen = 0x12F,
		kKeywordWeaponMaterialDaedric = 0x130,
		kKeywordWeaponMaterialDraugr = 0x131,
		kKeywordWeaponMaterialDraugrHoned = 0x132,
		kKeywordWeaponMaterialDwarven = 0x133,
		kKeywordWeaponMaterialEbony = 0x134,
		kKeywordWeaponMaterialElven = 0x135,
		kKeywordWeaponMaterialFalmer = 0x136,
		kKeywordWeaponMaterialFalmerHoned = 0x137,
		kKeywordWeaponMaterialGlass = 0x138,
		kKeywordWeaponMaterialImperial = 0x139,
		kKeywordWeaponMaterialIron = 0x13A,
		kKeywordWeaponMaterialOrcish = 0x13B,
		kKeywordWeaponMaterialSteel = 0x13C,
		kKeywordWeaponMaterialWood = 0x13D,
		kKeywordWeaponTypeBoundArrow = 0x13E,
		kKeywordArmorMaterialDaedric = 0x13F,
		kKeywordArmorMaterialDragonplate = 0x140,
		kKeywordArmorMaterialDragonscale = 0x141,
		kKeywordArmorMaterialDragonbone = 0x142,
		kKeywordArmorMaterialDwarven = 0x143,
		kKeywordArmorMaterialEbony = 0x144,
		kKeywordArmorMaterialElven = 0x145,
		kKeywordArmorMaterialElvenSplinted = 0x146,
		kKeywordArmorMaterialFullLeather = 0x147,
		kKeywordArmorMaterialGlass = 0x148,
		kKeywordArmorMaterialHide = 0x149,
		kKeywordArmorMaterialImperial = 0x14A,
		kKeywordArmorMaterialImperialHeavy = 0x14B,
		kKeywordArmorMaterialImperialReinforced = 0x14C,
		kKeywordArmorMaterialIron = 0x14D,
		kKeywordArmorMaterialIronBanded = 0x14E,
		kKeywordArmorMaterialOrcish = 0x14F,
		kKeywordArmorMaterialScaled = 0x150,
		kKeywordArmorMaterialSteel = 0x151,
		kKeywordArmorMaterialSteelPlate = 0x152,
		kKeywordArmorMaterialStormcloak = 0x153,
		kKeywordArmorMaterialStudded = 0x154,
		kKeywordGenericCraftableKeyword01 = 0x155,
		kKeywordGenericCraftableKeyword02 = 0x156,
		kKeywordGenericCraftableKeyword03 = 0x157,
		kKeywordGenericCraftableKeyword04 = 0x158,
		kKeywordGenericCraftableKeyword05 = 0x159,
		kKeywordGenericCraftableKeyword06 = 0x15A,
		kKeywordGenericCraftableKeyword07 = 0x15B,
		kKeywordGenericCraftableKeyword08 = 0x15C,
		kKeywordGenericCraftableKeyword09 = 0x15D,
		kKeywordGenericCraftableKeyword10 = 0x15E,
		kKeywordnullptrMOD = 0x15F,
		kKeywordJewelry = 0x160,
		kKeywordCuirass = 0x161,
		kLocalMapHidePlane = 0x162,
		kSnowLODMaterial = 0x163,
		kSnowLODMaterialHD = 0x164,
		kDialogueImagespace = 0x165,
		kDialogueFollowerQuest = 0x166,
		kPotentialFollowerFaction = 0x167,

		kVampireAvailablePerks = 0x169,

		kVampireRace = 0x16B,
		kVampireSpells = 0x16C,
		kKeywordMount = 0x16D,
		kVerletCape = 0x16E,
		kFurnitureTestNPC = 0x16F,
		kKeywordConditionalExplosion = 0x170,
		kDefaultLight1 = 0x171,
		kDefaultLight2 = 0x172,
		kDefaultLight3 = 0x173,
		kDefaultLight4 = 0x174,
		kPipboyLight = 0x175,
		kActionBeginLoopingActivate = 0x176,
		kActionEndLoopingActivate = 0x177,
		kWorkshopPlayerOwnership = 0x178,
		kQuestMarkerFollower = 0x179,
		kQuestMarkerLocation = 0x17A,
		kQuestMarkerEnemy = 0x17B,
		kQuestMarkerEnemyAbove = 0x17C,
		kQuestMarkerEnemyBelow = 0x17D,
		kWorkshopMiscItemKeyword = 0x17E,
		kHeavyWeaponItemKeyword = 0x17F,
		kMineItemKeyword = 0x180,
		kGrenadeItemKeyword = 0x181,
		kChemItemKeyword = 0x182,
		kAlcoholItemKeyword = 0x183,
		kFoodItemKeyword = 0x184,
		kRepairKitItemKeyword = 0x185,
		kMedbagitemKeyword = 0x186,
		kGlovesitemKeyword = 0x187,
		kHelmetitemkeyword = 0x188,
		kClothesitemkeyword = 0x189,

		kTotal
	};

	enum class DEFAULT_OBJECT_TYPE
	{
		kMisc = 0x0,
		kFacegen = 0x1,
		kMovement = 0x2,
		kActions = 0x3,
		kItems = 0x4,
		kSounds = 0x5,
		kKeywords = 0x6
	};

	struct DEFAULT_OBJECT_DATA
	{
	public:
		// members
		const char*                                     name;           // 00
		ENUM_FORM_ID									type;           // 08
		std::uint32_t                                   uniqueID;       // 0C
		REX::EnumSet<DEFAULT_OBJECT_TYPE, std::int32_t> doType;         // 10
		const char*                                     newObjectName;  // 18
	};
	static_assert(sizeof(DEFAULT_OBJECT_DATA) == 0x20);

	[[nodiscard]] inline std::span<DEFAULT_OBJECT_DATA, 394> GetDefaultObjectData()
	{
		static REL::Relocation<DEFAULT_OBJECT_DATA(*)[394]> data{ REL::ID(838886) };
		return { *data };
	}

	class __declspec(novtable) BGSDefaultObjectManager :
		public TESForm,                                       // 00
		public BSTSingletonImplicit<BGSDefaultObjectManager>  // 20
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSDefaultObjectManager };
		static constexpr auto VTABLE{ VTABLE::BGSDefaultObjectManager };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kDOBJ };

		[[nodiscard]] static BGSDefaultObjectManager* GetSingleton()
		{
			using func_t = decltype(&BGSDefaultObjectManager::GetSingleton);
			static REL::Relocation<func_t> func{ REL::ID(484974) };
			return func();
		}

		[[nodiscard]] TESForm* GetDefaultObject(DEFAULT_OBJECT a_obj) const noexcept
		{
			assert(a_obj < DEFAULT_OBJECT::kTotal);
			return objectInitArray[std::to_underlying(a_obj)] ?
			           objectArray[std::to_underlying(a_obj)] :
			           nullptr;
		}

		template <class T>
		[[nodiscard]] T* GetDefaultObject(DEFAULT_OBJECT a_obj) const  //
			requires(std::derived_from<T, TESForm> &&
					 !std::is_pointer_v<T> &&
					 !std::is_reference_v<T>)
		{
			const auto obj = GetDefaultObject(a_obj);
			return obj ? obj->As<T>() : nullptr;
		}

		// members
		TESForm* objectArray[std::to_underlying(DEFAULT_OBJECT::kTotal)];      // 020
		bool     objectInitArray[std::to_underlying(DEFAULT_OBJECT::kTotal)];  // C70
	};
	static_assert(sizeof(BGSDefaultObjectManager) == 0xE00);

	class __declspec(novtable) BGSDefaultObject :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSDefaultObject };
		static constexpr auto VTABLE{ VTABLE::BGSDefaultObject };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kDFOB };

		BGSDefaultObject(const char* a_name, ENUM_FORM_ID a_formType, const char* a_description)
		{
			ctor(a_name, a_formType, a_description);
		}

		[[nodiscard]] static BSTArray<BGSDefaultObject*>* GetSingleton()
		{
			static REL::Relocation<BSTArray<BGSDefaultObject*>**> singleton{ REL::ID(2690473) };
			return *singleton;
		}

		template <class T = TESForm>
		[[nodiscard]] T* GetForm()
		{
			return form ? form->As<T>() : nullptr;
		}

		// members
		TESForm*                                 form;          // 20
		ENUM_FORM_ID							 type;          // 28
		BSFixedString                            formEditorID;  // 30

	private:
		BGSDefaultObject* ctor(const char* a_name, ENUM_FORM_ID a_formType, const char* a_description)
		{
			using func_t = decltype(&BGSDefaultObject::ctor);
			static REL::Relocation<func_t> func{ REL::ID(2197003) };
			return func(this, a_name, a_formType, a_description);
		}
	};
	static_assert(sizeof(BGSDefaultObject) == 0x38);
}
