#pragma once
// your code here
namespace Offsets {

	inline uint64_t UWorld = 0x46344c8;


	namespace Engine {
		namespace World {
			inline uint64_t OwningGameInstance = 0x240;
			inline uint64_t Levels = 0xA8;
		}

		namespace Level {
			inline uint64_t AActors = 0x88;
			inline uint64_t AActorsCount = 0x90;
		}

		namespace GameInstance {
			inline uint64_t LocalPlayers = 0x38;
		}

		namespace Player {
			inline uint64_t PlayerController = 0x30;
		}

		namespace Controller {
			inline uint64_t PlayerOffsetX = 0x0F0;
			inline uint64_t PlayerOffsetY = 0x0F4;
			inline uint64_t PlayerOffsetZ = 0x0F8;
			inline uint64_t ComponentVelocity = 0x01A4;
		}

		namespace PlayerController {
			inline uint64_t AcknowledgedPawn = 0x4D8; // 0x4D8
			inline uint64_t offsetYawAim = 0x49C;
			inline uint64_t offsetPitchAim = 0x498;

		}

		namespace Pawn {
			inline uint64_t PlayerState = 0x280;
			inline uint64_t Health = 0x924;
			inline uint64_t MaxHealth = 0x938;
			inline uint64_t BaseEyeHeight = 0x047C;
			inline uint64_t	TargetingTeam = 0x021C;
			inline uint64_t StructureOffsetX = 0x158;
			inline uint64_t StructureOffsetY = 0x15C;
			inline uint64_t StructureOffsetZ = 0x160;
			inline uint64_t StructureName = 0x4F0;
			inline uint64_t StructureNameLen = 0x4F8;
			inline uint64_t StructureMesh = 0x6B8;
			inline uint64_t StructureID = 0x8D8;
			inline uint64_t StructureContainerActivated = 0xAC8;
			inline uint64_t StructureCurrentItemCount = 0xBD4;
			inline uint64_t StructureIsPinLocked = 0xB20;
			inline uint64_t StructureNumBullets = 0xE78;

			inline uint64_t StructureTribeOwner = 0x8A8; // off actor

		}



		namespace PlayerState {
			inline uint64_t Names = 0x14B0;   // 0x0380;
		}

		namespace Actor {
			inline uint64_t RootComponent = 0x258;
			inline uint64_t Instigator = 0x0228;
			inline uint64_t APrimalChar = 0x0BF8;

			// ARK
			inline uint64_t IsNPC = 0x0950;
			inline uint64_t Owner = 0x8A8;
			inline uint64_t Tribe = 0x7A0;
		}

		namespace Character {
			inline uint64_t Mesh = 0x500;
			inline uint64_t ACharacter = 0x480;
			inline uint64_t UCharacterMovementComponent = 0x508;
			inline uint64_t MoveStartLocation = 0x2A4;

		}

		namespace SceneComponent {
			inline uint64_t RelativeLocation = 0;
			inline uint64_t ComponentVelocity = 0;
		}

		namespace StaticMeshComponent {
			inline uint64_t ComponentToWorld = 0xE0;
			inline uint64_t StaticMesh = 0;
		}

		namespace SkinnedMeshComponent {

			inline uint64_t CachedWorldSpaceBounds = 0x680;
			inline int HeadOffset = 8;
			inline int BodyOffset = 3;
			inline int FeetOffset = 91;
		}

		namespace PlayerCameraManager {
			inline uint64_t CameraManager = 0x4F8;
			inline uint64_t CameraTransform = 0x478; //
			inline uint64_t CameraCache = 0x04E0;
			inline uint64_t CurrentFov = 0x508;

			inline uint64_t Rotation = 0x4EC;
			inline uint64_t Location = 0x04E0;

		}
	}
}

namespace Managers {
	inline uint64_t EntityList = 0;
	inline uint64_t LocalPlayer = 0x00;
	inline uint64_t LocalPlayerControler = 0x00;
	inline uint64_t LocalCameraManager = 0x00;
	inline uint64_t MoveComponent = 0x00;
	inline uint64_t CameraCorrect = 0x00;
	namespace Base {
		inline uint64_t GWorld = 0;
		inline uint64_t PersistentLevel = 0;
		inline uint64_t OwningGameInstance = 0;
		inline uint64_t LocalPlayers = 0x0;

	}
}


