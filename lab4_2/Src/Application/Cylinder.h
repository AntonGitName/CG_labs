#pragma once
#include "TriangleObject.hpp"

class Cylinder :
    public TriangleObject<NORMALCOLORVERTEX, NORMALCOLORFVF>
{
public:
    Cylinder(LPDIRECT3DDEVICE9 d3ddev, const D3DXVECTOR3& center, const D3DXVECTOR3& orientation, float radius, float height, D3DXCOLOR color);
    D3DXVECTOR3 getCenter() {
        return m_center;
    }
private:
    D3DXVECTOR3 m_center;
};

