#ifndef __MYLAPP_H__632619789336566350
#define __MYLAPP_H__632619789336566350

/**
    @file     cglapp.h
    @brief    Class cglApp definition
    @date     Created on 10/09/2005
    @project  D3DBase
    @author   Bvs
*/

// *******************************************************************
// includes

#include "Library/cglApp.h"
#include "Library/cglD3D.h"

#include "Axis.h"
#include "Cylinder.h"
#include "Ground.h"
#include "Skeleton.h"
#include "ViewControl.h"
#include "RotationTransform.h"

#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <windowsx.h>
#include <zmouse.h>
#include <vector>
#include <string>
#include <memory>
#include <time.h>

#include <d3d9.h>
#include <d3dx9.h>

#pragma comment (lib, "d3d9.lib")
#pragma comment (lib, "d3dx9.lib")

// *******************************************************************
// defines & constants

// *******************************************************************
// classes 

// Application class
class myApp : public cglApp
{
public:
    // Constructor
    myApp(int nW, int nH, void* hInst, int nCmdShow);
    // Destructor
    virtual ~myApp() {}
    // This function performs input processing. Returns true if input is handled
    virtual bool processInput(unsigned int nMsg, int wParam, long lParam);

    virtual void renderInternal();

protected:
    virtual void update();
    
private:
    static const int MAX_KEYS = 128;

    int     m_nPrevMouseX;
    int     m_nPrevMouseY;
    bool    m_keysPressed[MAX_KEYS];
    
    void transformProjection();
    void createSkeleton();
    
    LPDIRECT3DDEVICE9                               m_d3ddev;
    std::vector<SPGObject>                          m_objects;
    std::shared_ptr<ViewControl>                    m_pViewControl;
};


// *******************************************************************
// functions 

#endif //__CGLAPP_H__632619789336566350
