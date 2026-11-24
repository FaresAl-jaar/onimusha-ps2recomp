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

// Function: sub_0011E768
// Address: 0x11e768 - 0x11ea38
void sub_0011E768_0x11e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E768_0x11e768");
#endif

    switch (ctx->pc) {
        case 0x11e7b8u: goto label_11e7b8;
        case 0x11e820u: goto label_11e820;
        case 0x11e824u: goto label_11e824;
        case 0x11e960u: goto label_11e960;
        case 0x11e9b0u: goto label_11e9b0;
        default: break;
    }

    ctx->pc = 0x11e768u;

    // 0x11e768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e76c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11e76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11e770: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11e770u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11e774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e778: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11e778u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11e77c: 0x44116000  mfc1        $s1, $f12
    ctx->pc = 0x11e77cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11e780: 0x3c0f507f  lui         $t7, 0x507F
    ctx->pc = 0x11e780u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)20607 << 16));
    // 0x11e784: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e784u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11e78c: 0x22e8024  and         $s0, $s1, $t6
    ctx->pc = 0x11e78cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 14));
    // 0x11e790: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11e790u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e794: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11E794u;
    {
        const bool branch_taken_0x11e794 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E794u;
        // 0x11e798: 0x46006186  mov.s       $f6, $f12 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e794) {
            ctx->pc = 0x11E7D0u;
            goto label_11e7d0;
        }
    }
    ctx->pc = 0x11E79Cu;
    // 0x11e79c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e79cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e7a0: 0x25ef3664  addiu       $t7, $t7, 0x3664
    ctx->pc = 0x11e7a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13924));
    // 0x11e7a4: 0x1e200004  bgtz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E7A4u;
    {
        const bool branch_taken_0x11e7a4 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x11E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7A4u;
        // 0x11e7a8: 0xc5e40000  lwc1        $f4, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7a4) {
            ctx->pc = 0x11E7B8u;
            goto label_11e7b8;
        }
    }
    ctx->pc = 0x11E7ACu;
    // 0x11e7ac: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e7acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e7b0: 0x25ef3668  addiu       $t7, $t7, 0x3668
    ctx->pc = 0x11e7b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13928));
    // 0x11e7b4: 0xc5e40000  lwc1        $f4, 0x0($t7)
    ctx->pc = 0x11e7b4u;
    { uint32_t bits = FAST_READ32(0x663668u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11e7b8:
    // 0x11e7b8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x11e7b8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x11e7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e7c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11e7c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7C8u;
        // 0x11e7cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E7D0u;
label_11e7d0:
    // 0x11e7d0: 0x3c0f3edf  lui         $t7, 0x3EDF
    ctx->pc = 0x11e7d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16095 << 16));
    // 0x11e7d4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e7d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e7d8: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11e7d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e7dc: 0x15e0005e  bnez        $t7, . + 4 + (0x5E << 2)
    ctx->pc = 0x11E7DCu;
    {
        const bool branch_taken_0x11e7dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7DCu;
        // 0x11e7e0: 0x3c0f30ff  lui         $t7, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7dc) {
            ctx->pc = 0x11E958u;
            goto label_11e958;
        }
    }
    ctx->pc = 0x11E7E4u;
    // 0x11e7e4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e7e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e7e8: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11e7e8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e7ec: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11E7ECu;
    {
        const bool branch_taken_0x11e7ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7ECu;
        // 0x11e7f0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7ec) {
            ctx->pc = 0x11E820u;
            goto label_11e820;
        }
    }
    ctx->pc = 0x11E7F4u;
    // 0x11e7f4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e7f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e7f8: 0x25ef366c  addiu       $t7, $t7, 0x366C
    ctx->pc = 0x11e7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13932));
    // 0x11e7fc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11e7fcu;
    { uint32_t bits = FAST_READ32(0x66366Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e800: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e800u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e804: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11e804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e808: 0x25ef3670  addiu       $t7, $t7, 0x3670
    ctx->pc = 0x11e808u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13936));
    // 0x11e80c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11e80cu;
    { uint32_t bits = FAST_READ32(0x663670u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e814: 0x4501ffe8  bc1t        . + 4 + (-0x18 << 2)
    ctx->pc = 0x11E814u;
    {
        const bool branch_taken_0x11e814 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E814u;
        // 0x11e818: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e814) {
            ctx->pc = 0x11E7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e7b8;
        }
    }
    ctx->pc = 0x11E81Cu;
    // 0x11e81c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11e81cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11e820:
    // 0x11e820: 0x46063142  mul.s       $f5, $f6, $f6
    ctx->pc = 0x11e820u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_11e824:
    // 0x11e824: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e824u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e828: 0x25ef3680  addiu       $t7, $t7, 0x3680
    ctx->pc = 0x11e828u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13952));
    // 0x11e82c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11e82cu;
    { uint32_t bits = FAST_READ32(0x663680u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e830: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x11e830u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x11e834: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e834u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e838: 0x25ef3684  addiu       $t7, $t7, 0x3684
    ctx->pc = 0x11e838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13956));
    // 0x11e83c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11e83cu;
    { uint32_t bits = FAST_READ32(0x663684u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e840: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11e840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11e844: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e844u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e848: 0x25ef3688  addiu       $t7, $t7, 0x3688
    ctx->pc = 0x11e848u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13960));
    // 0x11e84c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11e84cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11e850: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11e850u;
    { uint32_t bits = FAST_READ32(0x663688u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e854: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e854u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e858: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e85c: 0x25ef368c  addiu       $t7, $t7, 0x368C
    ctx->pc = 0x11e85cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13964));
    // 0x11e860: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11e860u;
    { uint32_t bits = FAST_READ32(0x66368Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e864: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11e864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11e868: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e868u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e86c: 0x25ef3690  addiu       $t7, $t7, 0x3690
    ctx->pc = 0x11e86cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13968));
    // 0x11e870: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11e870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11e874: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11e874u;
    { uint32_t bits = FAST_READ32(0x663690u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e878: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e878u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e87c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e880: 0x25ef3694  addiu       $t7, $t7, 0x3694
    ctx->pc = 0x11e880u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13972));
    // 0x11e884: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11e884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11e888: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11e888u;
    { uint32_t bits = FAST_READ32(0x663694u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e88c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11e88cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11e890: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e890u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e894: 0x25ef3698  addiu       $t7, $t7, 0x3698
    ctx->pc = 0x11e894u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13976));
    // 0x11e898: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11e898u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11e89c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11e89cu;
    { uint32_t bits = FAST_READ32(0x663698u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e8a0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e8a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e8a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e8a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e8a8: 0x25ef369c  addiu       $t7, $t7, 0x369C
    ctx->pc = 0x11e8a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13980));
    // 0x11e8ac: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11e8acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11e8b0: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11e8b0u;
    { uint32_t bits = FAST_READ32(0x66369Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e8b4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11e8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11e8b8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e8b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e8bc: 0x25ef36a0  addiu       $t7, $t7, 0x36A0
    ctx->pc = 0x11e8bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13984));
    // 0x11e8c0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11e8c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11e8c4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11e8c4u;
    { uint32_t bits = FAST_READ32(0x6636A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e8c8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e8c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e8cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e8d0: 0x25ef36a4  addiu       $t7, $t7, 0x36A4
    ctx->pc = 0x11e8d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13988));
    // 0x11e8d4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11e8d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11e8d8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11e8d8u;
    { uint32_t bits = FAST_READ32(0x6636A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e8dc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11e8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11e8e0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e8e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e8e4: 0x25ef36a8  addiu       $t7, $t7, 0x36A8
    ctx->pc = 0x11e8e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13992));
    // 0x11e8e8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11e8e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11e8ec: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11e8ecu;
    { uint32_t bits = FAST_READ32(0x6636A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e8f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e8f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e8f4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x11e8f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11e8f8: 0x5c10005  bgez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E8F8u;
    {
        const bool branch_taken_0x11e8f8 = (GPR_S64(ctx, 14) >= 0);
        ctx->pc = 0x11E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8F8u;
        // 0x11e8fc: 0x46002802  mul.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8f8) {
            ctx->pc = 0x11E910u;
            goto label_11e910;
        }
    }
    ctx->pc = 0x11E900u;
    // 0x11e900: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11e900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11e904: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11e904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11e908: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x11E908u;
    {
        const bool branch_taken_0x11e908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E908u;
        // 0x11e90c: 0x46003101  sub.s       $f4, $f6, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e908) {
            ctx->pc = 0x11E7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e7b8;
        }
    }
    ctx->pc = 0x11E910u;
label_11e910:
    // 0x11e910: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11e910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11e914: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e914u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e918: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x11e918u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x11e91c: 0x25ef3620  addiu       $t7, $t7, 0x3620
    ctx->pc = 0x11e91cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13856));
    // 0x11e920: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x11e920u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11e924: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e928: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11e928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11e92c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e92cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e930: 0x25ef3610  addiu       $t7, $t7, 0x3610
    ctx->pc = 0x11e930u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13840));
    // 0x11e934: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x11e934u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11e938: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11e938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11e93c: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e940: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x11e940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x11e944: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E944u;
    {
        const bool branch_taken_0x11e944 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x11E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E944u;
        // 0x11e948: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e944) {
            ctx->pc = 0x11E950u;
            goto label_11e950;
        }
    }
    ctx->pc = 0x11E94Cu;
    // 0x11e94c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11e94cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11e950:
    // 0x11e950: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x11E950u;
    {
        const bool branch_taken_0x11e950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E950u;
        // 0x11e954: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e950) {
            ctx->pc = 0x11E7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e7b8;
        }
    }
    ctx->pc = 0x11E958u;
label_11e958:
    // 0x11e958: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x11E958u;
    SET_GPR_U32(ctx, 31, 0x11E960u);
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x11E958u, 0x11E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E960u;
label_11e960:
    // 0x11e960: 0x3c0f3f97  lui         $t7, 0x3F97
    ctx->pc = 0x11e960u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16279 << 16));
    // 0x11e964: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e964u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e968: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11e968u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e96c: 0x15e0001b  bnez        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x11E96Cu;
    {
        const bool branch_taken_0x11e96c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E96Cu;
        // 0x11e970: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e96c) {
            ctx->pc = 0x11E9DCu;
            goto label_11e9dc;
        }
    }
    ctx->pc = 0x11E974u;
    // 0x11e974: 0x3c0f3f2f  lui         $t7, 0x3F2F
    ctx->pc = 0x11e974u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16175 << 16));
    // 0x11e978: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e978u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e97c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11e97cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e980: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E980u;
    {
        const bool branch_taken_0x11e980 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E980u;
        // 0x11e984: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e980) {
            ctx->pc = 0x11E9C4u;
            goto label_11e9c4;
        }
    }
    ctx->pc = 0x11E988u;
    // 0x11e988: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e988u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e98c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11e98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11e990: 0x25ef3674  addiu       $t7, $t7, 0x3674
    ctx->pc = 0x11e990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13940));
    // 0x11e994: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x11e994u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e998: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11e998u;
    { uint32_t bits = FAST_READ32(0x663674u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e99c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e99cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e9a0: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x11e9a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x11e9a4: 0x25ef3670  addiu       $t7, $t7, 0x3670
    ctx->pc = 0x11e9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13936));
    // 0x11e9a8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11e9a8u;
    { uint32_t bits = FAST_READ32(0x663670u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e9ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11e9acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_11e9b0:
    // 0x11e9b0: 0x0  nop
    ctx->pc = 0x11e9b0u;
    // NOP
    // 0x11e9b4: 0x0  nop
    ctx->pc = 0x11e9b4u;
    // NOP
    // 0x11e9b8: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x11e9b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x11e9bc: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x11E9BCu;
    {
        const bool branch_taken_0x11e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9BCu;
        // 0x11e9c0: 0x46063142  mul.s       $f5, $f6, $f6 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9bc) {
            ctx->pc = 0x11E824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e824;
        }
    }
    ctx->pc = 0x11E9C4u;
label_11e9c4:
    // 0x11e9c4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x11e9c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e9c8: 0x25ef3670  addiu       $t7, $t7, 0x3670
    ctx->pc = 0x11e9c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13936));
    // 0x11e9cc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11e9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e9d0: 0x46003040  add.s       $f1, $f6, $f0
    ctx->pc = 0x11e9d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x11e9d4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11E9D4u;
    {
        const bool branch_taken_0x11e9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9D4u;
        // 0x11e9d8: 0x46003001  sub.s       $f0, $f6, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9d4) {
            ctx->pc = 0x11E9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e9b0;
        }
    }
    ctx->pc = 0x11E9DCu;
label_11e9dc:
    // 0x11e9dc: 0x3c0f401b  lui         $t7, 0x401B
    ctx->pc = 0x11e9dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16411 << 16));
    // 0x11e9e0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e9e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e9e4: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11e9e4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e9e8: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11E9E8u;
    {
        const bool branch_taken_0x11e9e8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9E8u;
        // 0x11e9ec: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9e8) {
            ctx->pc = 0x11EA1Cu;
            goto label_11ea1c;
        }
    }
    ctx->pc = 0x11E9F0u;
    // 0x11e9f0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e9f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e9f4: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x11e9f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11e9f8: 0x25ef3678  addiu       $t7, $t7, 0x3678
    ctx->pc = 0x11e9f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13944));
    // 0x11e9fc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11e9fcu;
    { uint32_t bits = FAST_READ32(0x663678u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ea00: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ea00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ea04: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x11ea04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11ea08: 0x25ef3670  addiu       $t7, $t7, 0x3670
    ctx->pc = 0x11ea08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13936));
    // 0x11ea0c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11ea0cu;
    { uint32_t bits = FAST_READ32(0x663670u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ea10: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x11ea10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x11ea14: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11EA14u;
    {
        const bool branch_taken_0x11ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA14u;
        // 0x11ea18: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea14) {
            ctx->pc = 0x11E9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e9b0;
        }
    }
    ctx->pc = 0x11EA1Cu;
label_11ea1c:
    // 0x11ea1c: 0x25ef367c  addiu       $t7, $t7, 0x367C
    ctx->pc = 0x11ea1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13948));
    // 0x11ea20: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ea24: 0x0  nop
    ctx->pc = 0x11ea24u;
    // NOP
    // 0x11ea28: 0x0  nop
    ctx->pc = 0x11ea28u;
    // NOP
    // 0x11ea2c: 0x46060183  div.s       $f6, $f0, $f6
    ctx->pc = 0x11ea2cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x11ea30: 0x1000ff7b  b           . + 4 + (-0x85 << 2)
    ctx->pc = 0x11EA30u;
    {
        const bool branch_taken_0x11ea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA30u;
        // 0x11ea34: 0x240e0003  addiu       $t6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea30) {
            ctx->pc = 0x11E820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e820;
        }
    }
    ctx->pc = 0x11EA38u;
}
