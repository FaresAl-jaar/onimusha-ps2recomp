#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BB10
// Address: 0x19bb10 - 0x19befc
void sub_0019BB10_0x19bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BB10_0x19bb10");
#endif

    switch (ctx->pc) {
        case 0x19bb78u: goto label_19bb78;
        case 0x19bd98u: goto label_19bd98;
        case 0x19bdb0u: goto label_19bdb0;
        case 0x19bed8u: goto label_19bed8;
        default: break;
    }

    ctx->pc = 0x19bb10u;

    // 0x19bb10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19bb14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19bb18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19bb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19bb1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19bb20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19bb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19bb24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19bb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19bb28: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19bb28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19bb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19bb30: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x19bb30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19bb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19bb38: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x19bb38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bb40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19bb40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19bb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19bb48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19bb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb4c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x19bb4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x19bb50: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x19BB50u;
    {
        const bool branch_taken_0x19bb50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB50u;
        // 0x19bb54: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb50) {
            ctx->pc = 0x19BDA0u;
            goto label_19bda0;
        }
    }
    ctx->pc = 0x19BB58u;
    // 0x19bb58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19bb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19bb5c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x19bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x19bb60: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19bb64: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x19BB64u;
    {
        const bool branch_taken_0x19bb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB64u;
        // 0x19bb68: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb64) {
            ctx->pc = 0x19BDA0u;
            goto label_19bda0;
        }
    }
    ctx->pc = 0x19BB6Cu;
    // 0x19bb6c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x19bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x19bb70: 0xc05e360  jal         func_178D80
    ctx->pc = 0x19BB70u;
    SET_GPR_U32(ctx, 31, 0x19BB78u);
    ctx->pc = 0x19BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB70u;
    // 0x19bb74: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x19BB70u, 0x19BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB78u;
label_19bb78:
    // 0x19bb78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb7c: 0x10a000d6  beqz        $a1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x19BB7Cu;
    {
        const bool branch_taken_0x19bb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb7c) {
            ctx->pc = 0x19BED8u;
            goto label_19bed8;
        }
    }
    ctx->pc = 0x19BB84u;
    // 0x19bb84: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x19bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x19bb88: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BB88u;
    {
        const bool branch_taken_0x19bb88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB88u;
        // 0x19bb8c: 0x34478080  ori         $a3, $v0, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb88) {
            ctx->pc = 0x19BBA8u;
            goto label_19bba8;
        }
    }
    ctx->pc = 0x19BB90u;
    // 0x19bb90: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x19bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x19bb94: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x19bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x19bb98: 0x2621825  or          $v1, $s3, $v0
    ctx->pc = 0x19bb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x19bb9c: 0x131600  sll         $v0, $s3, 24
    ctx->pc = 0x19bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x19bba0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x19bba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x19bba4: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x19bba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19bba8:
    // 0x19bba8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x19bbac: 0x3c044438  lui         $a0, 0x4438
    ctx->pc = 0x19bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17464 << 16));
    // 0x19bbb0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x19bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x19bbb4: 0x34840154  ori         $a0, $a0, 0x154
    ctx->pc = 0x19bbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)340);
    // 0x19bbb8: 0x15143c  dsll32      $v0, $s5, 16
    ctx->pc = 0x19bbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 16));
    // 0x19bbbc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x19bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x19bbc0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x19bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19bbc4: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x19bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x19bbc8: 0x3c043f92  lui         $a0, 0x3F92
    ctx->pc = 0x19bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16274 << 16));
    // 0x19bbcc: 0x8e4a0014  lw          $t2, 0x14($s2)
    ctx->pc = 0x19bbccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x19bbd0: 0x34844925  ori         $a0, $a0, 0x4925
    ctx->pc = 0x19bbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18725);
    // 0x19bbd4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x19bbd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bbd8: 0x328900ff  andi        $t1, $s4, 0xFF
    ctx->pc = 0x19bbd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x19bbdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19bbdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19bbe0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19bbe0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19bbe4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x19bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x19bbe8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x19bbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19bbec: 0x34882000  ori         $t0, $a0, 0x2000
    ctx->pc = 0x19bbecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x19bbf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbf4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19bbf8: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x19bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x19bbfc: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x19bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x19bc00: 0x922a000c  lbu         $t2, 0xC($s1)
    ctx->pc = 0x19bc00u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19bc04: 0xa4aa0014  sh          $t2, 0x14($a1)
    ctx->pc = 0x19bc04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 10));
    // 0x19bc08: 0xa4a90016  sh          $t1, 0x16($a1)
    ctx->pc = 0x19bc08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 9));
    // 0x19bc0c: 0x862a0002  lh          $t2, 0x2($s1)
    ctx->pc = 0x19bc0cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19bc10: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x19bc10u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19bc14: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x19bc14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x19bc18: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x19bc18u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bc1c: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x19bc1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19bc20: 0x25290700  addiu       $t1, $t1, 0x700
    ctx->pc = 0x19bc20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x19bc24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19bc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19bc28: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x19bc28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x19bc2c: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x19bc2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x19bc30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19bc30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19bc34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bc34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19bc38: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x19bc38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x19bc3c: 0x0  nop
    ctx->pc = 0x19bc3cu;
    // NOP
    // 0x19bc40: 0x254a0f20  addiu       $t2, $t2, 0xF20
    ctx->pc = 0x19bc40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3872));
    // 0x19bc44: 0xa5cc0  sll         $t3, $t2, 19
    ctx->pc = 0x19bc44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 19));
    // 0x19bc48: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x19bc48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x19bc4c: 0xaca90020  sw          $t1, 0x20($a1)
    ctx->pc = 0x19bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 9));
    // 0x19bc50: 0x8f898764  lw          $t1, -0x789C($gp)
    ctx->pc = 0x19bc50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936420)));
    // 0x19bc54: 0xaca90024  sw          $t1, 0x24($a1)
    ctx->pc = 0x19bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 9));
    // 0x19bc58: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x19bc58u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19bc5c: 0x862a0004  lh          $t2, 0x4($s1)
    ctx->pc = 0x19bc5cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19bc60: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19bc64: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x19bc64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x19bc68: 0x25290700  addiu       $t1, $t1, 0x700
    ctx->pc = 0x19bc68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x19bc6c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x19bc6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x19bc70: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x19bc70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x19bc74: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x19bc74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x19bc78: 0xaca90028  sw          $t1, 0x28($a1)
    ctx->pc = 0x19bc78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 9));
    // 0x19bc7c: 0x8f898764  lw          $t1, -0x789C($gp)
    ctx->pc = 0x19bc7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936420)));
    // 0x19bc80: 0xaca9002c  sw          $t1, 0x2C($a1)
    ctx->pc = 0x19bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 9));
    // 0x19bc84: 0x862a0002  lh          $t2, 0x2($s1)
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19bc88: 0x862b0006  lh          $t3, 0x6($s1)
    ctx->pc = 0x19bc88u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x19bc8c: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x19bc8cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19bc90: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x19bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x19bc94: 0x1625021  addu        $t2, $t3, $v0
    ctx->pc = 0x19bc94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x19bc98: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x19bc98u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bc9c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x19bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19bca0: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x19bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x19bca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19bca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19bca8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19bcac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19bcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19bcb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19bcb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19bcb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bcb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19bcb8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x19bcb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x19bcbc: 0x0  nop
    ctx->pc = 0x19bcbcu;
    // NOP
    // 0x19bcc0: 0x25290f20  addiu       $t1, $t1, 0xF20
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3872));
    // 0x19bcc4: 0x954c0  sll         $t2, $t1, 19
    ctx->pc = 0x19bcc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 19));
    // 0x19bcc8: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x19bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x19bccc: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x19bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x19bcd0: 0x8f828764  lw          $v0, -0x789C($gp)
    ctx->pc = 0x19bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936420)));
    // 0x19bcd4: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x19bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x19bcd8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x19bcd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19bcdc: 0x86290004  lh          $t1, 0x4($s1)
    ctx->pc = 0x19bcdcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19bce0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19bce4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x19bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x19bce8: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x19bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x19bcec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19bcf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19bcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19bcf4: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x19bcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x19bcf8: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x19bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x19bcfc: 0x8f828764  lw          $v0, -0x789C($gp)
    ctx->pc = 0x19bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936420)));
    // 0x19bd00: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x19bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x19bd04: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x19bd04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19bd08: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x19bd08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x19bd0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19bd10: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19bd14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19bd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19bd18: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x19bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x19bd1c: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x19bd1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x19bd20: 0x86290008  lh          $t1, 0x8($s1)
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19bd24: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19bd28: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19bd2c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x19bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x19bd30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19bd34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bd38: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x19bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x19bd3c: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x19bd3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19bd40: 0x8629000a  lh          $t1, 0xA($s1)
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x19bd44: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x19bd44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x19bd48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19bd4c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x19bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x19bd50: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x19bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x19bd54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bd58: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x19bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x19bd5c: 0x862a0008  lh          $t2, 0x8($s1)
    ctx->pc = 0x19bd5cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19bd60: 0x86290004  lh          $t1, 0x4($s1)
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19bd64: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x19bd64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x19bd68: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x19bd68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x19bd6c: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x19bd6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x19bd70: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x19bd70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x19bd74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19bd78: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19bd7c: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x19bd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x19bd80: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x19bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
    // 0x19bd84: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x19bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19bd88: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x19bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x19bd8c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19bd90: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x19BD90u;
    SET_GPR_U32(ctx, 31, 0x19BD98u);
    ctx->pc = 0x19BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD90u;
    // 0x19bd94: 0xa0a7000f  sb          $a3, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x19BD90u, 0x19BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD98u;
label_19bd98:
    // 0x19bd98: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x19BD98u;
    {
        const bool branch_taken_0x19bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd98) {
            ctx->pc = 0x19BED8u;
            goto label_19bed8;
        }
    }
    ctx->pc = 0x19BDA0u;
label_19bda0:
    // 0x19bda0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x19bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x19bda4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x19bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x19bda8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x19BDA8u;
    SET_GPR_U32(ctx, 31, 0x19BDB0u);
    ctx->pc = 0x19BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDA8u;
    // 0x19bdac: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x19BDA8u, 0x19BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDB0u;
label_19bdb0:
    // 0x19bdb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdb4: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x19BDB4u;
    {
        const bool branch_taken_0x19bdb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bdb4) {
            ctx->pc = 0x19BED8u;
            goto label_19bed8;
        }
    }
    ctx->pc = 0x19BDBCu;
    // 0x19bdbc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x19bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x19bdc0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BDC0u;
    {
        const bool branch_taken_0x19bdc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDC0u;
        // 0x19bdc4: 0x34448080  ori         $a0, $v0, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdc0) {
            ctx->pc = 0x19BDE0u;
            goto label_19bde0;
        }
    }
    ctx->pc = 0x19BDC8u;
    // 0x19bdc8: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x19bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x19bdcc: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x19bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x19bdd0: 0x2621825  or          $v1, $s3, $v0
    ctx->pc = 0x19bdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x19bdd4: 0x131600  sll         $v0, $s3, 24
    ctx->pc = 0x19bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x19bdd8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x19bdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x19bddc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x19bddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19bde0:
    // 0x19bde0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x19bde4: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x19bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x19bde8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x19bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x19bdec: 0x34420156  ori         $v0, $v0, 0x156
    ctx->pc = 0x19bdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)342);
    // 0x19bdf0: 0x10543c  dsll32      $t2, $s0, 16
    ctx->pc = 0x19bdf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19bdf4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19bdf8: 0x153c3c  dsll32      $a3, $s5, 16
    ctx->pc = 0x19bdf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << (32 + 16));
    // 0x19bdfc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x19bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x19be00: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x19be00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x19be04: 0x8e490014  lw          $t1, 0x14($s2)
    ctx->pc = 0x19be04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x19be08: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x19be08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19be0c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19be10: 0x328800ff  andi        $t0, $s4, 0xFF
    ctx->pc = 0x19be10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x19be14: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x19be14u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x19be18: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x19be18u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x19be1c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x19be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19be20: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x19be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x19be24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19be24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be28: 0xaca90010  sw          $t1, 0x10($a1)
    ctx->pc = 0x19be28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 9));
    // 0x19be2c: 0x9229000c  lbu         $t1, 0xC($s1)
    ctx->pc = 0x19be2cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19be30: 0xa4a90014  sh          $t1, 0x14($a1)
    ctx->pc = 0x19be30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 9));
    // 0x19be34: 0xa4a80016  sh          $t0, 0x16($a1)
    ctx->pc = 0x19be34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 8));
    // 0x19be38: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x19be38u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19be3c: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x19be3cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19be40: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x19be40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x19be44: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x19be44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x19be48: 0x25280700  addiu       $t0, $t1, 0x700
    ctx->pc = 0x19be48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x19be4c: 0x24e70f20  addiu       $a3, $a3, 0xF20
    ctx->pc = 0x19be4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3872));
    // 0x19be50: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x19be50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x19be54: 0x73cc0  sll         $a3, $a3, 19
    ctx->pc = 0x19be54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
    // 0x19be58: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x19be58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x19be5c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x19be5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x19be60: 0xaca70020  sw          $a3, 0x20($a1)
    ctx->pc = 0x19be60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 7));
    // 0x19be64: 0x8f878764  lw          $a3, -0x789C($gp)
    ctx->pc = 0x19be64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936420)));
    // 0x19be68: 0xaca70024  sw          $a3, 0x24($a1)
    ctx->pc = 0x19be68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 7));
    // 0x19be6c: 0x86280004  lh          $t0, 0x4($s1)
    ctx->pc = 0x19be6cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19be70: 0x86270006  lh          $a3, 0x6($s1)
    ctx->pc = 0x19be70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x19be74: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x19be74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x19be78: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x19be78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x19be7c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x19be7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x19be80: 0xaca70028  sw          $a3, 0x28($a1)
    ctx->pc = 0x19be80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 7));
    // 0x19be84: 0x86280008  lh          $t0, 0x8($s1)
    ctx->pc = 0x19be84u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19be88: 0x8627000a  lh          $a3, 0xA($s1)
    ctx->pc = 0x19be88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x19be8c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x19be8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x19be90: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x19be90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x19be94: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x19be94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x19be98: 0xaca70018  sw          $a3, 0x18($a1)
    ctx->pc = 0x19be98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
    // 0x19be9c: 0x862a0008  lh          $t2, 0x8($s1)
    ctx->pc = 0x19be9cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19bea0: 0x86290004  lh          $t1, 0x4($s1)
    ctx->pc = 0x19bea0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19bea4: 0x8628000a  lh          $t0, 0xA($s1)
    ctx->pc = 0x19bea4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x19bea8: 0x86270006  lh          $a3, 0x6($s1)
    ctx->pc = 0x19bea8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x19beac: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x19beacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x19beb0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x19beb0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x19beb4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x19beb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x19beb8: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x19beb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x19bebc: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x19bebcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x19bec0: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x19bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
    // 0x19bec4: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x19bec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19bec8: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x19bec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x19becc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x19beccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x19bed0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x19BED0u;
    SET_GPR_U32(ctx, 31, 0x19BED8u);
    ctx->pc = 0x19BED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BED0u;
    // 0x19bed4: 0xa0a2000f  sb          $v0, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x19BED0u, 0x19BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BED8u;
label_19bed8:
    // 0x19bed8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19bed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19bedc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19bedcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19bee0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19bee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bee4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19bee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19bee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19beec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19beecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19bef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bef4: 0x3e00008  jr          $ra
    ctx->pc = 0x19BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEF4u;
        // 0x19bef8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BEFCu;
}
