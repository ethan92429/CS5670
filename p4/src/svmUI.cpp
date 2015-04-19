// generated by Fast Light User Interface Designer (fluid) version 1.0010
#pragma warning(disable : 4996)

#include "svmUI.h"

inline void svmUI::cb_Open_i(Fl_Menu_*, void*) {
  imgView->OpenImage();
}
void svmUI::cb_Open(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_Open_i(o,v);
}

inline void svmUI::cb_Open1_i(Fl_Menu_*, void*) {
  imgView->OpenModel();
}
void svmUI::cb_Open1(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_Open1_i(o,v);
}

inline void svmUI::cb_Save_i(Fl_Menu_*, void*) {
  imgView->SaveModel();
}
void svmUI::cb_Save(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_Save_i(o,v);
}

inline void svmUI::cb_Save1_i(Fl_Menu_*, void*) {
  imgView->SaveVRML();
}
void svmUI::cb_Save1(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_Save1_i(o,v);
}

inline void svmUI::cb_Save2_i(Fl_Menu_*, void*) {
  imgView->unwrapBoxes();
}
void svmUI::cb_Save2(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_Save2_i(o,v);
}

inline void svmUI::cb_Exit_i(Fl_Menu_*, void*) {
  imgView->HideAll();
hide();
}
void svmUI::cb_Exit(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_Exit_i(o,v);
}

inline void svmUI::cb_editPoint_i(Fl_Menu_*, void*) {
  imgView->SetEditMode(EDIT_POINT);
}
void svmUI::cb_editPoint(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_editPoint_i(o,v);
}

inline void svmUI::cb_editXLine_i(Fl_Menu_*, void*) {
  imgView->SetEditMode(EDIT_XLINE);
}
void svmUI::cb_editXLine(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_editXLine_i(o,v);
}

inline void svmUI::cb_editYLine_i(Fl_Menu_*, void*) {
  imgView->SetEditMode(EDIT_YLINE);
}
void svmUI::cb_editYLine(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_editYLine_i(o,v);
}

inline void svmUI::cb_editZLine_i(Fl_Menu_*, void*) {
  imgView->SetEditMode(EDIT_ZLINE);
}
void svmUI::cb_editZLine(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_editZLine_i(o,v);
}

inline void svmUI::cb_editOLine_i(Fl_Menu_*, void*) {
  imgView->SetEditMode(EDIT_OLINE);
}
void svmUI::cb_editOLine(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_editOLine_i(o,v);
}

inline void svmUI::cb_editPly_i(Fl_Menu_*, void*) {
  imgView->SetEditMode(EDIT_POLYGON);
}
void svmUI::cb_editPly(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_editPly_i(o,v);
}

// inline void svmUI::cb_editYZRect_i(Fl_Menu_*, void*) {
//   imgView->SetEditMode(EDIT_YZRECT);
// }
// void svmUI::cb_editYZRect(Fl_Menu_* o, void* v) {
//   ((svmUI*)(o->parent()->user_data()))->cb_editYZRect_i(o,v);
// }

inline void svmUI::cb_editXZRect_i(Fl_Menu_*, void*) {
  imgView->SetEditMode(EDIT_XZRECT);
}
void svmUI::cb_editXZRect(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_editXZRect_i(o,v);
}

// inline void svmUI::cb_editXYRect_i(Fl_Menu_*, void*) {
//   imgView->SetEditMode(EDIT_XYRECT);
// }
// void svmUI::cb_editXYRect(Fl_Menu_* o, void* v) {
//   ((svmUI*)(o->parent()->user_data()))->cb_editXYRect_i(o,v);
// }

inline void svmUI::cb_editSweep_i(Fl_Menu_*, void*) {
  imgView->SetEditMode(EDIT_SWEEP);
}
void svmUI::cb_editSweep(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_editSweep_i(o,v);
}

inline void svmUI::cb_drawPoint_i(Fl_Menu_*, void*) {
  imgView->SetDrawMode(DRAW_POINT,drawPoint->value());
}
void svmUI::cb_drawPoint(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_drawPoint_i(o,v);
}

inline void svmUI::cb_drawLine_i(Fl_Menu_*, void*) {
  imgView->SetDrawMode(DRAW_LINE,drawLine->value());
}
void svmUI::cb_drawLine(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_drawLine_i(o,v);
}

inline void svmUI::cb_drawPly_i(Fl_Menu_*, void*) {
  imgView->SetDrawMode(DRAW_POLYGON,drawPly->value());
}
void svmUI::cb_drawPly(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_drawPly_i(o,v);
}

inline void svmUI::cb_draw3D_i(Fl_Menu_*, void*) {
    printf("draw3D->value() = %d\n", draw3D->value());
  imgView->SetDrawMode(DRAW_3D,draw3D->value());
}
void svmUI::cb_draw3D(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_draw3D_i(o,v);
}

inline void svmUI::cb_computeVps_i(Fl_Menu_*, void*) {
  imgView->computeVanishingPoints();
}
void svmUI::cb_computeVps(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_computeVps_i(o,v);
}

/*** added for winter 2003 begin ***/
inline void svmUI::cb_computeRefHomography_i(Fl_Menu_*, void*) {
  imgView->computeRefHomography();
}
void svmUI::cb_computeRefHomography(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_computeRefHomography_i(o,v);
}
/*** added for winter 2003 end ***/

inline void svmUI::cb_sameZPlane_i(Fl_Menu_*, void*) {
  imgView->sameZPlane();
}
void svmUI::cb_sameZPlane(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_sameZPlane_i(o,v);
}

inline void svmUI::cb_sameXY_i(Fl_Menu_*, void*) {
  imgView->sameXY();
}
void svmUI::cb_sameXY(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_sameXY_i(o,v);
}

inline void svmUI::cb_computeCamPos_i(Fl_Menu_*, void*) {
  imgView->computeCameraParameters();
}
void svmUI::cb_computeCamPos(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_computeCamPos_i(o,v);
}

inline void svmUI::cb_invertScene_i(Fl_Menu_*, void*) {
    const char *zScale_str = fl_input("Please enter the Z scale factor");
    
    if (zScale_str) {  
        double zScale = atof(zScale_str);
        imgView->invertScene(zScale);
    }
}

void svmUI::cb_invertScene(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_invertScene_i(o,v);
}

/*
inline void svmUI::cb_samePlane_i(Fl_Menu_*, void*) {
  imgView->samePlane();
}
void svmUI::cb_samePlane(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_samePlane_i(o,v);
}
*/

inline void svmUI::cb_guideLines_i(Fl_Menu_*, void*) {
  imgView->setGuideLines(guideLines->value());
}
void svmUI::cb_guideLines(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_guideLines_i(o,v);
}

inline void svmUI::cb_About_i(Fl_Menu_*, void*) {
  imgView->AboutMe();
}
void svmUI::cb_About(Fl_Menu_* o, void* v) {
  ((svmUI*)(o->parent()->user_data()))->cb_About_i(o,v);
}

Fl_Menu_Item svmUI::menu_mainMenu[] = {
 {"&File", 0,  0, 0, 64, 0, 0, 14, 0},
 {"Open &Image", 0,  (Fl_Callback*)svmUI::cb_Open, 0, 0, 0, 0, 14, 0},
 {"&Open Model", 0,  (Fl_Callback*)svmUI::cb_Open1, 0, 0, 0, 0, 14, 0},
 {"&Save Model", 0,  (Fl_Callback*)svmUI::cb_Save, 0, 0, 0, 0, 14, 0},
 {"Save &VRML", 0,  (Fl_Callback*)svmUI::cb_Save1, 0, 0, 0, 0, 14, 0},
 {"Save &unwrapped model", 0, (Fl_Callback*)svmUI::cb_Save2, 0, 0, 0, 0, 14, 0},
 {"&Exit", 0,  (Fl_Callback*)svmUI::cb_Exit, 0, 0, 0, 0, 14, 0},
 {0},
 {"&Edit", 0,  0, 0, 64, 0, 0, 14, 0},
 {"&Point", 0,  (Fl_Callback*)svmUI::cb_editPoint, 0, 8, 0, 0, 14, 1},
 {"&X Line", 0,  (Fl_Callback*)svmUI::cb_editXLine, 0, 8, 0, 0, 14, 1},
 {"&Y Line", 0,  (Fl_Callback*)svmUI::cb_editYLine, 0, 8, 0, 0, 14, 1},
 {"&Z Line", 0,  (Fl_Callback*)svmUI::cb_editZLine, 0, 8, 0, 0, 14, 1},
 {"&Other Line", 0,  (Fl_Callback*)svmUI::cb_editOLine, 0, 8, 0, 0, 14, 1},
 {"Poly&gon", 0,  (Fl_Callback*)svmUI::cb_editPly, 0, 8, 0, 0, 14, 1},
 {"XZ &Rectangle", 0,  (Fl_Callback*)svmUI::cb_editXZRect, 0, 8, 0, 0, 14, 1},
// {"YZ R&ectangle", 0,  (Fl_Callback*)svmUI::cb_editYZRect, 0, 8, 0, 0, 14, 1},
// {"XY Re&ctangle", 0,  (Fl_Callback*)svmUI::cb_editXYRect, 0, 8, 0, 0, 14, 1},
 {"&Sweep rectangle", 0,  (Fl_Callback*)svmUI::cb_editSweep, 0, 8, 0, 0, 14, 1},
 {0},
 {"&Draw", 0,  0, 0, 64, 0, 0, 14, 0},
 {"&Points", 0,  (Fl_Callback*)svmUI::cb_drawPoint, 0, 2, 0, 0, 14, 4},
 {"&Lines", 0,  (Fl_Callback*)svmUI::cb_drawLine, 0, 2, 0, 0, 14, 4},
 {"Poly&gons", 0,  (Fl_Callback*)svmUI::cb_drawPly, 0, 2, 0, 0, 14, 4},
 {"3D &Model", 0,  (Fl_Callback*)svmUI::cb_draw3D, 0, 2, 0, 0, 14, 4},
 {0},
 {"&Tools", 0,  0, 0, 64, 0, 0, 14, 0},
 {"Compute &VPs", 0,  (Fl_Callback*)svmUI::cb_computeVps, 0, 0, 0, 0, 14, 0},
 {"Compute &Homography", 0,  (Fl_Callback*)svmUI::cb_computeRefHomography, 0, 0, 0, 0, 14, 0},
 {"Same &Z Plane", 0x4007a,  (Fl_Callback*)svmUI::cb_sameZPlane, 0, 0, 0, 0, 14, 0},
 {"Same &XY", 0x40078,  (Fl_Callback*)svmUI::cb_sameXY, 0, 128, 0, 0, 14, 0},
 {"Compute &Camera Params", 0,  (Fl_Callback*)svmUI::cb_computeCamPos, 0, 128, 0, 0, 14, 0},
 {"&Invert scene", 0,  (Fl_Callback*)svmUI::cb_invertScene, 0, 128, 0, 0, 14, 0},
 // {"Same &Plane", 0x40070,  (Fl_Callback*)svmUI::cb_samePlane, 0, 128, 0, 0, 14, 0},
 {"&Guidelines", 0x40067,  (Fl_Callback*)svmUI::cb_guideLines, 0, 2, 0, 0, 14, 0},
 {0},
 {"&Help", 0,  0, 0, 64, 0, 0, 14, 0},
 {"&About my single view modeler?", 0,  (Fl_Callback*)svmUI::cb_About, 0, 0, 0, 0, 14, 0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0},
 {0}
};
Fl_Menu_Item* svmUI::editPoint = svmUI::menu_mainMenu + 9;
Fl_Menu_Item* svmUI::editXLine = svmUI::menu_mainMenu + 10;
Fl_Menu_Item* svmUI::editYLine = svmUI::menu_mainMenu + 11;
Fl_Menu_Item* svmUI::editZLine = svmUI::menu_mainMenu + 12;
Fl_Menu_Item* svmUI::editOLine = svmUI::menu_mainMenu + 13;
Fl_Menu_Item* svmUI::editPly = svmUI::menu_mainMenu + 14;
// Fl_Menu_Item* svmUI::editYZRect = svmUI::menu_mainMenu + 14;
Fl_Menu_Item* svmUI::editXZRect = svmUI::menu_mainMenu + 15;
// Fl_Menu_Item* svmUI::editXYRect = svmUI::menu_mainMenu + 16;
Fl_Menu_Item* svmUI::editSweep = svmUI::menu_mainMenu + 16;
Fl_Menu_Item* svmUI::drawPoint = svmUI::menu_mainMenu + 19;
Fl_Menu_Item* svmUI::drawLine = svmUI::menu_mainMenu + 20;
Fl_Menu_Item* svmUI::drawPly = svmUI::menu_mainMenu + 21;
Fl_Menu_Item* svmUI::draw3D = svmUI::menu_mainMenu + 22;
Fl_Menu_Item* svmUI::computeVps = svmUI::menu_mainMenu + 25;
//Fl_Menu_Item* svmUI::sameZPlane = svmUI::menu_mainMenu + 23;
//Fl_Menu_Item* svmUI::sameXY = svmUI::menu_mainMenu + 24;
//Fl_Menu_Item* svmUI::samePlane = svmUI::menu_mainMenu + 25;
//Fl_Menu_Item* svmUI::guideLines = svmUI::menu_mainMenu + 26;
Fl_Menu_Item* svmUI::computeHomography = svmUI::menu_mainMenu + 26;
Fl_Menu_Item* svmUI::sameZPlane = svmUI::menu_mainMenu + 27;
Fl_Menu_Item* svmUI::sameXY = svmUI::menu_mainMenu + 28;
Fl_Menu_Item* svmUI::computeCamPos = svmUI::menu_mainMenu + 29;
Fl_Menu_Item* svmUI::invertScene = svmUI::menu_mainMenu + 30;
//Fl_Menu_Item* svmUI::samePlane = svmUI::menu_mainMenu + 26;
Fl_Menu_Item* svmUI::guideLines = svmUI::menu_mainMenu + 31;

svmUI::svmUI() {
  Fl_Window* w;
  { Fl_Window* o = mainWindow = new Fl_Window(864, 687, "Single View Metrology User Interface");
    w = o;
    o->user_data((void*)(this));
    mouseInfo = new Fl_Output(92, 659, 772, 28, "mouse status:");
    { Fl_Menu_Bar* o = mainMenu = new Fl_Menu_Bar(0, 0, 864, 28);
      o->menu(menu_mainMenu);
    }
    { ImgView* o = imgView = new ImgView(0, 29, 864, 628);
      o->box(FL_DOWN_BOX);
      //w->focus(imgView); // dch
    }
    o->end();
  }
  imgView->svmui = this;
	mainWindow->resizable(imgView);
}

void svmUI::show() {
  mainWindow->show();
}

void svmUI::hide() {
  mainWindow->hide();
}