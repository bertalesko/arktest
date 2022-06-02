#pragma once
// your code here
#include <cstdint>

#define UCONST_PI 3.1415926
#define RadianToURotation 180.0f / UCONST_PI


struct Vector3
{
public:
	Vector3() : x(0.f), y(0.f), z(0.f) {}
	Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
	~Vector3() {}

	float x;
	float y;
	float z;

	inline float Dot(Vector3 v)
	{
		return x * v.x + y * v.y + z * v.z;
	}

	inline float Distance(Vector3 v)
	{
		return float(sqrtf(powf(v.x - x, 2.0) + powf(v.y - y, 2.0) + powf(v.z - z, 2.0)));
	}

	inline float ADistance(Vector3 src, Vector3 dst)
	{
		Vector3 diff = Subtract(src, dst);
		return Magnitude(diff);
	}

	Vector3 operator+(Vector3 v)
	{
		return Vector3(x + v.x, y + v.y, z + v.z);
	}

	Vector3 operator-(Vector3 v)
	{
		return Vector3(x - v.x, y - v.y, z - v.z);
	}
	inline float Length()
	{
		return sqrtf((x * x) + (y * y) + (z * z));
	}
	inline Vector3 Subtract(Vector3 src, Vector3 dst)
	{
		Vector3 diff;
		diff.x = src.x - dst.x;
		diff.y = src.y - dst.y;
		diff.z = src.z - dst.z;
		return diff;
	}
	float Magnitude(Vector3 vec)
	{
		return sqrtf(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
	}



};


struct Vector2
{
public:
	float x;
	float y;
	Vector2() : x(0), y(0) {}
	Vector2(float x, float y) : x(x), y(y) {}
	~Vector2() {}

	inline float Distance(Vector2 v)
	{
		return sqrtf(((v.x - x) * (v.x - x) + (v.y - y) * (v.y - y)));
	}
	inline Vector2 operator+(const Vector2& v) const
	{
		return Vector2(x + v.x, y + v.y);
	}
	inline Vector2 operator-(const Vector2& v) const
	{
		return Vector2(x - v.x, y - v.y);
	}



};



struct RGBA
{
	DWORD R;
	DWORD G;
	DWORD B;
	DWORD A;
};

struct Color
{
public:
	RGBA red = { 255,0,0,255 };
	RGBA Magenta = { 255,0,255,255 };
	RGBA yellow = { 255,255,0,255 };
	RGBA grayblue = { 128,128,255,255 };
	RGBA green = { 128,224,0,255 };
	RGBA darkgreen = { 0,224,128,255 };
	RGBA brown = { 192,96,0,255 };
	RGBA pink = { 255,168,255,255 };
	RGBA DarkYellow = { 216,216,0,255 };
	RGBA SilverWhite = { 236,236,236,255 };
	RGBA purple = { 144,0,255,255 };
	RGBA Navy = { 88,48,224,255 };
	RGBA skyblue = { 0,136,255,255 };
	RGBA graygreen = { 128,160,128,255 };
	RGBA blue = { 0,96,192,255 };
	RGBA orange = { 255,128,0,255 };
	RGBA peachred = { 255,80,128,255 };
	RGBA reds = { 255,128,192,255 };
	RGBA darkgray = { 96,96,96,255 };
	RGBA Navys = { 0,0,128,255 };
	RGBA darkgreens = { 0,128,0,255 };
	RGBA darkblue = { 0,128,128,255 };
	RGBA redbrown = { 128,0,0,255 };
	RGBA purplered = { 128,0,128,255 };
	RGBA greens = { 0,255,0,255 };
	RGBA envy = { 0,255,255,255 };
	RGBA black = { 0,0,0,255 };
	RGBA gray = { 128,128,128,255 };
	RGBA white = { 255,255,255,255 };
	RGBA blues = { 30,144,255,255 };
	RGBA lightblue = { 135,206,250,160 };
	RGBA Scarlet = { 220, 20, 60, 160 };
	RGBA white_ = { 255,255,255,200 };
	RGBA gray_ = { 128,128,128,200 };
	RGBA black_ = { 0,0,0,200 };
	RGBA red_ = { 255,0,0,200 };
	RGBA Magenta_ = { 255,0,255,200 };
	RGBA yellow_ = { 255,255,0,200 };
	RGBA grayblue_ = { 128,128,255,200 };
	RGBA green_ = { 128,224,0,200 };
	RGBA darkgreen_ = { 0,224,128,200 };
	RGBA brown_ = { 192,96,0,200 };
	RGBA pink_ = { 255,168,255,200 };
	RGBA darkyellow_ = { 216,216,0,200 };
	RGBA silverwhite_ = { 236,236,236,200 };
	RGBA purple_ = { 144,0,255,200 };
	RGBA Blue_ = { 88,48,224,200 };
	RGBA skyblue_ = { 0,136,255,200 };
	RGBA graygreen_ = { 128,160,128,200 };
	RGBA blue_ = { 0,96,192,200 };
	RGBA orange_ = { 255,128,0,200 };
	RGBA pinks_ = { 255,80,128,200 };
	RGBA Fuhong_ = { 255,128,192,200 };
	RGBA darkgray_ = { 96,96,96,200 };
	RGBA Navy_ = { 0,0,128,200 };
	RGBA darkgreens_ = { 0,128,0,200 };
	RGBA darkblue_ = { 0,128,128,200 };
	RGBA redbrown_ = { 128,0,0,200 };
	RGBA purplered_ = { 128,0,128,200 };
	RGBA greens_ = { 0,255,0,200 };
	RGBA envy_ = { 0,255,255,200 };
	RGBA glassblack = { 0, 0, 0, 160 };
	RGBA GlassBlue = { 65,105,225,80 };
	RGBA glassyellow = { 255,255,0,160 };
	RGBA glass = { 200,200,200,60 };
	RGBA Plum = { 221,160,221,160 };
};
inline Color Col;

struct TslEntity
{
	uint64_t CurrentActorApawn;
	uint64_t pObjPointer;
	uint64_t eObjPointer;
	uint64_t ObjPointer;
	uint64_t AStructureName;
	bool Structure;
	int ID;
	Vector3 RootPos;
	Vector3 RootPos1;
	uint64_t PlayerController;
	float Distance_Player;
	float Distance_Dino;
	float Distance_Structure;
	Vector2 ScreenStructurePos;
	int Is_NPC;
	int EspNum;
	int Player_Is_NPC;
	int Aim_Is_NPC;
	int Dino_Is_NPC;
	uint64_t Mesh;
	int Height;
	float Rank;
	float Rank1;
	Vector3 EnemyHeadLOC;
	Vector3 Aim_EnemyHeadLOC;
	Vector2 ScreenPos;
	Vector2 ScreenESPPos;
	Vector2 ScreenSESPPos;
	std::string Names;
	std::string StructureName;
	std::string PrimalName;
	Vector3 CameraPosition;
	Vector3 CameraRotation;
	Vector3 CameraCorrect;

	int ActorNum;
	int StructureID;
	float RankByAngleDistance;
	bool EnemyTeam = EnemyTeam;
	bool PlayerEnemyTeam = PlayerEnemyTeam;
	bool Ally = Ally;
	bool PlayerAlly = PlayerAlly;
	bool AutoTurret;
	bool HeavyTurret;
	bool Tek_Transmitter;

	//bool Enemy;
	//bool EnemySleeing;
	Vector3 EnemyHead2S;
	Vector3 Aim_EnemyHead2S;
	Vector3 LocaPlayerPitch;
};


