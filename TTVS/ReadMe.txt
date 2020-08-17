
CSTHead.vcproj: For Win32 DLL

CSTHeadCE.vcproj: For WinCE (Pocket PC 2003) DLL


(1) Deployment

(1.1) Remember to add the additional dll files in the deplyment setting.
Necessary files include:
libGLES.dll for OpenGL|ES (OpenGL on Embedded Systems)
msvcr80.dll (msvcr80d.dll) for msvc dll supporting.

(1.2) The recommended syntax for deploying necessary files:
msvcr80.dll|$(BINDIR)\$(INSTRUCTIONSET)\|%CSIDL_PROGRAM_FILES%\TTVS|0
msvcr80d.dll|$(BINDIR)\$(INSTRUCTIONSET)\|%CSIDL_PROGRAM_FILES%\TTVS|0
libGLES_CM.dll|$(SolutionDir)\..\ogles\bin\|%CSIDL_PROGRAM_FILES%\TTVS|0


(9) TODO and Done

(9.0) BUG to fix for Embedded System version
ĿǰǶ��ʽ�汾������Ⱦʱ����֡�������������
(a) �����ļ�song_tongue.fdp������ͨ������OpenGL�ĳ�ʼ�����ã���OpenGL.cpp��setupDefaultEnvironment�����м���glEnable(GL_CULL_FACE)����������⣻
(b) ����song_teeth.fdp��������Ȼ���ڡ�������Ҫ������������ͬ��Object�����ص�ʱ����Ӧ���ڱε�Object����Ⱦ��ʾʱ��Щ���ֻ�ʱ��ʱ¶���������¡���������������������Ȳ���Depth Test�����⣬������setupDefaultEnvironment�������Ѿ�ͨ��glEnable(GL_DEPTH_TEST)������Ȳ��ԵĹ��ܣ�������ǲ��С�����δ�ܽ������֪�Ƿ��OpenGL|ES�ĳ�ʼ���йأ��������ͨ��eglChooseConfig��ѡ���ض���config��Ϣ��
(c) ͸����ʾ�ƺ�Ҳ����һ�������⡣�������song_teeth.fdp�������ݱ�Ե��Ӧ��͸���ġ�������ʾ���ڱε���������������汾�Ĳ��Գ����д򿪹۲죩��������Ƕ��ʽ�汾�ĳ�����͸����������ʾ����ɫ����������δ��ʾ������������Alpha Test�����⡣

(9.1) TODO

(a) Determine whether OpenGLBmp can be removed, and use OpenGLW directly.
When the input parameter (HWND) is NULL for OpenGLW initialization, Offscreen rendering will be performed

(b) TalkingHeadGL, TalkingHeadConcatenate?

(9.2) 20080901 Done
Add the function to unload model (close the opened model).
So that the user could load a new model after unloading (closing) current model.

(9.3) 20081028 Done
Make the OpenGL, CSTTalkingHead, and AnimationPlayer independent.
(a) OpenGL
(b) CSTTalkingHead -> render(), rewind(), next(), generateAnimation(), getFrameData(), getFrameSize()
(c) AnimationPlayer -> initialize(CSTTalkingHead, HWND), play(Start new thread), pause, resume, stop
(d) VideoGenerator -> generateVideo(waveFile, ctxtFile...)
