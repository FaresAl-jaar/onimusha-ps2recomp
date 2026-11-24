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

// Function: sub_002EC330
// Address: 0x2ec330 - 0x2ec430
void sub_002EC330_0x2ec330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC330_0x2ec330");
#endif

    ctx->pc = 0x2ec330u;

    // 0x2ec330: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC330u;
    {
        const bool branch_taken_0x2ec330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC330u;
        // 0x2ec334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec330) {
            ctx->pc = 0x2EC348u;
            goto label_2ec348;
        }
    }
    ctx->pc = 0x2EC338u;
    // 0x2ec338: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC338u;
    {
        const bool branch_taken_0x2ec338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ec338) {
            ctx->pc = 0x2EC348u;
            goto label_2ec348;
        }
    }
    ctx->pc = 0x2EC340u;
    // 0x2ec340: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2EC340u;
    {
        const bool branch_taken_0x2ec340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC340u;
        // 0x2ec344: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec340) {
            ctx->pc = 0x2EC428u;
            goto label_2ec428;
        }
    }
    ctx->pc = 0x2EC348u;
label_2ec348:
    // 0x2ec348: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2EC348u;
    {
        const bool branch_taken_0x2ec348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec348) {
            ctx->pc = 0x2EC428u;
            goto label_2ec428;
        }
    }
    ctx->pc = 0x2EC350u;
    // 0x2ec350: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC350u;
    {
        const bool branch_taken_0x2ec350 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2EC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC350u;
        // 0x2ec354: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec350) {
            ctx->pc = 0x2EC364u;
            goto label_2ec364;
        }
    }
    ctx->pc = 0x2EC358u;
    // 0x2ec358: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ec358u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec35c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC35Cu;
    {
        const bool branch_taken_0x2ec35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC35Cu;
        // 0x2ec360: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec35c) {
            ctx->pc = 0x2EC37Cu;
            goto label_2ec37c;
        }
    }
    ctx->pc = 0x2EC364u;
label_2ec364:
    // 0x2ec364: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2ec364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ec368: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ec368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ec36c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec370: 0x0  nop
    ctx->pc = 0x2ec370u;
    // NOP
    // 0x2ec374: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2ec374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ec378: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ec378u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ec37c:
    // 0x2ec37c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC37Cu;
    {
        const bool branch_taken_0x2ec37c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2EC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC37Cu;
        // 0x2ec380: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec37c) {
            ctx->pc = 0x2EC390u;
            goto label_2ec390;
        }
    }
    ctx->pc = 0x2EC384u;
    // 0x2ec384: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ec384u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec388: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC388u;
    {
        const bool branch_taken_0x2ec388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC388u;
        // 0x2ec38c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec388) {
            ctx->pc = 0x2EC3A8u;
            goto label_2ec3a8;
        }
    }
    ctx->pc = 0x2EC390u;
label_2ec390:
    // 0x2ec390: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2ec390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2ec394: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ec394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ec398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec39c: 0x0  nop
    ctx->pc = 0x2ec39cu;
    // NOP
    // 0x2ec3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ec3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ec3a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ec3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ec3a8:
    // 0x2ec3a8: 0x0  nop
    ctx->pc = 0x2ec3a8u;
    // NOP
    // 0x2ec3ac: 0x0  nop
    ctx->pc = 0x2ec3acu;
    // NOP
    // 0x2ec3b0: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x2ec3b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ec3b4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2ec3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2ec3b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ec3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ec3bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ec3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec3c4: 0x0  nop
    ctx->pc = 0x2ec3c4u;
    // NOP
    // 0x2ec3c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ec3c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ec3cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ec3ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec3d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC3D0u;
    {
        const bool branch_taken_0x2ec3d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec3d0) {
            ctx->pc = 0x2EC3E8u;
            goto label_2ec3e8;
        }
    }
    ctx->pc = 0x2EC3D8u;
    // 0x2ec3d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec3d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ec3dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ec3dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ec3e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC3E0u;
    {
        const bool branch_taken_0x2ec3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec3e0) {
            ctx->pc = 0x2EC400u;
            goto label_2ec400;
        }
    }
    ctx->pc = 0x2EC3E8u;
label_2ec3e8:
    // 0x2ec3e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ec3e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ec3ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ec3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ec3f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec3f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ec3f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ec3f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ec3f8: 0x0  nop
    ctx->pc = 0x2ec3f8u;
    // NOP
    // 0x2ec3fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ec400:
    // 0x2ec400: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC400u;
    {
        const bool branch_taken_0x2ec400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec400) {
            ctx->pc = 0x2EC418u;
            goto label_2ec418;
        }
    }
    ctx->pc = 0x2EC408u;
    // 0x2ec408: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC408u;
    {
        const bool branch_taken_0x2ec408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec408) {
            ctx->pc = 0x2EC418u;
            goto label_2ec418;
        }
    }
    ctx->pc = 0x2EC410u;
    // 0x2ec410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec414: 0x0  nop
    ctx->pc = 0x2ec414u;
    // NOP
label_2ec418:
    // 0x2ec418: 0x2c410065  sltiu       $at, $v0, 0x65
    ctx->pc = 0x2ec418u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x2ec41c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC41Cu;
    {
        const bool branch_taken_0x2ec41c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec41c) {
            ctx->pc = 0x2EC428u;
            goto label_2ec428;
        }
    }
    ctx->pc = 0x2EC424u;
    // 0x2ec424: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2ec424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ec428:
    // 0x2ec428: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC430u;
}
