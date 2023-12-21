package com.wk.learn.view;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Path;
import android.util.AttributeSet;
import android.view.View;

import androidx.annotation.Nullable;

public class CirView extends View {
    private Paint bgPaint;
    private Paint cirPaint;
    private Path cirPath;

    private float

    public CirView(Context context) {
        this(context,null);
    }

    public CirView(Context context, @Nullable AttributeSet attrs) {
        super(context, attrs);
        init();
    }

    private void init(){
        bgPaint = new Paint();
        bgPaint.setColor(Color.BLACK);
        bgPaint.setStyle(Paint.Style.FILL);

        cirPaint = new Paint();
        cirPaint.setColor(Color.RED);
        cirPaint.setStyle(Paint.Style.FILL);

        cirPath = new Path();

        // 画扇形
        cirPath.moveTo(centerX, centerY);
        cirPath.lineTo(centerX + radius, centerY);
        cirPath.arcTo(centerX - radius, centerY - radius, centerX + radius, centerY + radius, 0, 90, true);
        cirPath.lineTo(centerX, centerY);
    }

    @Override
    public void layout(int l, int t, int r, int b) {
        super.layout(l, t, r, b);
    }

    @Override
    public void draw(Canvas canvas) {
        super.draw(canvas);
        int centerX = getWidth()/2;
        int centerY = getHeight()/2;
        int min = Math.min(centerX,centerY);
        canvas.drawCircle(centerX,centerY,min, bgPaint);
    }
}
