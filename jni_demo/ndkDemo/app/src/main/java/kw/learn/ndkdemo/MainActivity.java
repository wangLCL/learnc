package kw.learn.ndkdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import kw.learn.ndkdemo.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'ndkdemo' library on application startup.
    static {
        System.loadLibrary("ndkdemo");
    }

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Example of a call to a native method
        TextView tv = binding.sampleText;
        tv.setText(stringFromJNI()+"\n"+
                "max(1,5)"+max(1,5)+"\n"+
                "min(1 ,5)"+min(1 ,5)+"\n"+
                "ch(1,4)"+ch(1,4)+"\n"+
                "chu(19,2)"+chu(19,2)+"\n"+
                "mode(4,3)"+mode(4,3)+"\n");
    }

    /**
     * A native method that is implemented by the 'ndkdemo' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    public native int max(int a ,int b);
    public native int min(int a ,int b);
    public native int ch(int a ,int b);
    public native int chu(int a ,int b);
    public native int mode(int a ,int b);
    public native int clamp(int a ,int b);
}