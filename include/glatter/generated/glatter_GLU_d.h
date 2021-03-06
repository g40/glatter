/*
Copyright 2017 Ioannis Makris

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// This file was generated by glatter.py script.



#ifdef GLATTER_GLU
#if defined(__glu_h__)
#if defined(__GLU_H__)
#define gluBeginCurve(nobj) glatter_gluBeginCurve_debug((nobj), __FILE__, __LINE__)
void glatter_gluBeginCurve_debug(GLUnurbs *nobj, const char* file, int line);
#define gluBeginPolygon(tess) glatter_gluBeginPolygon_debug((tess), __FILE__, __LINE__)
void glatter_gluBeginPolygon_debug(GLUtesselator *tess, const char* file, int line);
#define gluBeginSurface(nobj) glatter_gluBeginSurface_debug((nobj), __FILE__, __LINE__)
void glatter_gluBeginSurface_debug(GLUnurbs *nobj, const char* file, int line);
#define gluBeginTrim(nobj) glatter_gluBeginTrim_debug((nobj), __FILE__, __LINE__)
void glatter_gluBeginTrim_debug(GLUnurbs *nobj, const char* file, int line);
#define gluBuild1DMipmaps(target, components, width, format, type, data) glatter_gluBuild1DMipmaps_debug((target), (components), (width), (format), (type), (data), __FILE__, __LINE__)
int glatter_gluBuild1DMipmaps_debug(GLenum target, GLint components, GLint width, GLenum format, GLenum type, const void *data, const char* file, int line);
#define gluBuild2DMipmaps(target, components, width, height, format, type, data) glatter_gluBuild2DMipmaps_debug((target), (components), (width), (height), (format), (type), (data), __FILE__, __LINE__)
int glatter_gluBuild2DMipmaps_debug(GLenum target, GLint components, GLint width, GLint height, GLenum format, GLenum type, const void *data, const char* file, int line);
#define gluCylinder(qobj, baseRadius, topRadius, height, slices, stacks) glatter_gluCylinder_debug((qobj), (baseRadius), (topRadius), (height), (slices), (stacks), __FILE__, __LINE__)
void glatter_gluCylinder_debug(GLUquadric *qobj, GLdouble baseRadius, GLdouble topRadius, GLdouble height, GLint slices, GLint stacks, const char* file, int line);
#define gluDeleteNurbsRenderer(nobj) glatter_gluDeleteNurbsRenderer_debug((nobj), __FILE__, __LINE__)
void glatter_gluDeleteNurbsRenderer_debug(GLUnurbs *nobj, const char* file, int line);
#define gluDeleteQuadric(state) glatter_gluDeleteQuadric_debug((state), __FILE__, __LINE__)
void glatter_gluDeleteQuadric_debug(GLUquadric *state, const char* file, int line);
#define gluDeleteTess(tess) glatter_gluDeleteTess_debug((tess), __FILE__, __LINE__)
void glatter_gluDeleteTess_debug(GLUtesselator *tess, const char* file, int line);
#define gluDisk(qobj, innerRadius, outerRadius, slices, loops) glatter_gluDisk_debug((qobj), (innerRadius), (outerRadius), (slices), (loops), __FILE__, __LINE__)
void glatter_gluDisk_debug(GLUquadric *qobj, GLdouble innerRadius, GLdouble outerRadius, GLint slices, GLint loops, const char* file, int line);
#define gluEndCurve(nobj) glatter_gluEndCurve_debug((nobj), __FILE__, __LINE__)
void glatter_gluEndCurve_debug(GLUnurbs *nobj, const char* file, int line);
#define gluEndPolygon(tess) glatter_gluEndPolygon_debug((tess), __FILE__, __LINE__)
void glatter_gluEndPolygon_debug(GLUtesselator *tess, const char* file, int line);
#define gluEndSurface(nobj) glatter_gluEndSurface_debug((nobj), __FILE__, __LINE__)
void glatter_gluEndSurface_debug(GLUnurbs *nobj, const char* file, int line);
#define gluEndTrim(nobj) glatter_gluEndTrim_debug((nobj), __FILE__, __LINE__)
void glatter_gluEndTrim_debug(GLUnurbs *nobj, const char* file, int line);
#define gluErrorString(errCode) glatter_gluErrorString_debug((errCode), __FILE__, __LINE__)
const GLubyte* glatter_gluErrorString_debug(GLenum errCode, const char* file, int line);
#define gluErrorUnicodeStringEXT(errCode) glatter_gluErrorUnicodeStringEXT_debug((errCode), __FILE__, __LINE__)
const wchar_t* glatter_gluErrorUnicodeStringEXT_debug(GLenum errCode, const char* file, int line);
#define gluGetString(name) glatter_gluGetString_debug((name), __FILE__, __LINE__)
const GLubyte* glatter_gluGetString_debug(GLenum name, const char* file, int line);
#define gluGetTessProperty(tess, which, value) glatter_gluGetTessProperty_debug((tess), (which), (value), __FILE__, __LINE__)
void glatter_gluGetTessProperty_debug(GLUtesselator *tess, GLenum which, GLdouble *value, const char* file, int line);
#define gluLookAt(eyex, eyey, eyez, centerx, centery, centerz, upx, upy, upz) glatter_gluLookAt_debug((eyex), (eyey), (eyez), (centerx), (centery), (centerz), (upx), (upy), (upz), __FILE__, __LINE__)
void glatter_gluLookAt_debug(GLdouble eyex, GLdouble eyey, GLdouble eyez, GLdouble centerx, GLdouble centery, GLdouble centerz, GLdouble upx, GLdouble upy, GLdouble upz, const char* file, int line);
#define gluNewNurbsRenderer() glatter_gluNewNurbsRenderer_debug(__FILE__, __LINE__)
GLUnurbs* glatter_gluNewNurbsRenderer_debug(const char* file, int line);
#define gluNewQuadric() glatter_gluNewQuadric_debug(__FILE__, __LINE__)
GLUquadric* glatter_gluNewQuadric_debug(const char* file, int line);
#define gluNewTess() glatter_gluNewTess_debug(__FILE__, __LINE__)
GLUtesselator* glatter_gluNewTess_debug(const char* file, int line);
#define gluNextContour(tess, type) glatter_gluNextContour_debug((tess), (type), __FILE__, __LINE__)
void glatter_gluNextContour_debug(GLUtesselator *tess, GLenum type, const char* file, int line);
#define gluNurbsCurve(nobj, nknots, knot, stride, ctlarray, order, type) glatter_gluNurbsCurve_debug((nobj), (nknots), (knot), (stride), (ctlarray), (order), (type), __FILE__, __LINE__)
void glatter_gluNurbsCurve_debug(GLUnurbs *nobj, GLint nknots, GLfloat *knot, GLint stride, GLfloat *ctlarray, GLint order, GLenum type, const char* file, int line);
#define gluOrtho2D(left, right, bottom, top) glatter_gluOrtho2D_debug((left), (right), (bottom), (top), __FILE__, __LINE__)
void glatter_gluOrtho2D_debug(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, const char* file, int line);
#define gluPartialDisk(qobj, innerRadius, outerRadius, slices, loops, startAngle, sweepAngle) glatter_gluPartialDisk_debug((qobj), (innerRadius), (outerRadius), (slices), (loops), (startAngle), (sweepAngle), __FILE__, __LINE__)
void glatter_gluPartialDisk_debug(GLUquadric *qobj, GLdouble innerRadius, GLdouble outerRadius, GLint slices, GLint loops, GLdouble startAngle, GLdouble sweepAngle, const char* file, int line);
#define gluPerspective(fovy, aspect, zNear, zFar) glatter_gluPerspective_debug((fovy), (aspect), (zNear), (zFar), __FILE__, __LINE__)
void glatter_gluPerspective_debug(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar, const char* file, int line);
#define gluPickMatrix(x, y, width, height, viewport) glatter_gluPickMatrix_debug((x), (y), (width), (height), (viewport), __FILE__, __LINE__)
void glatter_gluPickMatrix_debug(GLdouble x, GLdouble y, GLdouble width, GLdouble height, GLint viewport[4], const char* file, int line);
#define gluProject(objx, objy, objz, modelMatrix, projMatrix, viewport, winx, winy, winz) glatter_gluProject_debug((objx), (objy), (objz), (modelMatrix), (projMatrix), (viewport), (winx), (winy), (winz), __FILE__, __LINE__)
int glatter_gluProject_debug(GLdouble objx, GLdouble objy, GLdouble objz, const GLdouble modelMatrix[16], const GLdouble projMatrix[16], const GLint viewport[4], GLdouble *winx, GLdouble *winy, GLdouble *winz, const char* file, int line);
#define gluPwlCurve(nobj, count, array, stride, type) glatter_gluPwlCurve_debug((nobj), (count), (array), (stride), (type), __FILE__, __LINE__)
void glatter_gluPwlCurve_debug(GLUnurbs *nobj, GLint count, GLfloat *array, GLint stride, GLenum type, const char* file, int line);
#define gluQuadricCallback(qobj, which, fn) glatter_gluQuadricCallback_debug((qobj), (which), (fn), __FILE__, __LINE__)
void glatter_gluQuadricCallback_debug(GLUquadric *qobj, GLenum which, void (CALLBACK* fn)(), const char* file, int line);
#define gluQuadricDrawStyle(quadObject, drawStyle) glatter_gluQuadricDrawStyle_debug((quadObject), (drawStyle), __FILE__, __LINE__)
void glatter_gluQuadricDrawStyle_debug(GLUquadric *quadObject, GLenum drawStyle, const char* file, int line);
#define gluQuadricNormals(quadObject, normals) glatter_gluQuadricNormals_debug((quadObject), (normals), __FILE__, __LINE__)
void glatter_gluQuadricNormals_debug(GLUquadric *quadObject, GLenum normals, const char* file, int line);
#define gluQuadricOrientation(quadObject, orientation) glatter_gluQuadricOrientation_debug((quadObject), (orientation), __FILE__, __LINE__)
void glatter_gluQuadricOrientation_debug(GLUquadric *quadObject, GLenum orientation, const char* file, int line);
#define gluQuadricTexture(quadObject, textureCoords) glatter_gluQuadricTexture_debug((quadObject), (textureCoords), __FILE__, __LINE__)
void glatter_gluQuadricTexture_debug(GLUquadric *quadObject, GLboolean textureCoords, const char* file, int line);
#define gluScaleImage(format, widthin, heightin, typein, datain, widthout, heightout, typeout, dataout) glatter_gluScaleImage_debug((format), (widthin), (heightin), (typein), (datain), (widthout), (heightout), (typeout), (dataout), __FILE__, __LINE__)
int glatter_gluScaleImage_debug(GLenum format, GLint widthin, GLint heightin, GLenum typein, const void *datain, GLint widthout, GLint heightout, GLenum typeout, void *dataout, const char* file, int line);
#define gluSphere(qobj, radius, slices, stacks) glatter_gluSphere_debug((qobj), (radius), (slices), (stacks), __FILE__, __LINE__)
void glatter_gluSphere_debug(GLUquadric *qobj, GLdouble radius, GLint slices, GLint stacks, const char* file, int line);
#define gluTessBeginContour(tess) glatter_gluTessBeginContour_debug((tess), __FILE__, __LINE__)
void glatter_gluTessBeginContour_debug(GLUtesselator *tess, const char* file, int line);
#define gluTessBeginPolygon(tess, polygon_data) glatter_gluTessBeginPolygon_debug((tess), (polygon_data), __FILE__, __LINE__)
void glatter_gluTessBeginPolygon_debug(GLUtesselator *tess, void *polygon_data, const char* file, int line);
#define gluTessCallback(tess, which, fn) glatter_gluTessCallback_debug((tess), (which), (fn), __FILE__, __LINE__)
void glatter_gluTessCallback_debug(GLUtesselator *tess, GLenum which, void (CALLBACK *fn)(), const char* file, int line);
#define gluTessEndContour(tess) glatter_gluTessEndContour_debug((tess), __FILE__, __LINE__)
void glatter_gluTessEndContour_debug(GLUtesselator *tess, const char* file, int line);
#define gluTessEndPolygon(tess) glatter_gluTessEndPolygon_debug((tess), __FILE__, __LINE__)
void glatter_gluTessEndPolygon_debug(GLUtesselator *tess, const char* file, int line);
#define gluTessNormal(tess, x, y, z) glatter_gluTessNormal_debug((tess), (x), (y), (z), __FILE__, __LINE__)
void glatter_gluTessNormal_debug(GLUtesselator *tess, GLdouble x, GLdouble y, GLdouble z, const char* file, int line);
#define gluTessProperty(tess, which, value) glatter_gluTessProperty_debug((tess), (which), (value), __FILE__, __LINE__)
void glatter_gluTessProperty_debug(GLUtesselator *tess, GLenum which, GLdouble value, const char* file, int line);
#define gluTessVertex(tess, coords, data) glatter_gluTessVertex_debug((tess), (coords), (data), __FILE__, __LINE__)
void glatter_gluTessVertex_debug(GLUtesselator *tess, GLdouble coords[3], void *data, const char* file, int line);
#define gluUnProject(winx, winy, winz, modelMatrix, projMatrix, viewport, objx, objy, objz) glatter_gluUnProject_debug((winx), (winy), (winz), (modelMatrix), (projMatrix), (viewport), (objx), (objy), (objz), __FILE__, __LINE__)
int glatter_gluUnProject_debug(GLdouble winx, GLdouble winy, GLdouble winz, const GLdouble modelMatrix[16], const GLdouble projMatrix[16], const GLint viewport[4], GLdouble *objx, GLdouble *objy, GLdouble *objz, const char* file, int line);
#endif // defined(__GLU_H__)
#if !defined(__GLU_H__)
#define gluBeginCurve(nurb) glatter_gluBeginCurve_debug((nurb), __FILE__, __LINE__)
void glatter_gluBeginCurve_debug(GLUnurbs* nurb, const char* file, int line);
#define gluBeginPolygon(tess) glatter_gluBeginPolygon_debug((tess), __FILE__, __LINE__)
void glatter_gluBeginPolygon_debug(GLUtesselator* tess, const char* file, int line);
#define gluBeginSurface(nurb) glatter_gluBeginSurface_debug((nurb), __FILE__, __LINE__)
void glatter_gluBeginSurface_debug(GLUnurbs* nurb, const char* file, int line);
#define gluBeginTrim(nurb) glatter_gluBeginTrim_debug((nurb), __FILE__, __LINE__)
void glatter_gluBeginTrim_debug(GLUnurbs* nurb, const char* file, int line);
#endif // !defined(__GLU_H__)
#define gluBuild1DMipmapLevels(target, internalFormat, width, format, type, level, base, max, data) glatter_gluBuild1DMipmapLevels_debug((target), (internalFormat), (width), (format), (type), (level), (base), (max), (data), __FILE__, __LINE__)
GLint glatter_gluBuild1DMipmapLevels_debug(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data, const char* file, int line);
#if !defined(__GLU_H__)
#define gluBuild1DMipmaps(target, internalFormat, width, format, type, data) glatter_gluBuild1DMipmaps_debug((target), (internalFormat), (width), (format), (type), (data), __FILE__, __LINE__)
GLint glatter_gluBuild1DMipmaps_debug(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, const void *data, const char* file, int line);
#endif // !defined(__GLU_H__)
#define gluBuild2DMipmapLevels(target, internalFormat, width, height, format, type, level, base, max, data) glatter_gluBuild2DMipmapLevels_debug((target), (internalFormat), (width), (height), (format), (type), (level), (base), (max), (data), __FILE__, __LINE__)
GLint glatter_gluBuild2DMipmapLevels_debug(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data, const char* file, int line);
#if !defined(__GLU_H__)
#define gluBuild2DMipmaps(target, internalFormat, width, height, format, type, data) glatter_gluBuild2DMipmaps_debug((target), (internalFormat), (width), (height), (format), (type), (data), __FILE__, __LINE__)
GLint glatter_gluBuild2DMipmaps_debug(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *data, const char* file, int line);
#endif // !defined(__GLU_H__)
#define gluBuild3DMipmapLevels(target, internalFormat, width, height, depth, format, type, level, base, max, data) glatter_gluBuild3DMipmapLevels_debug((target), (internalFormat), (width), (height), (depth), (format), (type), (level), (base), (max), (data), __FILE__, __LINE__)
GLint glatter_gluBuild3DMipmapLevels_debug(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data, const char* file, int line);
#define gluBuild3DMipmaps(target, internalFormat, width, height, depth, format, type, data) glatter_gluBuild3DMipmaps_debug((target), (internalFormat), (width), (height), (depth), (format), (type), (data), __FILE__, __LINE__)
GLint glatter_gluBuild3DMipmaps_debug(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data, const char* file, int line);
#define gluCheckExtension(extName, extString) glatter_gluCheckExtension_debug((extName), (extString), __FILE__, __LINE__)
GLboolean glatter_gluCheckExtension_debug(const GLubyte *extName, const GLubyte *extString, const char* file, int line);
#if !defined(__GLU_H__)
#define gluCylinder(quad, base, top, height, slices, stacks) glatter_gluCylinder_debug((quad), (base), (top), (height), (slices), (stacks), __FILE__, __LINE__)
void glatter_gluCylinder_debug(GLUquadric* quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks, const char* file, int line);
#define gluDeleteNurbsRenderer(nurb) glatter_gluDeleteNurbsRenderer_debug((nurb), __FILE__, __LINE__)
void glatter_gluDeleteNurbsRenderer_debug(GLUnurbs* nurb, const char* file, int line);
#define gluDeleteQuadric(quad) glatter_gluDeleteQuadric_debug((quad), __FILE__, __LINE__)
void glatter_gluDeleteQuadric_debug(GLUquadric* quad, const char* file, int line);
#define gluDeleteTess(tess) glatter_gluDeleteTess_debug((tess), __FILE__, __LINE__)
void glatter_gluDeleteTess_debug(GLUtesselator* tess, const char* file, int line);
#define gluDisk(quad, inner, outer, slices, loops) glatter_gluDisk_debug((quad), (inner), (outer), (slices), (loops), __FILE__, __LINE__)
void glatter_gluDisk_debug(GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, const char* file, int line);
#define gluEndCurve(nurb) glatter_gluEndCurve_debug((nurb), __FILE__, __LINE__)
void glatter_gluEndCurve_debug(GLUnurbs* nurb, const char* file, int line);
#define gluEndPolygon(tess) glatter_gluEndPolygon_debug((tess), __FILE__, __LINE__)
void glatter_gluEndPolygon_debug(GLUtesselator* tess, const char* file, int line);
#define gluEndSurface(nurb) glatter_gluEndSurface_debug((nurb), __FILE__, __LINE__)
void glatter_gluEndSurface_debug(GLUnurbs* nurb, const char* file, int line);
#define gluEndTrim(nurb) glatter_gluEndTrim_debug((nurb), __FILE__, __LINE__)
void glatter_gluEndTrim_debug(GLUnurbs* nurb, const char* file, int line);
#define gluErrorString(error) glatter_gluErrorString_debug((error), __FILE__, __LINE__)
const GLubyte * glatter_gluErrorString_debug(GLenum error, const char* file, int line);
#endif // !defined(__GLU_H__)
#define gluGetNurbsProperty(nurb, property, data) glatter_gluGetNurbsProperty_debug((nurb), (property), (data), __FILE__, __LINE__)
void glatter_gluGetNurbsProperty_debug(GLUnurbs* nurb, GLenum property, GLfloat* data, const char* file, int line);
#if !defined(__GLU_H__)
#define gluGetString(name) glatter_gluGetString_debug((name), __FILE__, __LINE__)
const GLubyte * glatter_gluGetString_debug(GLenum name, const char* file, int line);
#define gluGetTessProperty(tess, which, data) glatter_gluGetTessProperty_debug((tess), (which), (data), __FILE__, __LINE__)
void glatter_gluGetTessProperty_debug(GLUtesselator* tess, GLenum which, GLdouble* data, const char* file, int line);
#endif // !defined(__GLU_H__)
#define gluLoadSamplingMatrices(nurb, model, perspective, view) glatter_gluLoadSamplingMatrices_debug((nurb), (model), (perspective), (view), __FILE__, __LINE__)
void glatter_gluLoadSamplingMatrices_debug(GLUnurbs* nurb, const GLfloat *model, const GLfloat *perspective, const GLint *view, const char* file, int line);
#if !defined(__GLU_H__)
#define gluLookAt(eyeX, eyeY, eyeZ, centerX, centerY, centerZ, upX, upY, upZ) glatter_gluLookAt_debug((eyeX), (eyeY), (eyeZ), (centerX), (centerY), (centerZ), (upX), (upY), (upZ), __FILE__, __LINE__)
void glatter_gluLookAt_debug(GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble centerX, GLdouble centerY, GLdouble centerZ, GLdouble upX, GLdouble upY, GLdouble upZ, const char* file, int line);
#define gluNewNurbsRenderer() glatter_gluNewNurbsRenderer_debug(__FILE__, __LINE__)
GLUnurbs* glatter_gluNewNurbsRenderer_debug(const char* file, int line);
#define gluNewQuadric() glatter_gluNewQuadric_debug(__FILE__, __LINE__)
GLUquadric* glatter_gluNewQuadric_debug(const char* file, int line);
#define gluNewTess() glatter_gluNewTess_debug(__FILE__, __LINE__)
GLUtesselator* glatter_gluNewTess_debug(const char* file, int line);
#define gluNextContour(tess, type) glatter_gluNextContour_debug((tess), (type), __FILE__, __LINE__)
void glatter_gluNextContour_debug(GLUtesselator* tess, GLenum type, const char* file, int line);
#endif // !defined(__GLU_H__)
#define gluNurbsCallback(nurb, which, CallBackFunc) glatter_gluNurbsCallback_debug((nurb), (which), (CallBackFunc), __FILE__, __LINE__)
void glatter_gluNurbsCallback_debug(GLUnurbs* nurb, GLenum which, _GLUfuncptr CallBackFunc, const char* file, int line);
#define gluNurbsCallbackData(nurb, userData) glatter_gluNurbsCallbackData_debug((nurb), (userData), __FILE__, __LINE__)
void glatter_gluNurbsCallbackData_debug(GLUnurbs* nurb, GLvoid* userData, const char* file, int line);
#define gluNurbsCallbackDataEXT(nurb, userData) glatter_gluNurbsCallbackDataEXT_debug((nurb), (userData), __FILE__, __LINE__)
void glatter_gluNurbsCallbackDataEXT_debug(GLUnurbs* nurb, GLvoid* userData, const char* file, int line);
#if !defined(__GLU_H__)
#define gluNurbsCurve(nurb, knotCount, knots, stride, control, order, type) glatter_gluNurbsCurve_debug((nurb), (knotCount), (knots), (stride), (control), (order), (type), __FILE__, __LINE__)
void glatter_gluNurbsCurve_debug(GLUnurbs* nurb, GLint knotCount, GLfloat *knots, GLint stride, GLfloat *control, GLint order, GLenum type, const char* file, int line);
#endif // !defined(__GLU_H__)
#define gluNurbsProperty(nurb, property, value) glatter_gluNurbsProperty_debug((nurb), (property), (value), __FILE__, __LINE__)
void glatter_gluNurbsProperty_debug(GLUnurbs* nurb, GLenum property, GLfloat value, const char* file, int line);
#define gluNurbsSurface(nurb, sKnotCount, sKnots, tKnotCount, tKnots, sStride, tStride, control, sOrder, tOrder, type) glatter_gluNurbsSurface_debug((nurb), (sKnotCount), (sKnots), (tKnotCount), (tKnots), (sStride), (tStride), (control), (sOrder), (tOrder), (type), __FILE__, __LINE__)
void glatter_gluNurbsSurface_debug(GLUnurbs* nurb, GLint sKnotCount, GLfloat* sKnots, GLint tKnotCount, GLfloat* tKnots, GLint sStride, GLint tStride, GLfloat* control, GLint sOrder, GLint tOrder, GLenum type, const char* file, int line);
#if !defined(__GLU_H__)
#define gluOrtho2D(left, right, bottom, top) glatter_gluOrtho2D_debug((left), (right), (bottom), (top), __FILE__, __LINE__)
void glatter_gluOrtho2D_debug(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, const char* file, int line);
#define gluPartialDisk(quad, inner, outer, slices, loops, start, sweep) glatter_gluPartialDisk_debug((quad), (inner), (outer), (slices), (loops), (start), (sweep), __FILE__, __LINE__)
void glatter_gluPartialDisk_debug(GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, GLdouble start, GLdouble sweep, const char* file, int line);
#define gluPerspective(fovy, aspect, zNear, zFar) glatter_gluPerspective_debug((fovy), (aspect), (zNear), (zFar), __FILE__, __LINE__)
void glatter_gluPerspective_debug(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar, const char* file, int line);
#define gluPickMatrix(x, y, delX, delY, viewport) glatter_gluPickMatrix_debug((x), (y), (delX), (delY), (viewport), __FILE__, __LINE__)
void glatter_gluPickMatrix_debug(GLdouble x, GLdouble y, GLdouble delX, GLdouble delY, GLint *viewport, const char* file, int line);
#define gluProject(objX, objY, objZ, model, proj, view, winX, winY, winZ) glatter_gluProject_debug((objX), (objY), (objZ), (model), (proj), (view), (winX), (winY), (winZ), __FILE__, __LINE__)
GLint glatter_gluProject_debug(GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* winX, GLdouble* winY, GLdouble* winZ, const char* file, int line);
#define gluPwlCurve(nurb, count, data, stride, type) glatter_gluPwlCurve_debug((nurb), (count), (data), (stride), (type), __FILE__, __LINE__)
void glatter_gluPwlCurve_debug(GLUnurbs* nurb, GLint count, GLfloat* data, GLint stride, GLenum type, const char* file, int line);
#define gluQuadricCallback(quad, which, CallBackFunc) glatter_gluQuadricCallback_debug((quad), (which), (CallBackFunc), __FILE__, __LINE__)
void glatter_gluQuadricCallback_debug(GLUquadric* quad, GLenum which, _GLUfuncptr CallBackFunc, const char* file, int line);
#define gluQuadricDrawStyle(quad, draw) glatter_gluQuadricDrawStyle_debug((quad), (draw), __FILE__, __LINE__)
void glatter_gluQuadricDrawStyle_debug(GLUquadric* quad, GLenum draw, const char* file, int line);
#define gluQuadricNormals(quad, normal) glatter_gluQuadricNormals_debug((quad), (normal), __FILE__, __LINE__)
void glatter_gluQuadricNormals_debug(GLUquadric* quad, GLenum normal, const char* file, int line);
#define gluQuadricOrientation(quad, orientation) glatter_gluQuadricOrientation_debug((quad), (orientation), __FILE__, __LINE__)
void glatter_gluQuadricOrientation_debug(GLUquadric* quad, GLenum orientation, const char* file, int line);
#define gluQuadricTexture(quad, texture) glatter_gluQuadricTexture_debug((quad), (texture), __FILE__, __LINE__)
void glatter_gluQuadricTexture_debug(GLUquadric* quad, GLboolean texture, const char* file, int line);
#define gluScaleImage(format, wIn, hIn, typeIn, dataIn, wOut, hOut, typeOut, dataOut) glatter_gluScaleImage_debug((format), (wIn), (hIn), (typeIn), (dataIn), (wOut), (hOut), (typeOut), (dataOut), __FILE__, __LINE__)
GLint glatter_gluScaleImage_debug(GLenum format, GLsizei wIn, GLsizei hIn, GLenum typeIn, const void *dataIn, GLsizei wOut, GLsizei hOut, GLenum typeOut, GLvoid* dataOut, const char* file, int line);
#define gluSphere(quad, radius, slices, stacks) glatter_gluSphere_debug((quad), (radius), (slices), (stacks), __FILE__, __LINE__)
void glatter_gluSphere_debug(GLUquadric* quad, GLdouble radius, GLint slices, GLint stacks, const char* file, int line);
#define gluTessBeginContour(tess) glatter_gluTessBeginContour_debug((tess), __FILE__, __LINE__)
void glatter_gluTessBeginContour_debug(GLUtesselator* tess, const char* file, int line);
#define gluTessBeginPolygon(tess, data) glatter_gluTessBeginPolygon_debug((tess), (data), __FILE__, __LINE__)
void glatter_gluTessBeginPolygon_debug(GLUtesselator* tess, GLvoid* data, const char* file, int line);
#define gluTessCallback(tess, which, CallBackFunc) glatter_gluTessCallback_debug((tess), (which), (CallBackFunc), __FILE__, __LINE__)
void glatter_gluTessCallback_debug(GLUtesselator* tess, GLenum which, _GLUfuncptr CallBackFunc, const char* file, int line);
#define gluTessEndContour(tess) glatter_gluTessEndContour_debug((tess), __FILE__, __LINE__)
void glatter_gluTessEndContour_debug(GLUtesselator* tess, const char* file, int line);
#define gluTessEndPolygon(tess) glatter_gluTessEndPolygon_debug((tess), __FILE__, __LINE__)
void glatter_gluTessEndPolygon_debug(GLUtesselator* tess, const char* file, int line);
#define gluTessNormal(tess, valueX, valueY, valueZ) glatter_gluTessNormal_debug((tess), (valueX), (valueY), (valueZ), __FILE__, __LINE__)
void glatter_gluTessNormal_debug(GLUtesselator* tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ, const char* file, int line);
#define gluTessProperty(tess, which, data) glatter_gluTessProperty_debug((tess), (which), (data), __FILE__, __LINE__)
void glatter_gluTessProperty_debug(GLUtesselator* tess, GLenum which, GLdouble data, const char* file, int line);
#define gluTessVertex(tess, location, data) glatter_gluTessVertex_debug((tess), (location), (data), __FILE__, __LINE__)
void glatter_gluTessVertex_debug(GLUtesselator* tess, GLdouble *location, GLvoid* data, const char* file, int line);
#define gluUnProject(winX, winY, winZ, model, proj, view, objX, objY, objZ) glatter_gluUnProject_debug((winX), (winY), (winZ), (model), (proj), (view), (objX), (objY), (objZ), __FILE__, __LINE__)
GLint glatter_gluUnProject_debug(GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* objX, GLdouble* objY, GLdouble* objZ, const char* file, int line);
#endif // !defined(__GLU_H__)
#define gluUnProject4(winX, winY, winZ, clipW, model, proj, view, nearVal, farVal, objX, objY, objZ, objW) glatter_gluUnProject4_debug((winX), (winY), (winZ), (clipW), (model), (proj), (view), (nearVal), (farVal), (objX), (objY), (objZ), (objW), __FILE__, __LINE__)
GLint glatter_gluUnProject4_debug(GLdouble winX, GLdouble winY, GLdouble winZ, GLdouble clipW, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble nearVal, GLdouble farVal, GLdouble* objX, GLdouble* objY, GLdouble* objZ, GLdouble* objW, const char* file, int line);
#endif // defined(__glu_h__)
#endif // GLATTER_GLU

