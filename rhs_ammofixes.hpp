
class B_545x39_SD: BulletBase
{
	hit = 8;
	indirectHit = 0;
	indirectHitRange = 0;
	visibleFire = 0.02;
	audibleFire = 0.07;
	visibleFireTime = 2;
	cost = 1;
	typicalSpeed = 900;
	airFriction = -0.001412;
	caliber = 0.5;
};

class B_9x18_Ball;

class B_9x19_Ball: B_9x18_Ball
{
	hit = 7;
	cost = 5;
	typicalSpeed = 398;
	airFriction = -0.001513;
};