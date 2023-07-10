package com.wk.a4_ndkdemo;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'a4_ndkdemo' library on application startup.
    static {
        System.loadLibrary("a4_ndkdemo");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        GL2JniView view = new GL2JniView(this);
        setContentView(view);
    }

    /**
     * A native method that is implemented by the 'a4_ndkdemo' native library,
     * which is packaged with this application.
     */
}