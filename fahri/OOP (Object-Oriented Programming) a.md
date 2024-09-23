OOP (Object-Oriented Programming) atau Pemrograman Berorientasi Objek adalah sebuah paradigma pemrograman yang berfokus pada konsep "objek". Dalam OOP, program diorganisasikan sebagai kumpulan objek, yang merupakan instansi dari kelas (class). Setiap objek memiliki **atribut** (data) dan **metode** (fungsi) yang bisa digunakan untuk berinteraksi dengan objek lain.

Beberapa konsep utama dalam OOP adalah:

1. **Kelas (Class)**: Cetak biru atau template untuk membuat objek. Kelas mendefinisikan atribut dan metode yang dimiliki oleh objek.
   
2. **Objek (Object)**: Implementasi dari kelas, yaitu entitas nyata yang memiliki data dan dapat melakukan operasi.

3. **Enkapsulasi (Encapsulation)**: Proses menyembunyikan detail internal objek dan hanya menyediakan akses melalui metode tertentu. Hal ini memungkinkan proteksi data dan modularitas.

4. **Abstraksi (Abstraction)**: Menyederhanakan kompleksitas dengan hanya menampilkan informasi penting dan menyembunyikan detail implementasi.

5. **Pewarisan (Inheritance)**: Mekanisme di mana satu kelas dapat mewarisi atribut dan metode dari kelas lain. Ini membantu dalam membuat hubungan hierarkis dan memungkinkan penggunaan kembali kode.

6. **Polimorfisme (Polymorphism)**: Kemampuan untuk menggunakan satu antarmuka untuk berbagai bentuk (misalnya, metode yang sama dapat berperilaku berbeda tergantung pada objek yang menggunakannya).

OOP sering digunakan dalam bahasa pemrograman seperti Python, Java, C++, dan banyak lainnya karena membantu dalam membuat program yang lebih modular, mudah dipelihara, dan scalable.

class Motor {
  private:
    int motorPin;
    int selectorPin;

  public:
    // Constructor
    Motor(int motorPin, int selectorPin) {
      this->motorPin = motorPin;
      this->selectorPin = selectorPin;
      pinMode(motorPin, OUTPUT);
      pinMode(selectorPin, OUTPUT);
    }

    // Function to move motor with specific speed and selector state
    void move(int speed, bool selectorState) {
      analogWrite(motorPin, speed);
      digitalWrite(selectorPin, selectorState);
    }

    // Function to stop motor
    void stop() {
      analogWrite(motorPin, 0);
      digitalWrite(selectorPin, LOW);
    }
};

Motor motorFrontLeft(6, 34);
Motor motorFrontRight(5, 36);
Motor motorBackLeft(8, 30);
Motor motorBackRight(9, 32);

void setup() {
  // All setup is handled in the Motor class constructor
}

void moveright() {
  // Motor bergerak maju
  motorFrontLeft.move(50, LOW);
  motorFrontRight.move(50, LOW);
  motorBackLeft.move(50, HIGH);
  motorBackRight.move(50, HIGH);
}

void motorstop() {
  motorFrontLeft.stop();
  motorFrontRight.stop();
  motorBackLeft.stop();
  motorBackRight.stop();
}

void loop() {
  moveright();
  delay(4000);
  
  motorstop();
  delay(1000);
}
