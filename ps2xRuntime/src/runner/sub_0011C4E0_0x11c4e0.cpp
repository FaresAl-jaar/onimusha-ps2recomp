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

// Function: sub_0011C4E0
// Address: 0x11c4e0 - 0x11c5bc
void sub_0011C4E0_0x11c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C4E0_0x11c4e0");
#endif

    switch (ctx->pc) {
        case 0x11c520u: goto label_11c520;
        case 0x11c554u: goto label_11c554;
        default: break;
    }

    ctx->pc = 0x11c4e0u;

    // 0x11c4e0: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11c4e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11c4e4: 0x440e6000  mfc1        $t6, $f12
    ctx->pc = 0x11c4e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11c4e8: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11c4e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11c4ec: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x11c4ecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x11c4f0: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x11c4f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11c4f4: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x11c4f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x11c4f8: 0x18f782b  sltu        $t7, $t4, $t7
    ctx->pc = 0x11c4f8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x11c4fc: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C4FCu;
    {
        const bool branch_taken_0x11c4fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4FCu;
        // 0x11c500: 0x440d6000  mfc1        $t5, $f12 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4fc) {
            ctx->pc = 0x11C520u;
            goto label_11c520;
        }
    }
    ctx->pc = 0x11C504u;
    // 0x11c504: 0x5c30008  bgezl       $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C504u;
    {
        const bool branch_taken_0x11c504 = (GPR_S64(ctx, 14) >= 0);
        if (branch_taken_0x11c504) {
            ctx->pc = 0x11C508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C504u;
            // 0x11c508: 0xe4dc3  sra         $t1, $t6, 23 (Delay Slot)
            SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C528u;
            goto label_11c528;
        }
    }
    ctx->pc = 0x11C50Cu;
    // 0x11c50c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x11c50cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11c510: 0x0  nop
    ctx->pc = 0x11c510u;
    // NOP
    // 0x11c514: 0x0  nop
    ctx->pc = 0x11c514u;
    // NOP
    // 0x11c518: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11c518u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x11c51c: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x11c51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
label_11c520:
    // 0x11c520: 0x3e00008  jr          $ra
    ctx->pc = 0x11C520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C520u;
        // 0x11c524: 0x448d0000  mtc1        $t5, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C528u;
label_11c528:
    // 0x11c528: 0x2529ff81  addiu       $t1, $t1, -0x7F
    ctx->pc = 0x11c528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967169));
    // 0x11c52c: 0x1cc7824  and         $t7, $t6, $t4
    ctx->pc = 0x11c52cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x11c530: 0x312d0001  andi        $t5, $t1, 0x1
    ctx->pc = 0x11c530u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x11c534: 0x3c0e0080  lui         $t6, 0x80
    ctx->pc = 0x11c534u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)128 << 16));
    // 0x11c538: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x11c538u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x11c53c: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x11c53cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11c540: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11c540u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c544: 0x1ae7004  sllv        $t6, $t6, $t5
    ctx->pc = 0x11c544u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x11c548: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c548u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c54c: 0xe7040  sll         $t6, $t6, 1
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x11c550: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x11c550u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
label_11c554:
    // 0x11c554: 0x16c6821  addu        $t5, $t3, $t4
    ctx->pc = 0x11c554u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x11c558: 0x1cd782a  slt         $t7, $t6, $t5
    ctx->pc = 0x11c558u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11c55c: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C55Cu;
    {
        const bool branch_taken_0x11c55c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c55c) {
            ctx->pc = 0x11C560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C55Cu;
            // 0x11c560: 0xc6042  srl         $t4, $t4, 1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C574u;
            goto label_11c574;
        }
    }
    ctx->pc = 0x11C564u;
    // 0x11c564: 0x1cd7023  subu        $t6, $t6, $t5
    ctx->pc = 0x11c564u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x11c568: 0x1ac5821  addu        $t3, $t5, $t4
    ctx->pc = 0x11c568u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x11c56c: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x11c56cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x11c570: 0xc6042  srl         $t4, $t4, 1
    ctx->pc = 0x11c570u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_11c574:
    // 0x11c574: 0x1580fff7  bnez        $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11C574u;
    {
        const bool branch_taken_0x11c574 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C574u;
        // 0x11c578: 0xe7040  sll         $t6, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c574) {
            ctx->pc = 0x11C554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c554;
        }
    }
    ctx->pc = 0x11C57Cu;
    // 0x11c57c: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x11C57Cu;
    {
        const bool branch_taken_0x11c57c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C57Cu;
        // 0x11c580: 0xa7843  sra         $t7, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c57c) {
            ctx->pc = 0x11C5A8u;
            goto label_11c5a8;
        }
    }
    ctx->pc = 0x11C584u;
    // 0x11c584: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c584u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c588: 0x25ef3318  addiu       $t7, $t7, 0x3318
    ctx->pc = 0x11c588u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13080));
    // 0x11c58c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11c58cu;
    { uint32_t bits = FAST_READ32(0x663318u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c590: 0x46000036  c.le.s      $f0, $f0
    ctx->pc = 0x11c590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11c594: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x11C594u;
    {
        const bool branch_taken_0x11c594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11c594) {
            ctx->pc = 0x11C598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C594u;
            // 0x11c598: 0xa7843  sra         $t7, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C5A8u;
            goto label_11c5a8;
        }
    }
    ctx->pc = 0x11C59Cu;
    // 0x11c59c: 0x314f0001  andi        $t7, $t2, 0x1
    ctx->pc = 0x11c59cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x11c5a0: 0x14f5021  addu        $t2, $t2, $t7
    ctx->pc = 0x11c5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x11c5a4: 0xa7843  sra         $t7, $t2, 1
    ctx->pc = 0x11c5a4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 1));
label_11c5a8:
    // 0x11c5a8: 0x3c0e3f00  lui         $t6, 0x3F00
    ctx->pc = 0x11c5a8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16128 << 16));
    // 0x11c5ac: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x11c5acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x11c5b0: 0x96dc0  sll         $t5, $t1, 23
    ctx->pc = 0x11c5b0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
    // 0x11c5b4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x11C5B4u;
    {
        const bool branch_taken_0x11c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5B4u;
        // 0x11c5b8: 0x1cd6821  addu        $t5, $t6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5b4) {
            ctx->pc = 0x11C520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c520;
        }
    }
    ctx->pc = 0x11C5BCu;
}
