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

// Function: sub_0039B400
// Address: 0x39b400 - 0x39b4e8
void sub_0039B400_0x39b400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B400_0x39b400");
#endif

    switch (ctx->pc) {
        case 0x39b440u: goto label_39b440;
        case 0x39b4d8u: goto label_39b4d8;
        default: break;
    }

    ctx->pc = 0x39b400u;

    // 0x39b400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39b404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39b40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39b410: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39b410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39b414: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x39b414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x39b418: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x39b418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x39b41c: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x39b41cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39b420: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x39B420u;
    {
        const bool branch_taken_0x39b420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B420u;
        // 0x39b424: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b420) {
            ctx->pc = 0x39B4B0u;
            goto label_39b4b0;
        }
    }
    ctx->pc = 0x39B428u;
    // 0x39b428: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39B428u;
    {
        const bool branch_taken_0x39b428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b428) {
            ctx->pc = 0x39B438u;
            goto label_39b438;
        }
    }
    ctx->pc = 0x39B430u;
    // 0x39b430: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x39B430u;
    {
        const bool branch_taken_0x39b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b430) {
            ctx->pc = 0x39B4D8u;
            goto label_39b4d8;
        }
    }
    ctx->pc = 0x39B438u;
label_39b438:
    // 0x39b438: 0xc0e6924  jal         func_39A490
    ctx->pc = 0x39B438u;
    SET_GPR_U32(ctx, 31, 0x39B440u);
    ctx->pc = 0x39B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B438u;
    // 0x39b43c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A490u, 0x39B438u, 0x39B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B440u;
label_39b440:
    // 0x39b440: 0xa6002b4c  sh          $zero, 0x2B4C($s0)
    ctx->pc = 0x39b440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 0));
    // 0x39b444: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x39b444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x39b448: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39b448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39b44c: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x39b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x39b450: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x39b450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39b454: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x39b454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x39b458: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x39b458u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39b45c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39b460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39b460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39b464: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39b464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39b468: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39b468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39b46c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39b46cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39b470: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39B470u;
    {
        const bool branch_taken_0x39b470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39b470) {
            ctx->pc = 0x39B488u;
            goto label_39b488;
        }
    }
    ctx->pc = 0x39B478u;
    // 0x39b478: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39b478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39b47c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39b47cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39b480: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39B480u;
    {
        const bool branch_taken_0x39b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B480u;
        // 0x39b484: 0xa6042b4e  sh          $a0, 0x2B4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b480) {
            ctx->pc = 0x39B4A4u;
            goto label_39b4a4;
        }
    }
    ctx->pc = 0x39B488u;
label_39b488:
    // 0x39b488: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39b488u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39b48c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39b490: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39b490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39b494: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39b494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39b498: 0x0  nop
    ctx->pc = 0x39b498u;
    // NOP
    // 0x39b49c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39b49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39b4a0: 0xa6042b4e  sh          $a0, 0x2B4E($s0)
    ctx->pc = 0x39b4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 4));
label_39b4a4:
    // 0x39b4a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b4a8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39b4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39b4ac: 0x0  nop
    ctx->pc = 0x39b4acu;
    // NOP
label_39b4b0:
    // 0x39b4b0: 0x86032b4c  lh          $v1, 0x2B4C($s0)
    ctx->pc = 0x39b4b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39b4b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39b4b8: 0xa6032b4c  sh          $v1, 0x2B4C($s0)
    ctx->pc = 0x39b4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 3));
    // 0x39b4bc: 0x86042b4c  lh          $a0, 0x2B4C($s0)
    ctx->pc = 0x39b4bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39b4c0: 0x86032b4e  lh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39b4c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39b4c4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x39b4c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39b4c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39B4C8u;
    {
        const bool branch_taken_0x39b4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4C8u;
        // 0x39b4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b4c8) {
            ctx->pc = 0x39B4D8u;
            goto label_39b4d8;
        }
    }
    ctx->pc = 0x39B4D0u;
    // 0x39b4d0: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B4D0u;
    SET_GPR_U32(ctx, 31, 0x39B4D8u);
    ctx->pc = 0x39B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B4D0u;
    // 0x39b4d4: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B4D0u, 0x39B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B4D8u;
label_39b4d8:
    // 0x39b4d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b4dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x39B4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4E0u;
        // 0x39b4e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B4E8u;
}
