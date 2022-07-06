package com.example.securekeys

import android.app.Application
import android.util.Log

class App : Application() {
    init {
        System.loadLibrary("keys")
        System.loadLibrary("native-lib")
    }

    external fun getPublicAppKey(): String?
    external fun getPrivateAppKey(): String?


    external fun getApplicationKey(): String

    override fun onCreate() {
        super.onCreate()
        Log.d("TAG", "getApplicationKey: ${getApplicationKey()}")

        Log.d("TAG", "getPublicAppKey: ${getPublicAppKey()}")
        Log.d("TAG", "getPrivateAppKey: ${getPrivateAppKey()}")
    }

}