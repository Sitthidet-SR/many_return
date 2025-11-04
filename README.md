# Many Return Calculator

โปรแกรมคำนวณทางคณิตศาสตร์ที่รับค่า 4 ตัวเลข และแสดงผลการคำนวณแบบต่างๆ

## คุณสมบัติ

- รับค่าตัวเลข 4 ตัว (w, x, y, z)
- คำนวณผลลัพธ์ 4 แบบ:
  - บวก (add): w + x + y + z
  - ลบ (minus): w - x - y - z
  - คูณ (multi): w × x × y × z
  - หาร (divide): w ÷ x ÷ y ÷ z

## การคอมไพล์

```bash
gcc many_return.c -o many_return
```

## การใช้งาน

```bash
./many_return
```

จากนั้นป้อนตัวเลข 4 ตัว และเลือกเมนูเพื่อดูผลลัพธ์การคำนวณ

## ตัวอย่างการใช้งาน

```
Press Input Data : w x y z
10 2 5 1
Before Calculation: w = 10, x = 2, y = 5, z = 1

Menu:
q = exit
1 = add
2 = minus
3 = multi
4 = divide
Enter your choice: 1
After add = 18
```
