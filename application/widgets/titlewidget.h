#ifndef TITLEWIDGET_H
#define TITLEWIDGET_H

#include <DWidget>
#include <DPushButton>
#include "customcontrol/tippartdialog.h"
#include "partedproxy/dmdbushandler.h"
#include "customcontrol/partitionwidget.h"
#include "utils.h"
DWIDGET_USE_NAMESPACE


class TitleWidget: public DWidget
{
    Q_OBJECT
public:
    explicit TitleWidget(DWidget *parent = nullptr);

private:
    void initUi();
    void initConnection();
    DPushButton *createBtn(const QString &btnName, const QString &objName, bool bCheckable = false);
    void updateBtnStatus();


signals:

public slots:
    void slotCurSelectChanged();
    void showPartInfoWidget();
    void showFormateInfoWidget();
    void showMountInfoWidget();
    void showUnmountInfoWidget();
    void showResizeInfoWidget();

private:
    DPushButton *m_btnparted;
    DPushButton *m_btnformat;
    DPushButton *m_btnmount;
    DPushButton *m_btnunmount;
    DPushButton *m_btnresize;
    TipPartDialog *tipPartDialog;
    PartitionWidget *partitionWidget;
    PartitionInfo getPartitionInfo;
    QString device_size;
    int controlButton = 0;
//    QList<QAbstractButton *> list;
};



#endif // TITLEWIDGET_H
