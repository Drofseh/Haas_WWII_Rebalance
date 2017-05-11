 class fow_10Rnd_303 : CA_Magazine {
  descriptionShort = ".303 British, 10 Rounds, for use in the Lee Enfield";
  displayName = "Lee Enfield 10 Round Clip (FOW)";
  };

 class fow_15Rnd_762x33 : CA_Magazine {
  descriptionShort = ".30 Carbine, 15 Rounds, for use in the M1 Carbine";
  displayName = "M1 Carbine 15 Round Magazine (FOW)";
  };
  class fow_30Rnd_762x33_2PzD : fow_15Rnd_762x33 {
   count = 30;
   descriptionShort = ".30 Carbine, 30 Rounds, for use in the M2 Carbine";
   displayName = "M2 Carbine 30 Round Magazine (FOW)";
   mass = 11;
   };

 class fow_20Rnd_762x63 : CA_Magazine {
  descriptionShort = ".30-06, 20 Rounds, for use in the M1918A2 BAR";
  displayName = "M1918A2 BAR 20 Round Magazine (FOW)";
  };

 class fow_30Rnd_762x63 : CA_Magazine {
  descriptionShort = ".30-06, 30 Rounds, for use in the M1919 Machine Gun";
  displayName = "M1919 30 Round Magazine (FOW)";
  };

 class fow_30Rnd_303_bren : CA_Magazine {
  descriptionShort = ".303 British, 30 Rounds, for use in the Bren Gun";
  displayName = "Bren Gun 30 Round Magazine (FOW)";
  lastRoundsTracer = 3;
  tracersEvery = 3;
  };

 class fow_30Rnd_45acp : CA_Magazine {
  descriptionShort = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun, which is not right";
  displayName = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun";
  };
  class fow_30Rnd_45acp_T : fow_30Rnd_45acp {
   descriptionShort = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun, which is not right";
   displayName = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun";
   };
  class fow_20Rnd_45acp_M1_2PzD : fow_30Rnd_45acp {
   count = 20;
   descriptionShort = ".45 ACP, 20 Rounds, for use in the M1A1 Thompson";
   displayName = "M1A1 Thompson 20 Round Magazine (FOW)";
   };
  class fow_20Rnd_45acp_T_M1_2PzD : fow_30Rnd_45acp_T {
   count = 20;
   descriptionShort = ".45 ACP (T), 20 Rounds, for use in the M1A1 Thompson";
   displayName = "M1A1 Thompson 20 Round Tracer Magazine (FOW)";
   };
  class fow_30Rnd_45acp_M1_2PzD : fow_30Rnd_45acp {
   descriptionShort = ".45 ACP, 30 Rounds, for use in the M1A1 Thompson";
   displayName = "M1A1 Thompson 30 Round Magazine (FOW)";
   };
  class fow_30Rnd_45acp_T_M1_2PzD : fow_30Rnd_45acp_T {
   count = 20;
   descriptionShort = ".45 ACP (T), 30 Rounds, for use in the M1A1 Thompson";
   displayName = "M1A1 Thompson 30 Round Tracer Magazine (FOW)";
   };
  class fow_30Rnd_45acp_M3_2PzD : fow_30Rnd_45acp {
   descriptionShort = ".45 ACP, 30 Rounds, for use in the M3 Grease Gun";
   displayName = "M3 Grease Gun 30 Round Magazine (FOW)";
   };
  class fow_30Rnd_45acp_T_M3_2PzD : fow_30Rnd_45acp_T {
   descriptionShort = ".45 ACP, 30 Rounds, for use in the M3 Grease Gun";
   displayName = "M3 Grease Gun 30 Round Tracer Magazine (FOW)";
   };

 class fow_30Rnd_77x58 : CA_Magazine {
  descriptionShort = "7.7x58mm, 30 Rounds, for use in the Type 99 LMG";
  displayName = "Type 99 LMG 30 Round Magazine (FOW)";
  };

 class fow_30Rnd_792x33 : CA_Magazine {
  descriptionShort = "7.92x33mm, 30 Rounds, for use in the StG44";
  displayName = "StG44 30 Round Magazine (FOW)";
  };

 class fow_32Rnd_8x22 : CA_Magazine {
  count = 30;
  descriptionShort = "8x22mm Nambu, 30 Rounds, for use in the Type 100 SMG";
  displayName = "Type 100 30 Round Magazine (FOW)";
  };

 class fow_32Rnd_9x19_mp40 : CA_Magazine {
  descriptionShort = "9x19mm, 32 Rounds, for use in the MP40";
  displayName = "MP40 32 Round Magazine (FOW)";
  };

 class fow_32Rnd_9x19_sten : CA_Magazine {
  descriptionShort = "9x19mm, 32 Rounds, for use in the Sten Gun";
  displayName = "Sten Gun 32 Round Magazine (FOW)";
  };

 class fow_50Rnd_792x57 : CA_Magazine {
  descriptionShort = "7.92x57mm, 50 Rounds, for use in the MG42";
  displayName = "MG42 50 Round Drum (FOW)";
  mass = 14.55;
  };
  class fow_250Rnd_792x57 : fow_50Rnd_792x57 {
   descriptionShort = "7.92x57mm, 250 Rounds, for use in the MG42";
   displayName = "MG42 250 Round Belt (FOW)";
   mass = 72.75;
   };

 class fow_50Rnd_M1919 : VehicleMagazine {
  ammo = "fow_B_762x63_Ball";
  descriptionShort = ".30-06, 50 Rounds, for use in the M1919 Machine Guns";
  displayName = "M1919 50 Round Belt (FOW)";
  initSpeed = 860;
  lastRoundsTracer = 3;
  mass = 14.55;
  tracersEvery = 3;
  };
  class fow_250Rnd_M1919 : fow_50Rnd_M1919 {
   descriptionShort = ".30-06, 250 Rounds, for use in the M1919 Machine Guns";
   displayName = "M1919 250 Round Belt (FOW)";
   initSpeed = 860;
   mass = 72.75;
   tracersEvery = 3;
   };
  class fow_200Rnd_M1919_2PzD : fow_250Rnd_M1919 {
   count = 200;
   descriptionShort = ".30-06, 200 Rounds, for use in the M1919 Machine Guns";
   displayName = "M1919 200 Round Belt (FOW)";
   initSpeed = 860;
   mass = 58.2;
   tracersEvery = 3;
   };
  class fow_150Rnd_M1919_2PzD : fow_250Rnd_M1919 {
   count = 150;
   descriptionShort = ".30-06, 150 Rounds, for use in the M1919 Machine Guns";
   displayName = "M1919 150 Round Belt (FOW)";
   initSpeed = 860;
   mass = 43.65;
   tracersEvery = 3;
   };
  class fow_100Rnd_M1919_2PzD : fow_250Rnd_M1919 {
   count = 100;
   descriptionShort = ".30-06, 100 Rounds, for use in the M1919 Machine Guns";
   displayName = "M1919 100 Round Belt (FOW)";
   initSpeed = 860;
   mass = 29.1;
   tracersEvery = 3;
   };

 class fow_5Rnd_77x58 : CA_Magazine {
  descriptionShort = "7.7x58mm, 5 Rounds, for use in the Type 99 Rifle";
  displayName = "Type 99 Rifle 5 Round Clip (FOW)";
  };

 class fow_5Rnd_792x57 : CA_Magazine {
  descriptionShort = "7.92x57mm, 5 Rounds, for use in the K98k";
  displayName = "K98k 5 Round Clip (FOW)";
  };

 class fow_8Rnd_762x63 : CA_Magazine {
  descriptionShort = ".30-06, 8 Rounds, for use in the M1 Garand";
  displayName = "M1 Garand, 8 Round Clip (FOW)";
  };