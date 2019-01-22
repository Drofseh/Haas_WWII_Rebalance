/*
class SwayDistortion {
    rate = 14;
    decay = 7;
    maximum = 10;
    gunnerCoef = 1.2;
};
*/
/*
class SightAlignment {
    rate = 0.1;
    decay = 1.8;
    maximum = 0.7;
    gunnerCoef = 0.2;
};
*/
class Stabilization {
    characterPoints[] = {"lElbow","rElbow"};
    deployBipodTime = 1;
    deployTime = 0.25; //0.2
    deployedCoef = 0.05;
    deployedProneCoef = 0.01;
    deployedRecoil = 0.1; //0.5
    deployedRecoilPersistent = 0;
    groundLimits[] = {0.139626,0.314159};
    objectLimits[] = {0.349066,0.837758};
    restingCoef = 0.3; //0.4
    restingProneCoef = 0.15; //0.08
    restingRecoil = 0.5; //0.5
    restingRecoilPersistent = 0.5; //0.5
    undeployBipodTime = 1;
    undeployTime = 0.25; //0.2
    upperBodyRadius = 0.3; //0.12
    weaponPoints[] = {"Usti hlavne","Konec hlavne"};
    weaponRadius = 0.4;
};
/*
class Recoil {
    kickVisual = 0.6;
    impulseCoef = 1;
    prone = 1.25;
};
*/
/*
class Camera {
    aimTransitionSpeed = 5;
};
*/
