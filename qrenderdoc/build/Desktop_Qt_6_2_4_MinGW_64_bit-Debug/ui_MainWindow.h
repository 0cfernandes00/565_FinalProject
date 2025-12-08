/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "3rdparty/toolwindowmanager/ToolWindowManager.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Launch_Application;
    QAction *action_Attach_to_Running_Instance;
    QAction *action_Inject_into_Process;
    QAction *action_Open_Capture;
    QAction *action_Save_Capture_Inplace;
    QAction *action_Close_Capture;
    QAction *action_Exit;
    QAction *action_Python_Shell;
    QAction *action_Event_Browser;
    QAction *action_Texture_Viewer;
    QAction *action_Pipeline_State;
    QAction *action_API_Inspector;
    QAction *action_Mesh_Output;
    QAction *action_Errors_and_Warnings;
    QAction *action_Timeline;
    QAction *action_Save_Default_Layout;
    QAction *action_Load_Default_Layout;
    QAction *action_Save_Layout_1;
    QAction *action_Save_Layout_2;
    QAction *action_Save_Layout_3;
    QAction *action_Save_Layout_4;
    QAction *action_Save_Layout_5;
    QAction *action_Save_Layout_6;
    QAction *action_Load_Layout_1;
    QAction *action_Load_Layout_2;
    QAction *action_Load_Layout_3;
    QAction *action_Load_Layout_4;
    QAction *action_Load_Layout_5;
    QAction *action_Load_Layout_6;
    QAction *action_Resolve_Symbols;
    QAction *action_Settings;
    QAction *action_Manage_Remote_Servers;
    QAction *action_View_Documentation;
    QAction *action_Send_Error_Report;
    QAction *action_Source_on_GitHub;
    QAction *action_Build_Release_Downloads;
    QAction *action_About;
    QAction *action_Clear_Capture_Files_History;
    QAction *action_Clear_Capture_Settings_History;
    QAction *action_Statistics_Viewer;
    QAction *action_Show_Tips;
    QAction *action_Launch_Application_Window;
    QAction *action_Start_Replay_Loop;
    QAction *action_Counter_Viewer;
    QAction *action_Resource_Inspector;
    QAction *action_Save_Capture_As;
    QAction *action_Comments;
    QAction *action_Recompress_Capture;
    QAction *action_Clear_Reported_Bugs;
    QAction *action_Check_for_Updates;
    QAction *action_Create_RGP_Profile;
    QAction *action_Open_RGP_Profile;
    QAction *extension_dummy_Tools;
    QAction *extension_dummy_Help;
    QAction *extension_dummy_Window;
    QAction *extension_dummy_File;
    QAction *action_Manage_Extensions;
    QAction *action_Open_Capture_with_Options;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    ToolWindowManager *toolWindowManager;
    QMenuBar *menuBar;
    QMenu *menu_Tools;
    QMenu *menu_File;
    QMenu *menu_Recent_Capture_Files;
    QMenu *menu_Recent_Capture_Settings;
    QMenu *menu_Export_As;
    QMenu *menu_Import_From;
    QMenu *menu_Window;
    QMenu *menu_Save_Layout;
    QMenu *menu_Load_Layout;
    QMenu *menu_Help;
    QMenu *menu_Reported_Bugs;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Launch_Application = new QAction(MainWindow);
        action_Launch_Application->setObjectName(QString::fromUtf8("action_Launch_Application"));
        action_Attach_to_Running_Instance = new QAction(MainWindow);
        action_Attach_to_Running_Instance->setObjectName(QString::fromUtf8("action_Attach_to_Running_Instance"));
        action_Inject_into_Process = new QAction(MainWindow);
        action_Inject_into_Process->setObjectName(QString::fromUtf8("action_Inject_into_Process"));
        action_Open_Capture = new QAction(MainWindow);
        action_Open_Capture->setObjectName(QString::fromUtf8("action_Open_Capture"));
        action_Save_Capture_Inplace = new QAction(MainWindow);
        action_Save_Capture_Inplace->setObjectName(QString::fromUtf8("action_Save_Capture_Inplace"));
        action_Close_Capture = new QAction(MainWindow);
        action_Close_Capture->setObjectName(QString::fromUtf8("action_Close_Capture"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        action_Python_Shell = new QAction(MainWindow);
        action_Python_Shell->setObjectName(QString::fromUtf8("action_Python_Shell"));
        action_Event_Browser = new QAction(MainWindow);
        action_Event_Browser->setObjectName(QString::fromUtf8("action_Event_Browser"));
        action_Texture_Viewer = new QAction(MainWindow);
        action_Texture_Viewer->setObjectName(QString::fromUtf8("action_Texture_Viewer"));
        action_Pipeline_State = new QAction(MainWindow);
        action_Pipeline_State->setObjectName(QString::fromUtf8("action_Pipeline_State"));
        action_API_Inspector = new QAction(MainWindow);
        action_API_Inspector->setObjectName(QString::fromUtf8("action_API_Inspector"));
        action_Mesh_Output = new QAction(MainWindow);
        action_Mesh_Output->setObjectName(QString::fromUtf8("action_Mesh_Output"));
        action_Errors_and_Warnings = new QAction(MainWindow);
        action_Errors_and_Warnings->setObjectName(QString::fromUtf8("action_Errors_and_Warnings"));
        action_Timeline = new QAction(MainWindow);
        action_Timeline->setObjectName(QString::fromUtf8("action_Timeline"));
        action_Save_Default_Layout = new QAction(MainWindow);
        action_Save_Default_Layout->setObjectName(QString::fromUtf8("action_Save_Default_Layout"));
        action_Load_Default_Layout = new QAction(MainWindow);
        action_Load_Default_Layout->setObjectName(QString::fromUtf8("action_Load_Default_Layout"));
        action_Save_Layout_1 = new QAction(MainWindow);
        action_Save_Layout_1->setObjectName(QString::fromUtf8("action_Save_Layout_1"));
        action_Save_Layout_2 = new QAction(MainWindow);
        action_Save_Layout_2->setObjectName(QString::fromUtf8("action_Save_Layout_2"));
        action_Save_Layout_3 = new QAction(MainWindow);
        action_Save_Layout_3->setObjectName(QString::fromUtf8("action_Save_Layout_3"));
        action_Save_Layout_4 = new QAction(MainWindow);
        action_Save_Layout_4->setObjectName(QString::fromUtf8("action_Save_Layout_4"));
        action_Save_Layout_5 = new QAction(MainWindow);
        action_Save_Layout_5->setObjectName(QString::fromUtf8("action_Save_Layout_5"));
        action_Save_Layout_6 = new QAction(MainWindow);
        action_Save_Layout_6->setObjectName(QString::fromUtf8("action_Save_Layout_6"));
        action_Load_Layout_1 = new QAction(MainWindow);
        action_Load_Layout_1->setObjectName(QString::fromUtf8("action_Load_Layout_1"));
        action_Load_Layout_2 = new QAction(MainWindow);
        action_Load_Layout_2->setObjectName(QString::fromUtf8("action_Load_Layout_2"));
        action_Load_Layout_3 = new QAction(MainWindow);
        action_Load_Layout_3->setObjectName(QString::fromUtf8("action_Load_Layout_3"));
        action_Load_Layout_4 = new QAction(MainWindow);
        action_Load_Layout_4->setObjectName(QString::fromUtf8("action_Load_Layout_4"));
        action_Load_Layout_5 = new QAction(MainWindow);
        action_Load_Layout_5->setObjectName(QString::fromUtf8("action_Load_Layout_5"));
        action_Load_Layout_6 = new QAction(MainWindow);
        action_Load_Layout_6->setObjectName(QString::fromUtf8("action_Load_Layout_6"));
        action_Resolve_Symbols = new QAction(MainWindow);
        action_Resolve_Symbols->setObjectName(QString::fromUtf8("action_Resolve_Symbols"));
        action_Settings = new QAction(MainWindow);
        action_Settings->setObjectName(QString::fromUtf8("action_Settings"));
        action_Manage_Remote_Servers = new QAction(MainWindow);
        action_Manage_Remote_Servers->setObjectName(QString::fromUtf8("action_Manage_Remote_Servers"));
        action_View_Documentation = new QAction(MainWindow);
        action_View_Documentation->setObjectName(QString::fromUtf8("action_View_Documentation"));
        action_Send_Error_Report = new QAction(MainWindow);
        action_Send_Error_Report->setObjectName(QString::fromUtf8("action_Send_Error_Report"));
        action_Source_on_GitHub = new QAction(MainWindow);
        action_Source_on_GitHub->setObjectName(QString::fromUtf8("action_Source_on_GitHub"));
        action_Build_Release_Downloads = new QAction(MainWindow);
        action_Build_Release_Downloads->setObjectName(QString::fromUtf8("action_Build_Release_Downloads"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Clear_Capture_Files_History = new QAction(MainWindow);
        action_Clear_Capture_Files_History->setObjectName(QString::fromUtf8("action_Clear_Capture_Files_History"));
        action_Clear_Capture_Settings_History = new QAction(MainWindow);
        action_Clear_Capture_Settings_History->setObjectName(QString::fromUtf8("action_Clear_Capture_Settings_History"));
        action_Statistics_Viewer = new QAction(MainWindow);
        action_Statistics_Viewer->setObjectName(QString::fromUtf8("action_Statistics_Viewer"));
        action_Show_Tips = new QAction(MainWindow);
        action_Show_Tips->setObjectName(QString::fromUtf8("action_Show_Tips"));
        action_Launch_Application_Window = new QAction(MainWindow);
        action_Launch_Application_Window->setObjectName(QString::fromUtf8("action_Launch_Application_Window"));
        action_Start_Replay_Loop = new QAction(MainWindow);
        action_Start_Replay_Loop->setObjectName(QString::fromUtf8("action_Start_Replay_Loop"));
        action_Counter_Viewer = new QAction(MainWindow);
        action_Counter_Viewer->setObjectName(QString::fromUtf8("action_Counter_Viewer"));
        action_Resource_Inspector = new QAction(MainWindow);
        action_Resource_Inspector->setObjectName(QString::fromUtf8("action_Resource_Inspector"));
        action_Save_Capture_As = new QAction(MainWindow);
        action_Save_Capture_As->setObjectName(QString::fromUtf8("action_Save_Capture_As"));
        action_Comments = new QAction(MainWindow);
        action_Comments->setObjectName(QString::fromUtf8("action_Comments"));
        action_Recompress_Capture = new QAction(MainWindow);
        action_Recompress_Capture->setObjectName(QString::fromUtf8("action_Recompress_Capture"));
        action_Clear_Reported_Bugs = new QAction(MainWindow);
        action_Clear_Reported_Bugs->setObjectName(QString::fromUtf8("action_Clear_Reported_Bugs"));
        action_Check_for_Updates = new QAction(MainWindow);
        action_Check_for_Updates->setObjectName(QString::fromUtf8("action_Check_for_Updates"));
        action_Create_RGP_Profile = new QAction(MainWindow);
        action_Create_RGP_Profile->setObjectName(QString::fromUtf8("action_Create_RGP_Profile"));
        action_Open_RGP_Profile = new QAction(MainWindow);
        action_Open_RGP_Profile->setObjectName(QString::fromUtf8("action_Open_RGP_Profile"));
        extension_dummy_Tools = new QAction(MainWindow);
        extension_dummy_Tools->setObjectName(QString::fromUtf8("extension_dummy_Tools"));
        extension_dummy_Tools->setText(QString::fromUtf8("__extensions__"));
        extension_dummy_Help = new QAction(MainWindow);
        extension_dummy_Help->setObjectName(QString::fromUtf8("extension_dummy_Help"));
        extension_dummy_Help->setText(QString::fromUtf8("__extensions__"));
        extension_dummy_Window = new QAction(MainWindow);
        extension_dummy_Window->setObjectName(QString::fromUtf8("extension_dummy_Window"));
        extension_dummy_Window->setText(QString::fromUtf8("__extensions__"));
        extension_dummy_File = new QAction(MainWindow);
        extension_dummy_File->setObjectName(QString::fromUtf8("extension_dummy_File"));
        extension_dummy_File->setText(QString::fromUtf8("__extensions__"));
        action_Manage_Extensions = new QAction(MainWindow);
        action_Manage_Extensions->setObjectName(QString::fromUtf8("action_Manage_Extensions"));
        action_Open_Capture_with_Options = new QAction(MainWindow);
        action_Open_Capture_with_Options->setObjectName(QString::fromUtf8("action_Open_Capture_with_Options"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolWindowManager = new ToolWindowManager(centralWidget);
        toolWindowManager->setObjectName(QString::fromUtf8("toolWindowManager"));

        verticalLayout->addWidget(toolWindowManager);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 18));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QString::fromUtf8("menu_Tools"));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Recent_Capture_Files = new QMenu(menu_File);
        menu_Recent_Capture_Files->setObjectName(QString::fromUtf8("menu_Recent_Capture_Files"));
        menu_Recent_Capture_Settings = new QMenu(menu_File);
        menu_Recent_Capture_Settings->setObjectName(QString::fromUtf8("menu_Recent_Capture_Settings"));
        menu_Export_As = new QMenu(menu_File);
        menu_Export_As->setObjectName(QString::fromUtf8("menu_Export_As"));
        menu_Export_As->setToolTipsVisible(true);
        menu_Import_From = new QMenu(menu_File);
        menu_Import_From->setObjectName(QString::fromUtf8("menu_Import_From"));
        menu_Import_From->setToolTipsVisible(true);
        menu_Window = new QMenu(menuBar);
        menu_Window->setObjectName(QString::fromUtf8("menu_Window"));
        menu_Save_Layout = new QMenu(menu_Window);
        menu_Save_Layout->setObjectName(QString::fromUtf8("menu_Save_Layout"));
        menu_Load_Layout = new QMenu(menu_Window);
        menu_Load_Layout->setObjectName(QString::fromUtf8("menu_Load_Layout"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Reported_Bugs = new QMenu(menu_Help);
        menu_Reported_Bugs->setObjectName(QString::fromUtf8("menu_Reported_Bugs"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Window->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_Tools->addAction(action_Resolve_Symbols);
        menu_Tools->addAction(action_Recompress_Capture);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_Start_Replay_Loop);
        menu_Tools->addAction(action_Create_RGP_Profile);
        menu_Tools->addAction(action_Open_RGP_Profile);
        menu_Tools->addSeparator();
        menu_Tools->addAction(extension_dummy_Tools);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_Settings);
        menu_Tools->addAction(action_Manage_Extensions);
        menu_Tools->addAction(action_Manage_Remote_Servers);
        menu_Tools->addSeparator();
        menu_File->addAction(action_Launch_Application);
        menu_File->addAction(action_Attach_to_Running_Instance);
        menu_File->addAction(action_Inject_into_Process);
        menu_File->addSeparator();
        menu_File->addAction(action_Open_Capture);
        menu_File->addAction(action_Open_Capture_with_Options);
        menu_File->addAction(action_Save_Capture_Inplace);
        menu_File->addAction(action_Save_Capture_As);
        menu_File->addAction(action_Close_Capture);
        menu_File->addSeparator();
        menu_File->addAction(extension_dummy_File);
        menu_File->addSeparator();
        menu_File->addAction(menu_Import_From->menuAction());
        menu_File->addAction(menu_Export_As->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(menu_Recent_Capture_Files->menuAction());
        menu_File->addAction(menu_Recent_Capture_Settings->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(action_Exit);
        menu_File->addSeparator();
        menu_Recent_Capture_Files->addSeparator();
        menu_Recent_Capture_Files->addAction(action_Clear_Capture_Files_History);
        menu_Recent_Capture_Settings->addSeparator();
        menu_Recent_Capture_Settings->addAction(action_Clear_Capture_Settings_History);
        menu_Window->addAction(menu_Save_Layout->menuAction());
        menu_Window->addAction(menu_Load_Layout->menuAction());
        menu_Window->addSeparator();
        menu_Window->addAction(action_Launch_Application_Window);
        menu_Window->addAction(action_Python_Shell);
        menu_Window->addAction(action_Event_Browser);
        menu_Window->addAction(action_Texture_Viewer);
        menu_Window->addAction(action_Pipeline_State);
        menu_Window->addAction(action_API_Inspector);
        menu_Window->addAction(action_Mesh_Output);
        menu_Window->addAction(action_Errors_and_Warnings);
        menu_Window->addAction(action_Timeline);
        menu_Window->addAction(action_Statistics_Viewer);
        menu_Window->addAction(action_Counter_Viewer);
        menu_Window->addAction(action_Resource_Inspector);
        menu_Window->addAction(action_Comments);
        menu_Window->addSeparator();
        menu_Window->addAction(extension_dummy_Window);
        menu_Save_Layout->addAction(action_Save_Default_Layout);
        menu_Save_Layout->addSeparator();
        menu_Save_Layout->addAction(action_Save_Layout_1);
        menu_Save_Layout->addAction(action_Save_Layout_2);
        menu_Save_Layout->addAction(action_Save_Layout_3);
        menu_Save_Layout->addAction(action_Save_Layout_4);
        menu_Save_Layout->addAction(action_Save_Layout_5);
        menu_Save_Layout->addAction(action_Save_Layout_6);
        menu_Load_Layout->addAction(action_Load_Default_Layout);
        menu_Load_Layout->addSeparator();
        menu_Load_Layout->addAction(action_Load_Layout_1);
        menu_Load_Layout->addAction(action_Load_Layout_2);
        menu_Load_Layout->addAction(action_Load_Layout_3);
        menu_Load_Layout->addAction(action_Load_Layout_4);
        menu_Load_Layout->addAction(action_Load_Layout_5);
        menu_Load_Layout->addAction(action_Load_Layout_6);
        menu_Help->addAction(action_View_Documentation);
        menu_Help->addAction(action_Show_Tips);
        menu_Help->addSeparator();
        menu_Help->addAction(action_Send_Error_Report);
        menu_Help->addAction(menu_Reported_Bugs->menuAction());
        menu_Help->addSeparator();
        menu_Help->addAction(extension_dummy_Help);
        menu_Help->addSeparator();
        menu_Help->addAction(action_Check_for_Updates);
        menu_Help->addSeparator();
        menu_Help->addAction(action_Source_on_GitHub);
        menu_Help->addAction(action_Build_Release_Downloads);
        menu_Help->addAction(action_About);
        menu_Reported_Bugs->addSeparator();
        menu_Reported_Bugs->addAction(action_Clear_Reported_Bugs);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QRenderDoc", nullptr));
        action_Launch_Application->setText(QCoreApplication::translate("MainWindow", "&Launch Application", nullptr));
#if QT_CONFIG(shortcut)
        action_Launch_Application->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Attach_to_Running_Instance->setText(QCoreApplication::translate("MainWindow", "&Attach to Running Instance", nullptr));
        action_Inject_into_Process->setText(QCoreApplication::translate("MainWindow", "&Inject into Process", nullptr));
        action_Open_Capture->setText(QCoreApplication::translate("MainWindow", "&Open Capture", nullptr));
#if QT_CONFIG(shortcut)
        action_Open_Capture->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save_Capture_Inplace->setText(QCoreApplication::translate("MainWindow", "&Save Capture", nullptr));
#if QT_CONFIG(shortcut)
        action_Save_Capture_Inplace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Close_Capture->setText(QCoreApplication::translate("MainWindow", "&Close Capture", nullptr));
#if QT_CONFIG(shortcut)
        action_Close_Capture->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Exit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        action_Python_Shell->setText(QCoreApplication::translate("MainWindow", "P&ython Shell", nullptr));
        action_Event_Browser->setText(QCoreApplication::translate("MainWindow", "&Event Browser", nullptr));
        action_Texture_Viewer->setText(QCoreApplication::translate("MainWindow", "&Texture Viewer", nullptr));
        action_Pipeline_State->setText(QCoreApplication::translate("MainWindow", "&Pipeline State", nullptr));
        action_API_Inspector->setText(QCoreApplication::translate("MainWindow", "&API Inspector", nullptr));
        action_Mesh_Output->setText(QCoreApplication::translate("MainWindow", "&Mesh Viewer", nullptr));
        action_Errors_and_Warnings->setText(QCoreApplication::translate("MainWindow", "Errors and &Warnings", nullptr));
        action_Timeline->setText(QCoreApplication::translate("MainWindow", "T&imeline", nullptr));
        action_Save_Default_Layout->setText(QCoreApplication::translate("MainWindow", "&Default Layout", nullptr));
        action_Load_Default_Layout->setText(QCoreApplication::translate("MainWindow", "&Default Layout", nullptr));
        action_Save_Layout_1->setText(QCoreApplication::translate("MainWindow", "Layout &1", nullptr));
        action_Save_Layout_2->setText(QCoreApplication::translate("MainWindow", "Layout &2", nullptr));
        action_Save_Layout_3->setText(QCoreApplication::translate("MainWindow", "Layout &3", nullptr));
        action_Save_Layout_4->setText(QCoreApplication::translate("MainWindow", "Layout &4", nullptr));
        action_Save_Layout_5->setText(QCoreApplication::translate("MainWindow", "Layout &5", nullptr));
        action_Save_Layout_6->setText(QCoreApplication::translate("MainWindow", "Layout &6", nullptr));
        action_Load_Layout_1->setText(QCoreApplication::translate("MainWindow", "Layout &1", nullptr));
        action_Load_Layout_2->setText(QCoreApplication::translate("MainWindow", "Layout &2", nullptr));
        action_Load_Layout_3->setText(QCoreApplication::translate("MainWindow", "Layout &3", nullptr));
        action_Load_Layout_4->setText(QCoreApplication::translate("MainWindow", "Layout &4", nullptr));
        action_Load_Layout_5->setText(QCoreApplication::translate("MainWindow", "Layout &5", nullptr));
        action_Load_Layout_6->setText(QCoreApplication::translate("MainWindow", "Layout &6", nullptr));
        action_Resolve_Symbols->setText(QCoreApplication::translate("MainWindow", "&Resolve Symbols", nullptr));
        action_Settings->setText(QCoreApplication::translate("MainWindow", "&Settings", nullptr));
        action_Manage_Remote_Servers->setText(QCoreApplication::translate("MainWindow", "&Manage Remote Servers", nullptr));
        action_View_Documentation->setText(QCoreApplication::translate("MainWindow", "View &Documentation", nullptr));
        action_Send_Error_Report->setText(QCoreApplication::translate("MainWindow", "Send &Error Report", nullptr));
        action_Source_on_GitHub->setText(QCoreApplication::translate("MainWindow", "Source on GitHub", nullptr));
        action_Build_Release_Downloads->setText(QCoreApplication::translate("MainWindow", "Build/Release Downloads", nullptr));
        action_About->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        action_Clear_Capture_Files_History->setText(QCoreApplication::translate("MainWindow", "Clear History", nullptr));
        action_Clear_Capture_Settings_History->setText(QCoreApplication::translate("MainWindow", "Clear History", nullptr));
        action_Statistics_Viewer->setText(QCoreApplication::translate("MainWindow", "&Statistics Viewer", nullptr));
        action_Show_Tips->setText(QCoreApplication::translate("MainWindow", "Show Tips", nullptr));
        action_Launch_Application_Window->setText(QCoreApplication::translate("MainWindow", "&Launch Application", nullptr));
        action_Start_Replay_Loop->setText(QCoreApplication::translate("MainWindow", "Start Replay &Loop", nullptr));
        action_Counter_Viewer->setText(QCoreApplication::translate("MainWindow", "Performance &Counter Viewer", nullptr));
        action_Resource_Inspector->setText(QCoreApplication::translate("MainWindow", "&Resource Inspector", nullptr));
        action_Save_Capture_As->setText(QCoreApplication::translate("MainWindow", "Sa&ve Capture As", nullptr));
        action_Comments->setText(QCoreApplication::translate("MainWindow", "Capture C&omments", nullptr));
        action_Recompress_Capture->setText(QCoreApplication::translate("MainWindow", "Re&compress Capture", nullptr));
        action_Clear_Reported_Bugs->setText(QCoreApplication::translate("MainWindow", "&Clear Reported Bugs", nullptr));
        action_Check_for_Updates->setText(QCoreApplication::translate("MainWindow", "Check for updates", nullptr));
        action_Create_RGP_Profile->setText(QCoreApplication::translate("MainWindow", "Create new RGP Profile", nullptr));
        action_Open_RGP_Profile->setText(QCoreApplication::translate("MainWindow", "Open RGP Profile", nullptr));
        action_Manage_Extensions->setText(QCoreApplication::translate("MainWindow", "Manage Extensions", nullptr));
        action_Open_Capture_with_Options->setText(QCoreApplication::translate("MainWindow", "Open Capture with Options", nullptr));
#if QT_CONFIG(shortcut)
        action_Open_Capture_with_Options->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        menu_Tools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Recent_Capture_Files->setTitle(QCoreApplication::translate("MainWindow", "&Recent Captures", nullptr));
        menu_Recent_Capture_Settings->setTitle(QCoreApplication::translate("MainWindow", "Recent Capture Settings", nullptr));
        menu_Export_As->setTitle(QCoreApplication::translate("MainWindow", "&Export As...", nullptr));
        menu_Import_From->setTitle(QCoreApplication::translate("MainWindow", "&Import From...", nullptr));
        menu_Window->setTitle(QCoreApplication::translate("MainWindow", "&Window", nullptr));
        menu_Save_Layout->setTitle(QCoreApplication::translate("MainWindow", "&Save Layout", nullptr));
        menu_Load_Layout->setTitle(QCoreApplication::translate("MainWindow", "&Load Layout", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menu_Reported_Bugs->setTitle(QCoreApplication::translate("MainWindow", "&Reported Bugs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
