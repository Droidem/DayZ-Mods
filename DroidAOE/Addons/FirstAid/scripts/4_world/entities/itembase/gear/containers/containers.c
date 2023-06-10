class AOE_FirstAidKit extends Container_Base
{
    override bool CanReceiveItemIntoCargo( EntityAI item )
    {
        if ( item.IsInherited( AMS_Bandage ) )
        {
            return true;
        }

        return false;
    }

    override bool DamageItemInCargo( float damage )
    {
        return false;
    }
}