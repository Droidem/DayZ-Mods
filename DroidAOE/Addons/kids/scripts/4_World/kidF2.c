class ZmbF_kid2: ZmbF_SkaterYoung_Base{  };

modded class ZmbF_kid2
{
    void ZmbF_kid2()
    {
        SetEventMask(EntityEvent.POSTFRAME);
    }
        
    override void EOnPostFrame(IEntity other, int extra)
    {
        float scale = 0.60;
        vector transform[4];
        GetTransform(transform);
        
        transform[0] = transform[0] * scale;
        transform[1] = transform[1] * scale;
        transform[2] = transform[2] * scale;
        
        SetTransform(transform);
        Update();
    }

    override void EOnFrame(IEntity other, float timeSlice) // | EntityEvent.FRAME
    {
        vector rotation = GetYawPitchRoll();
        SetYawPitchRoll(Vector(rotation[0], 0, 0));
    }
}
