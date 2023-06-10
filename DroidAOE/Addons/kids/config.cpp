////////////////////////////////////////////////////////////////////
//HUGE SHOUT OUT TO C7kizer FOR REPACKING AUTHORIZATION 
//https://steamcommunity.com/sharedfiles/filedetails/?id=2832590702
////////////////////////////////////////////////////////////////////

class CfgPatches
{
	class kids
	{
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Sounds_Effects"
		};
	};
};
class cfgVehicles
{
	class ZmbF_SkaterYoung_Striped;
	class ZmbF_SkaterYoung_Brown;
	class ZmbF_SkaterYoung_Violet;
	class ZmbM_SkaterYoung_Brown;
	class ZmbM_SkaterYoung_Green;
	class ZmbM_SkaterYoung_Grey;
	class ZmbF_kid: ZmbF_SkaterYoung_Striped
	{
		displayName="Infected";
	};
	class ZmbF_kid2: ZmbF_SkaterYoung_Brown
	{
		displayName="Infected";
	};
	class ZmbF_kid3: ZmbF_SkaterYoung_Violet
	{
		displayName="Infected";
	};
	class ZmbM_kid: ZmbM_SkaterYoung_Brown
	{
		displayName="Infected";
	};
	class ZmbM_kid2: ZmbM_SkaterYoung_Green
	{
		displayName="Infected";
	};
	class ZmbM_kid3: ZmbM_SkaterYoung_Grey
	{
		displayName="Infected";
	};
};
class CfgSoundSets
{
	class ZmbM_kid_CalmMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbM_kid_CalmMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbM_kid2_CalmMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbM_kid2_CalmMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbM_kid3_CalmMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbM_kid3_CalmMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbM_kid_CallToArmsShort_Soundset
	{
		soundShaders[]=
		{
			"ZmbM_kid_CallToArmsShort_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbM_kid2_CallToArmsShort_Soundset
	{
		soundShaders[]=
		{
			"ZmbM_kid2_CallToArmsShort_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbM_kid3_CallToArmsShort_Soundset
	{
		soundShaders[]=
		{
			"ZmbM_kid3_CallToArmsShort_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbM_kid_ChaseMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbM_kid_ChaseMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbM_kid2_ChaseMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbM_kid2_ChaseMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbM_kid3_ChaseMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbM_kid3_ChaseMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbF_kid_CalmMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbF_kid_CalmMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbF_kid2_CalmMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbF_kid2_CalmMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbF_kid3_CalmMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbF_kid3_CalmMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbF_kid_CallToArmsShort_Soundset
	{
		soundShaders[]=
		{
			"ZmbF_kid_CallToArmsShort_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbF_kid2_CallToArmsShort_Soundset
	{
		soundShaders[]=
		{
			"ZmbF_kid2_CallToArmsShort_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbF_kid3_CallToArmsShort_Soundset
	{
		soundShaders[]=
		{
			"ZmbF_kid3_CallToArmsShort_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbF_kid_ChaseMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbF_kid_ChaseMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbF_kid2_ChaseMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbF_kid2_ChaseMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
	class ZmbF_kid3_ChaseMove_Soundset
	{
		soundShaders[]=
		{
			"ZmbF_kid3_ChaseMove_SoundShader"
		};
		spatial=1;
		doppler=0;
		loop=0;
	};
};
class CfgSoundShaders
{
	class ZmbM_kid_CalmMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\boysidle",
				0.125
			},
			
			{
				"kids\fx\boysidle7",
				0.125
			},
			
			{
				"kids\fx\boysidle8",
				0.125
			},
			
			{
				"kids\fx\childidle1",
				0.125
			},
			
			{
				"kids\fx\childidle2",
				0.125
			},
			
			{
				"kids\fx\childidle3",
				0.125
			},
			
			{
				"kids\fx\childidle4",
				0.125
			},
			
			{
				"kids\fx\childidle5",
				0.125
			},
			
			{
				"kids\fx\childidle6",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbM_kid2_CalmMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\boysidle2",
				0.125
			},
			
			{
				"kids\fx\boysidle5",
				0.125
			},
			
			{
				"kids\fx\boysidle6",
				0.125
			},
			
			{
				"kids\fx\childidle1",
				0.125
			},
			
			{
				"kids\fx\childidle2",
				0.125
			},
			
			{
				"kids\fx\childidle3",
				0.125
			},
			
			{
				"kids\fx\childidle4",
				0.125
			},
			
			{
				"kids\fx\childidle5",
				0.125
			},
			
			{
				"kids\fx\childidle6",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbM_kid3_CalmMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\boysidle3",
				0.125
			},
			
			{
				"kids\fx\boysidle4",
				0.125
			},
			
			{
				"kids\fx\boysidle5",
				0.125
			},
			
			{
				"kids\fx\boysidle8",
				0.125
			},
			
			{
				"kids\fx\childidle1",
				0.125
			},
			
			{
				"kids\fx\childidle2",
				0.125
			},
			
			{
				"kids\fx\childidle3",
				0.125
			},
			
			{
				"kids\fx\childidle4",
				0.125
			},
			
			{
				"kids\fx\childidle5",
				0.125
			},
			
			{
				"kids\fx\childidle6",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbF_kid_CalmMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\childcry",
				0.125
			},
			
			{
				"kids\fx\girlsidle",
				0.125
			},
			
			{
				"kids\fx\girlsidle4",
				0.125
			},
			
			{
				"kids\fx\girlsidle8",
				0.125
			},
			
			{
				"kids\fx\girlsidle7",
				0.125
			},
			
			{
				"kids\fx\childidle2",
				0.125
			},
			
			{
				"kids\fx\childidle3",
				0.125
			},
			
			{
				"kids\fx\childidle4",
				0.125
			},
			
			{
				"kids\fx\childidle5",
				0.125
			},
			
			{
				"kids\fx\childidle6",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbF_kid2_CalmMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\girlsidle2",
				0.125
			},
			
			{
				"kids\fx\girlsidle6",
				0.125
			},
			
			{
				"kids\fx\girlsidle7",
				0.125
			},
			
			{
				"kids\fx\childidle1",
				0.125
			},
			
			{
				"kids\fx\childidle2",
				0.125
			},
			
			{
				"kids\fx\childidle3",
				0.125
			},
			
			{
				"kids\fx\childidle4",
				0.125
			},
			
			{
				"kids\fx\childidle5",
				0.125
			},
			
			{
				"kids\fx\childidle6",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbF_kid3_CalmMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\girlsidle3",
				0.125
			},
			
			{
				"kids\fx\childidle1",
				0.125
			},
			
			{
				"kids\fx\girlsidle5",
				0.125
			},
			
			{
				"kids\fx\girlsidle8",
				0.125
			},
			
			{
				"kids\fx\childidle2",
				0.125
			},
			
			{
				"kids\fx\childidle3",
				0.125
			},
			
			{
				"kids\fx\childidle4",
				0.125
			},
			
			{
				"kids\fx\childidle5",
				0.125
			},
			
			{
				"kids\fx\childidle6",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbM_kid_ChaseMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\boysscream",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbM_kid2_ChaseMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\boysscream2",
				0.125
			},
			
			{
				"kids\fx\boysgiggle",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbM_kid3_ChaseMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\boysscream3",
				0.125
			},
			
			{
				"kids\fx\boysgiggle2",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbF_kid_ChaseMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\girlsscream2",
				0.125
			},
			
			{
				"kids\fx\girlgiggle",
				0.125
			},
			
			{
				"kids\fx\girlgiggle2",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbF_kid2_ChaseMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\girlsscream3",
				0.125
			},
			
			{
				"kids\fx\girlsgiggle4",
				0.125
			}
		};
		volume=1;
		range=60;
	};
	class ZmbF_kid3_ChaseMove_SoundShader
	{
		samples[]=
		{
			
			{
				"kids\fx\girlsscream4",
				0.125
			},
			
			{
				"kids\fx\girlsgiggle3",
				0.125
			}
		};
		volume=1;
		range=60;
	};
};
class CfgMods
{
	class kids
	{
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"kids/scripts/4_World"
				};
			};
		};
	};
};
