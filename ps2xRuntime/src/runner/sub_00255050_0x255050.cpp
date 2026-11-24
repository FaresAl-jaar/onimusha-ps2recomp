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

// Function: sub_00255050
// Address: 0x255050 - 0x255148
void sub_00255050_0x255050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255050_0x255050");
#endif

    switch (ctx->pc) {
        case 0x255070u: goto label_255070;
        case 0x2550a0u: goto label_2550a0;
        case 0x25510cu: goto label_25510c;
        case 0x25512cu: goto label_25512c;
        default: break;
    }

    ctx->pc = 0x255050u;

    // 0x255050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x255050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x255054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x255054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x255058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x255058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25505c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x255060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255064: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x255064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x255068: 0xc095158  jal         func_254560
    ctx->pc = 0x255068u;
    SET_GPR_U32(ctx, 31, 0x255070u);
    ctx->pc = 0x25506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255068u;
    // 0x25506c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254560u, 0x255068u, 0x255070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255070u;
label_255070:
    // 0x255070: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x255070u;
    {
        const bool branch_taken_0x255070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255070) {
            ctx->pc = 0x255130u;
            goto label_255130;
        }
    }
    ctx->pc = 0x255078u;
    // 0x255078: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x255078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x25507c: 0x26511140  addiu       $s1, $s2, 0x1140
    ctx->pc = 0x25507cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4416));
    // 0x255080: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x255080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x255084: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x255084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x255088: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x255088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25508c: 0x24501140  addiu       $s0, $v0, 0x1140
    ctx->pc = 0x25508cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x255090: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x255090u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x255094: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x255094u;
    {
        const bool branch_taken_0x255094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x255094) {
            ctx->pc = 0x255120u;
            goto label_255120;
        }
    }
    ctx->pc = 0x25509Cu;
    // 0x25509c: 0x0  nop
    ctx->pc = 0x25509cu;
    // NOP
label_2550a0:
    // 0x2550a0: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x2550a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2550a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2550a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2550a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2550a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2550ac: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2550acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2550b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2550b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2550b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2550B4u;
    {
        const bool branch_taken_0x2550b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2550b4) {
            ctx->pc = 0x2550CCu;
            goto label_2550cc;
        }
    }
    ctx->pc = 0x2550BCu;
    // 0x2550bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2550bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2550c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2550c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2550c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2550C4u;
    {
        const bool branch_taken_0x2550c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2550C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550C4u;
        // 0x2550c8: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550c4) {
            ctx->pc = 0x2550E8u;
            goto label_2550e8;
        }
    }
    ctx->pc = 0x2550CCu;
label_2550cc:
    // 0x2550cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2550ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2550d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2550d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2550d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2550d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2550d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2550d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2550dc: 0x0  nop
    ctx->pc = 0x2550dcu;
    // NOP
    // 0x2550e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2550e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2550e4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2550e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2550e8:
    // 0x2550e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2550e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2550ec: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x2550ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2550f0: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2550f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2550f4: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x2550f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2550f8: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x2550f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2550fc: 0x84480016  lh          $t0, 0x16($v0)
    ctx->pc = 0x2550fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x255100: 0x84490018  lh          $t1, 0x18($v0)
    ctx->pc = 0x255100u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x255104: 0xc095330  jal         func_254CC0
    ctx->pc = 0x255104u;
    SET_GPR_U32(ctx, 31, 0x25510Cu);
    ctx->pc = 0x255108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255104u;
    // 0x255108: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CC0u, 0x255104u, 0x25510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25510Cu;
label_25510c:
    // 0x25510c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x25510cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x255110: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x255110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x255114: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x255114u;
    {
        const bool branch_taken_0x255114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255114) {
            ctx->pc = 0x2550A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2550a0;
        }
    }
    ctx->pc = 0x25511Cu;
    // 0x25511c: 0x0  nop
    ctx->pc = 0x25511cu;
    // NOP
label_255120:
    // 0x255120: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x255120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x255124: 0xc095184  jal         func_254610
    ctx->pc = 0x255124u;
    SET_GPR_U32(ctx, 31, 0x25512Cu);
    ctx->pc = 0x255128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255124u;
    // 0x255128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254610u, 0x255124u, 0x25512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25512Cu;
label_25512c:
    // 0x25512c: 0x0  nop
    ctx->pc = 0x25512cu;
    // NOP
label_255130:
    // 0x255130: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x255130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25513c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25513cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255140: 0x3e00008  jr          $ra
    ctx->pc = 0x255140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255140u;
        // 0x255144: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255148u;
}
