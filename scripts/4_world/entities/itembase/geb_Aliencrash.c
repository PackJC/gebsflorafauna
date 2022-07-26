class geb_Aliencrash_ColorBase : CrashBase
{
	string 					m_DefaultMaterial;
	string 					m_GlowMaterial;
	
	AlienlightLight 			m_Light;
	//AlienlightLight 			m_Light2;
	
	private int				m_Efficiency0To10; // Synchronized variable
	static private float 	m_EfficiencyDecayStart = 0.05; // At this % of maximum energy the output of the light starts to weaken.

	//! Returns efficiency. The value is synchronized from server to all clients and is accurate down to 0.1 units.
	float GetEfficiency0To1()
	{
		return m_Efficiency0To10 / 10;
	}
	
	//! Returns efficiency. The value is synchronized from server to all clients and is accurate down to 0.1 units.
	float GetEfficiencyDecayStart()
	{
		return m_EfficiencyDecayStart;
	}
	
	override void OnEnergyConsumed()
	{
		super.OnEnergyConsumed();
		
		if ( GetGame().IsServer() )
		{
			float energy_coef = GetCompEM().GetEnergy0To1();
			
			if ( energy_coef < m_EfficiencyDecayStart  &&  m_EfficiencyDecayStart > 0 )
			{
				m_Efficiency0To10 = Math.Round(  (energy_coef / m_EfficiencyDecayStart) * 10  );
				SetSynchDirty();
			}
		}
	}
	
	void geb_Aliencrash_ColorBase()
	{
		m_Light = AlienlightLight.Cast( ScriptedLightBase.CreateLight( AlienlightLight, "0 0 0") );
		//m_Light2 = AlienlightLight.Cast( ScriptedLightBase.CreateLight( AlienlightLight, "0 0 0") );
		m_Light.AttachOnMemoryPoint(this, "light");
		//m_Light2.AttachOnMemoryPoint(this, "light1");
		m_Light.SetColorToGreen();
		//m_Light2.SetColorToGreen();
		//materials
		array<string> config_materials	= GetHiddenSelectionsMaterials();

		if (config_materials.Count() == 2)
		{
			m_DefaultMaterial = config_materials[0];
			m_GlowMaterial = config_materials[1];
		}
		else
		{
			string error = "Error! Item " + GetType() + " must have 2 entries in config array hiddenSelectionsMaterials[]. One for the default state, the other one for the glowing state. Currently it has " + config_materials.Count() + ".";
			Error(error);
		}
		
		m_Efficiency0To10 = 10;
		RegisterNetSyncVariableInt("m_Efficiency0To10");
	}
	
	void CreateLight()
	{

	}
	

	override void OnWork (float consumed_energy)
	{
		if (!m_Light)
			CreateLight();
		
		// Handle fade out of chemlight
		if (m_Light)
		{
			float efficiency = GetEfficiency0To1();
			
			if ( efficiency < 1 )
			{
				m_Light.SetIntensity( efficiency, GetCompEM().GetUpdateInterval() );
			}
		}
	}
	
};

class geb_Aliencrash: geb_Aliencrash_ColorBase {
	Particle m_ParticleEfx1 = Particle.PlayOnObject(ParticleList.SMOKING_HELI_WRECK, this, Vector(-0.5, 0, -1.0));
	Particle m_ParticleEfx2 = Particle.PlayOnObject(ParticleList.SMOKING_HELI_WRECK, this, Vector(-0.4, 0, -1.0));
	Particle m_ParticleEfx3 = Particle.PlayOnObject(ParticleList.TORCH_T1, this, Vector(0, -0.40,0));
	Particle m_ParticleEfx4 = Particle.PlayOnObject(ParticleList.TORCH_T1, this, Vector(1, -0.60,0.7));

};

