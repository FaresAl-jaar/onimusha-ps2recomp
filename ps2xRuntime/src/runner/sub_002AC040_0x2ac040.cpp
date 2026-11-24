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

// Function: sub_002AC040
// Address: 0x2ac040 - 0x2ac16c
void sub_002AC040_0x2ac040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC040_0x2ac040");
#endif

    switch (ctx->pc) {
        case 0x2ac0b4u: goto label_2ac0b4;
        case 0x2ac0f4u: goto label_2ac0f4;
        default: break;
    }

    ctx->pc = 0x2ac040u;

    // 0x2ac040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ac044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ac048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ac04c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ac050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac054: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2ac054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac058: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ac058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac05c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2ac05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2ac060: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2ac060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2ac064: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2ac064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x2ac068: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2ac068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac06c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2ac06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2ac070: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2ac070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x2ac074: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2ac074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac078: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2ac078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2ac07c: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2ac07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x2ac080: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2ac080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac084: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2ac084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2ac088: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2ac088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x2ac08c: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2ac08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac090: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ac090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ac094: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2ac094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x2ac098: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2ac098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ac09c: 0x7c820870  sq          $v0, 0x870($a0)
    ctx->pc = 0x2ac09cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2160), GPR_VEC(ctx, 2));
    // 0x2ac0a0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2ac0a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ac0a4: 0x7c820890  sq          $v0, 0x890($a0)
    ctx->pc = 0x2ac0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2192), GPR_VEC(ctx, 2));
    // 0x2ac0a8: 0xac8808c8  sw          $t0, 0x8C8($a0)
    ctx->pc = 0x2ac0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2248), GPR_U32(ctx, 8));
    // 0x2ac0ac: 0xc096988  jal         func_25A620
    ctx->pc = 0x2AC0ACu;
    SET_GPR_U32(ctx, 31, 0x2AC0B4u);
    ctx->pc = 0x2AC0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0ACu;
    // 0x2ac0b0: 0x26240870  addiu       $a0, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2AC0ACu, 0x2AC0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0B4u;
label_2ac0b4:
    // 0x2ac0b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ac0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac0b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac0b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac0bc: 0x0  nop
    ctx->pc = 0x2ac0bcu;
    // NOP
    // 0x2ac0c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ac0c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac0c4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x2AC0C4u;
    {
        const bool branch_taken_0x2ac0c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac0c4) {
            ctx->pc = 0x2AC140u;
            goto label_2ac140;
        }
    }
    ctx->pc = 0x2AC0CCu;
    // 0x2ac0cc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC0CCu;
    {
        const bool branch_taken_0x2ac0cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0CCu;
        // 0x2ac0d0: 0x240200b8  addiu       $v0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0cc) {
            ctx->pc = 0x2AC0E0u;
            goto label_2ac0e0;
        }
    }
    ctx->pc = 0x2AC0D4u;
    // 0x2ac0d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC0D4u;
    {
        const bool branch_taken_0x2ac0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0D4u;
        // 0x2ac0d8: 0xa2220822  sb          $v0, 0x822($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2082), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0d4) {
            ctx->pc = 0x2AC0E8u;
            goto label_2ac0e8;
        }
    }
    ctx->pc = 0x2AC0DCu;
    // 0x2ac0dc: 0x0  nop
    ctx->pc = 0x2ac0dcu;
    // NOP
label_2ac0e0:
    // 0x2ac0e0: 0x240200b7  addiu       $v0, $zero, 0xB7
    ctx->pc = 0x2ac0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x2ac0e4: 0xa2220822  sb          $v0, 0x822($s1)
    ctx->pc = 0x2ac0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2082), (uint8_t)GPR_U32(ctx, 2));
label_2ac0e8:
    // 0x2ac0e8: 0x26240890  addiu       $a0, $s1, 0x890
    ctx->pc = 0x2ac0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2ac0ec: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2AC0ECu;
    SET_GPR_U32(ctx, 31, 0x2AC0F4u);
    ctx->pc = 0x2AC0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0ECu;
    // 0x2ac0f0: 0x26250870  addiu       $a1, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2AC0ECu, 0x2AC0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0F4u;
label_2ac0f4:
    // 0x2ac0f4: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x2ac0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x2ac0f8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2ac0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2ac0fc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2ac0fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac100: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2ac100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2ac104: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac108: 0x0  nop
    ctx->pc = 0x2ac108u;
    // NOP
    // 0x2ac10c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ac10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ac110: 0x240300b1  addiu       $v1, $zero, 0xB1
    ctx->pc = 0x2ac110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x2ac114: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ac114u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ac118: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac118u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ac11c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ac11cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ac120: 0x0  nop
    ctx->pc = 0x2ac120u;
    // NOP
    // 0x2ac124: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2ac124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2ac128: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2ac128u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2ac12c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x2ac12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x2ac130: 0xa62408a0  sh          $a0, 0x8A0($s1)
    ctx->pc = 0x2ac130u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2208), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ac134: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC134u;
    {
        const bool branch_taken_0x2ac134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC134u;
        // 0x2ac138: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac134) {
            ctx->pc = 0x2AC158u;
            goto label_2ac158;
        }
    }
    ctx->pc = 0x2AC13Cu;
    // 0x2ac13c: 0x0  nop
    ctx->pc = 0x2ac13cu;
    // NOP
label_2ac140:
    // 0x2ac140: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC140u;
    {
        const bool branch_taken_0x2ac140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC140u;
        // 0x2ac144: 0x240300b8  addiu       $v1, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac140) {
            ctx->pc = 0x2AC150u;
            goto label_2ac150;
        }
    }
    ctx->pc = 0x2AC148u;
    // 0x2ac148: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC148u;
    {
        const bool branch_taken_0x2ac148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC148u;
        // 0x2ac14c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac148) {
            ctx->pc = 0x2AC158u;
            goto label_2ac158;
        }
    }
    ctx->pc = 0x2AC150u;
label_2ac150:
    // 0x2ac150: 0x240300b7  addiu       $v1, $zero, 0xB7
    ctx->pc = 0x2ac150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x2ac154: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2ac154u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2ac158:
    // 0x2ac158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ac158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac15c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac164: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC164u;
        // 0x2ac168: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC16Cu;
}
