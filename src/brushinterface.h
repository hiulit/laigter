#ifndef BRUSHINTERFACE_H
#define BRUSHINTERFACE_H

#include <QtPlugin>

QT_BEGIN_NAMESPACE
class QImage;
class QPainter;
class QWidget;
class QPainterPath;
class QPoint;
class QRect;
class ImageProcessor;
QT_END_NAMESPACE

class BrushInterface
{
  public:
      virtual ~BrushInterface() = 0;

  virtual void setImages(QImage *normal) = 0;
  virtual void mousePress(const QPoint &pos) = 0;
  virtual void mouseMove(const QPoint &oldPos, const QPoint &newPos) = 0;
  virtual void mouseRelease(const QPoint &pos) = 0;
  virtual QWidget *loadGUI(QWidget *parent = nullptr) = 0;
  virtual void setProcessor(ImageProcessor *processor) = 0;
  virtual QIcon getIcon() = 0;
  virtual QString getName() = 0;
};

#define BrushInterface_iid "org.azagaya.laigter.plugins.BrushInterface/1.0"

Q_DECLARE_INTERFACE(BrushInterface, BrushInterface_iid)

#endif // BRUSHINTERFACE_H
