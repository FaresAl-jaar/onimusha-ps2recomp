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

// Function: sub_0011B420
// Address: 0x11b420 - 0x11b690
void sub_0011B420_0x11b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B420_0x11b420");
#endif

    switch (ctx->pc) {
        case 0x11b44cu: goto label_11b44c;
        case 0x11b4c8u: goto label_11b4c8;
        case 0x11b4ccu: goto label_11b4cc;
        case 0x11b4d0u: goto label_11b4d0;
        case 0x11b56cu: goto label_11b56c;
        default: break;
    }

    ctx->pc = 0x11b420u;

    // 0x11b420: 0x440c6000  mfc1        $t4, $f12
    ctx->pc = 0x11b420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11b424: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11b424u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11b428: 0x3c0f42b2  lui         $t7, 0x42B2
    ctx->pc = 0x11b428u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)17074 << 16));
    // 0x11b42c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11b42cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11b430: 0x35efd4fc  ori         $t7, $t7, 0xD4FC
    ctx->pc = 0x11b430u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)54524);
    // 0x11b434: 0x18e5824  and         $t3, $t4, $t6
    ctx->pc = 0x11b434u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x11b438: 0x1ec782a  slt         $t7, $t7, $t4
    ctx->pc = 0x11b438u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11b43c: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B43Cu;
    {
        const bool branch_taken_0x11b43c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B43Cu;
        // 0x11b440: 0xc57c2  srl         $t2, $t4, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b43c) {
            ctx->pc = 0x11B454u;
            goto label_11b454;
        }
    }
    ctx->pc = 0x11B444u;
    // 0x11b444: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b444u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b448: 0x8ded2d88  lw          $t5, 0x2D88($t7)
    ctx->pc = 0x11b448u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x662D88u));
label_11b44c:
    // 0x11b44c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B44Cu;
        // 0x11b450: 0x448d0000  mtc1        $t5, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B454u;
label_11b454:
    // 0x11b454: 0x5810007  bgez        $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B454u;
    {
        const bool branch_taken_0x11b454 = (GPR_S64(ctx, 12) >= 0);
        ctx->pc = 0x11B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B454u;
        // 0x11b458: 0x3c0f3eb1  lui         $t7, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b454) {
            ctx->pc = 0x11B474u;
            goto label_11b474;
        }
    }
    ctx->pc = 0x11B45Cu;
    // 0x11b45c: 0x3c0f42ae  lui         $t7, 0x42AE
    ctx->pc = 0x11b45cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)17070 << 16));
    // 0x11b460: 0x35efac50  ori         $t7, $t7, 0xAC50
    ctx->pc = 0x11b460u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)44112);
    // 0x11b464: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x11b464u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x11b468: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11B468u;
    {
        const bool branch_taken_0x11b468 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B468u;
        // 0x11b46c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b468) {
            ctx->pc = 0x11B44Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b44c;
        }
    }
    ctx->pc = 0x11B470u;
    // 0x11b470: 0x3c0f3eb1  lui         $t7, 0x3EB1
    ctx->pc = 0x11b470u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16049 << 16));
label_11b474:
    // 0x11b474: 0x35ef7218  ori         $t7, $t7, 0x7218
    ctx->pc = 0x11b474u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)29208);
    // 0x11b478: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x11b478u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x11b47c: 0x11e00072  beqz        $t7, . + 4 + (0x72 << 2)
    ctx->pc = 0x11B47Cu;
    {
        const bool branch_taken_0x11b47c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B47Cu;
        // 0x11b480: 0x3c0f3f85  lui         $t7, 0x3F85 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16261 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b47c) {
            ctx->pc = 0x11B648u;
            goto label_11b648;
        }
    }
    ctx->pc = 0x11B484u;
    // 0x11b484: 0x35ef1591  ori         $t7, $t7, 0x1591
    ctx->pc = 0x11b484u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)5521);
    // 0x11b488: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x11b488u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x11b48c: 0x15e00057  bnez        $t7, . + 4 + (0x57 << 2)
    ctx->pc = 0x11B48Cu;
    {
        const bool branch_taken_0x11b48c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B48Cu;
        // 0x11b490: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b48c) {
            ctx->pc = 0x11B5ECu;
            goto label_11b5ec;
        }
    }
    ctx->pc = 0x11B494u;
    // 0x11b494: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b494u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b498: 0xa6880  sll         $t5, $t2, 2
    ctx->pc = 0x11b498u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11b49c: 0x25ef2d60  addiu       $t7, $t7, 0x2D60
    ctx->pc = 0x11b49cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11616));
    // 0x11b4a0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b4a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b4a4: 0x1af7821  addu        $t7, $t5, $t7
    ctx->pc = 0x11b4a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11b4a8: 0x25ce2d68  addiu       $t6, $t6, 0x2D68
    ctx->pc = 0x11b4a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11624));
    // 0x11b4ac: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b4b0: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x11b4b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x11b4b4: 0xc5a40000  lwc1        $f4, 0x0($t5)
    ctx->pc = 0x11b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11b4b8: 0x460060c1  sub.s       $f3, $f12, $f0
    ctx->pc = 0x11b4b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11b4bc: 0xa7823  negu        $t7, $t2
    ctx->pc = 0x11b4bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x11b4c0: 0x1ea7823  subu        $t7, $t7, $t2
    ctx->pc = 0x11b4c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x11b4c4: 0x25e90001  addiu       $t1, $t7, 0x1
    ctx->pc = 0x11b4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_11b4c8:
    // 0x11b4c8: 0x46041b01  sub.s       $f12, $f3, $f4
    ctx->pc = 0x11b4c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_11b4cc:
    // 0x11b4cc: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x11b4ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_11b4d0:
    // 0x11b4d0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b4d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b4d4: 0x25ce2da0  addiu       $t6, $t6, 0x2DA0
    ctx->pc = 0x11b4d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11680));
    // 0x11b4d8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b4d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b4dc: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11b4dcu;
    { uint32_t bits = FAST_READ32(0x662DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b4e0: 0x25ef2da4  addiu       $t7, $t7, 0x2DA4
    ctx->pc = 0x11b4e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11684));
    // 0x11b4e4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b4e4u;
    { uint32_t bits = FAST_READ32(0x662DA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b4e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11b4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11b4ec: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b4ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b4f0: 0x25ce2da8  addiu       $t6, $t6, 0x2DA8
    ctx->pc = 0x11b4f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11688));
    // 0x11b4f4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b4f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b4f8: 0x25ef2dac  addiu       $t7, $t7, 0x2DAC
    ctx->pc = 0x11b4f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11692));
    // 0x11b4fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11b4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11b500: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11b500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11b504: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11b504u;
    { uint32_t bits = FAST_READ32(0x662DA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b508: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b508u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b50c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11b50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11b510: 0x25ce2db0  addiu       $t6, $t6, 0x2DB0
    ctx->pc = 0x11b510u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11696));
    // 0x11b514: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11b514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11b518: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b518u;
    { uint32_t bits = FAST_READ32(0x662DACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b51c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11b51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11b520: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11b520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11b524: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11b524u;
    { uint32_t bits = FAST_READ32(0x662DB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11b528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11b52c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11b52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11b530: 0x15200010  bnez        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11B530u;
    {
        const bool branch_taken_0x11b530 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B530u;
        // 0x11b534: 0x46006081  sub.s       $f2, $f12, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b530) {
            ctx->pc = 0x11B574u;
            goto label_11b574;
        }
    }
    ctx->pc = 0x11B538u;
    // 0x11b538: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b538u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b53c: 0x46026002  mul.s       $f0, $f12, $f2
    ctx->pc = 0x11b53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x11b540: 0x25ef2db4  addiu       $t7, $t7, 0x2DB4
    ctx->pc = 0x11b540u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11700));
    // 0x11b544: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b544u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b548: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b548u;
    { uint32_t bits = FAST_READ32(0x662DB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b54c: 0x25ce2d98  addiu       $t6, $t6, 0x2D98
    ctx->pc = 0x11b54cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11672));
    // 0x11b550: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x11b550u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x11b554: 0x0  nop
    ctx->pc = 0x11b554u;
    // NOP
    // 0x11b558: 0x0  nop
    ctx->pc = 0x11b558u;
    // NOP
    // 0x11b55c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11b55cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x11b560: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11b560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11b564: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11b564u;
    { uint32_t bits = FAST_READ32(0x662D98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b568: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11b568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11b56c:
    // 0x11b56c: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x11B56Cu;
    {
        const bool branch_taken_0x11b56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B56Cu;
        // 0x11b570: 0x440d0800  mfc1        $t5, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b56c) {
            ctx->pc = 0x11B44Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b44c;
        }
    }
    ctx->pc = 0x11B574u;
label_11b574:
    // 0x11b574: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b574u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b578: 0x46026042  mul.s       $f1, $f12, $f2
    ctx->pc = 0x11b578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x11b57c: 0x25ce2db4  addiu       $t6, $t6, 0x2DB4
    ctx->pc = 0x11b57cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11700));
    // 0x11b580: 0x292fff83  slti        $t7, $t1, -0x7D
    ctx->pc = 0x11b580u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4294967171) ? 1 : 0);
    // 0x11b584: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b588: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11b588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11b58c: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b58cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b590: 0x25ce2d98  addiu       $t6, $t6, 0x2D98
    ctx->pc = 0x11b590u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11672));
    // 0x11b594: 0x0  nop
    ctx->pc = 0x11b594u;
    // NOP
    // 0x11b598: 0x0  nop
    ctx->pc = 0x11b598u;
    // NOP
    // 0x11b59c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11b59cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x11b5a0: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x11b5a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x11b5a4: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11b5a4u;
    { uint32_t bits = FAST_READ32(0x662D98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b5a8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11b5a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11b5ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11b5acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11b5b0: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B5B0u;
    {
        const bool branch_taken_0x11b5b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5B0u;
        // 0x11b5b4: 0x440e0000  mfc1        $t6, $f0 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5b0) {
            ctx->pc = 0x11B5C4u;
            goto label_11b5c4;
        }
    }
    ctx->pc = 0x11B5B8u;
    // 0x11b5b8: 0x97dc0  sll         $t7, $t1, 23
    ctx->pc = 0x11b5b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
    // 0x11b5bc: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x11B5BCu;
    {
        const bool branch_taken_0x11b5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5BCu;
        // 0x11b5c0: 0x1cf6821  addu        $t5, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5bc) {
            ctx->pc = 0x11B44Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b44c;
        }
    }
    ctx->pc = 0x11B5C4u;
label_11b5c4:
    // 0x11b5c4: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x11b5c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11b5c8: 0x252e0064  addiu       $t6, $t1, 0x64
    ctx->pc = 0x11b5c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 100));
    // 0x11b5cc: 0xe75c0  sll         $t6, $t6, 23
    ctx->pc = 0x11b5ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 23));
    // 0x11b5d0: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x11b5d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x11b5d4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b5d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b5d8: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x11b5d8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11b5dc: 0x25ef2db8  addiu       $t7, $t7, 0x2DB8
    ctx->pc = 0x11b5dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11704));
    // 0x11b5e0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b5e0u;
    { uint32_t bits = FAST_READ32(0x662DB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b5e4: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x11B5E4u;
    {
        const bool branch_taken_0x11b5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5E4u;
        // 0x11b5e8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5e4) {
            ctx->pc = 0x11B56Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b56c;
        }
    }
    ctx->pc = 0x11B5ECu;
label_11b5ec:
    // 0x11b5ec: 0xa7080  sll         $t6, $t2, 2
    ctx->pc = 0x11b5ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11b5f0: 0x25ef2d8c  addiu       $t7, $t7, 0x2D8C
    ctx->pc = 0x11b5f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11660));
    // 0x11b5f4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b5f8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b5f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b5fc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x11b5fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x11b600: 0x25ef2d50  addiu       $t7, $t7, 0x2D50
    ctx->pc = 0x11b600u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11600));
    // 0x11b604: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x11b604u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11b608: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11b608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b60c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b60cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b610: 0x25ef2d94  addiu       $t7, $t7, 0x2D94
    ctx->pc = 0x11b610u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11668));
    // 0x11b614: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11b614u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11b618: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b618u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b61c: 0x25ce2d90  addiu       $t6, $t6, 0x2D90
    ctx->pc = 0x11b61cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11664));
    // 0x11b620: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11b620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11b624: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x11b624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x11b628: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b62c: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x11b62cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11b630: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11b630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b634: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11b634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11b638: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11b638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11b63c: 0x46011102  mul.s       $f4, $f2, $f1
    ctx->pc = 0x11b63cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11b640: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
    ctx->pc = 0x11B640u;
    {
        const bool branch_taken_0x11b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B640u;
        // 0x11b644: 0x460060c1  sub.s       $f3, $f12, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b640) {
            ctx->pc = 0x11B4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b4c8;
        }
    }
    ctx->pc = 0x11B648u;
label_11b648:
    // 0x11b648: 0x3c0f317f  lui         $t7, 0x317F
    ctx->pc = 0x11b648u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12671 << 16));
    // 0x11b64c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11b64cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11b650: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x11b650u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x11b654: 0x55e0ff9d  bnel        $t7, $zero, . + 4 + (-0x63 << 2)
    ctx->pc = 0x11B654u;
    {
        const bool branch_taken_0x11b654 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b654) {
            ctx->pc = 0x11B658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B654u;
            // 0x11b658: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B4CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b4cc;
        }
    }
    ctx->pc = 0x11B65Cu;
    // 0x11b65c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b65cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b660: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11b660u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11b664: 0x25ef2d9c  addiu       $t7, $t7, 0x2D9C
    ctx->pc = 0x11b664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11676));
    // 0x11b668: 0x25ce2d98  addiu       $t6, $t6, 0x2D98
    ctx->pc = 0x11b668u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11672));
    // 0x11b66c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b66cu;
    { uint32_t bits = FAST_READ32(0x662D9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b670: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11b670u;
    { uint32_t bits = FAST_READ32(0x662D98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b674: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11b674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11b678: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11b678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11b67c: 0x4502ff94  bc1fl       . + 4 + (-0x6C << 2)
    ctx->pc = 0x11B67Cu;
    {
        const bool branch_taken_0x11b67c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b67c) {
            ctx->pc = 0x11B680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B67Cu;
            // 0x11b680: 0x460c6082  mul.s       $f2, $f12, $f12 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b4d0;
        }
    }
    ctx->pc = 0x11B684u;
    // 0x11b684: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x11b684u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x11b688: 0x1000ff70  b           . + 4 + (-0x90 << 2)
    ctx->pc = 0x11B688u;
    {
        const bool branch_taken_0x11b688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B688u;
        // 0x11b68c: 0x440d6000  mfc1        $t5, $f12 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b688) {
            ctx->pc = 0x11B44Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b44c;
        }
    }
    ctx->pc = 0x11B690u;
}
