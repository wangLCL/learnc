package com.wk.a2_ndkdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import com.wk.a2_ndkdemo.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'a2_ndkdemo' library on application startup.
    static {
        System.loadLibrary("a2_ndkdemo");
    }

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());
        callBackMethod();
    }

    private void updateTime(){
        // Example of a call to a native method
        TextView tv = binding.sampleText;
        tv.setText(stringFromJNI()+"xxx"+add(2,5));
    }

    public void update(int a,int b){
        TextView tv = binding.sampleText;
        tv.setText(a+"xxx"+b);
    }

    public native String stringFromJNI();

    public native void callBackMethod();

    public native int add(int a,int b);
}