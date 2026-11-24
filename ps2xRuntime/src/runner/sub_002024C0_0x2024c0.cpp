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

// Function: sub_002024C0
// Address: 0x2024c0 - 0x202590
void sub_002024C0_0x2024c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002024C0_0x2024c0");
#endif

    switch (ctx->pc) {
        case 0x202568u: goto label_202568;
        case 0x202578u: goto label_202578;
        case 0x202584u: goto label_202584;
        default: break;
    }

    ctx->pc = 0x2024c0u;

    // 0x2024c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2024c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2024c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2024c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2024c8: 0x8c8601bc  lw          $a2, 0x1BC($a0)
    ctx->pc = 0x2024c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x2024cc: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2024CCu;
    {
        const bool branch_taken_0x2024cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024CCu;
        // 0x2024d0: 0x8c87003c  lw          $a3, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024cc) {
            ctx->pc = 0x202584u;
            goto label_202584;
        }
    }
    ctx->pc = 0x2024D4u;
    // 0x2024d4: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x2024d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2024d8: 0x54c2000b  bnel        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2024D8u;
    {
        const bool branch_taken_0x2024d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2024d8) {
            ctx->pc = 0x2024DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2024D8u;
            // 0x2024dc: 0x8c8201c0  lw          $v0, 0x1C0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202508u;
            goto label_202508;
        }
    }
    ctx->pc = 0x2024E0u;
    // 0x2024e0: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x2024e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x2024e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2024e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2024e8: 0x8c8401e4  lw          $a0, 0x1E4($a0)
    ctx->pc = 0x2024e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x2024ec: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2024ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2024f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2024f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2024f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2024f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2024f8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2024f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2024fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2024FCu;
    {
        const bool branch_taken_0x2024fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024FCu;
        // 0x202500: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024fc) {
            ctx->pc = 0x202558u;
            goto label_202558;
        }
    }
    ctx->pc = 0x202504u;
    // 0x202504: 0x0  nop
    ctx->pc = 0x202504u;
    // NOP
label_202508:
    // 0x202508: 0x54c2000b  bnel        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x202508u;
    {
        const bool branch_taken_0x202508 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x202508) {
            ctx->pc = 0x20250Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202508u;
            // 0x20250c: 0x8c8201d0  lw          $v0, 0x1D0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202538u;
            goto label_202538;
        }
    }
    ctx->pc = 0x202510u;
    // 0x202510: 0x8c8201cc  lw          $v0, 0x1CC($a0)
    ctx->pc = 0x202510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x202514: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x202514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x202518: 0x8c8401c8  lw          $a0, 0x1C8($a0)
    ctx->pc = 0x202518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x20251c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x20251cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x202520: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x202520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x202524: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x202524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x202528: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x202528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x20252c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20252Cu;
    {
        const bool branch_taken_0x20252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20252Cu;
        // 0x202530: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20252c) {
            ctx->pc = 0x202558u;
            goto label_202558;
        }
    }
    ctx->pc = 0x202534u;
    // 0x202534: 0x0  nop
    ctx->pc = 0x202534u;
    // NOP
label_202538:
    // 0x202538: 0x8c8501dc  lw          $a1, 0x1DC($a0)
    ctx->pc = 0x202538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 476)));
    // 0x20253c: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x20253cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x202540: 0x8c8401d8  lw          $a0, 0x1D8($a0)
    ctx->pc = 0x202540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 472)));
    // 0x202544: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x202544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x202548: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x202548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x20254c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x20254cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x202550: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x202550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x202554: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x202554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_202558:
    // 0x202558: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x202558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x20255c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x20255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202560: 0xc087956  jal         func_21E558
    ctx->pc = 0x202560u;
    SET_GPR_U32(ctx, 31, 0x202568u);
    ctx->pc = 0x202564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202560u;
    // 0x202564: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E558u, 0x202560u, 0x202568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202568u;
label_202568:
    // 0x202568: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202568u;
    {
        const bool branch_taken_0x202568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202568u;
        // 0x20256c: 0x2404fec8  addiu       $a0, $zero, -0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202568) {
            ctx->pc = 0x202584u;
            goto label_202584;
        }
    }
    ctx->pc = 0x202570u;
    // 0x202570: 0xc08168c  jal         func_205A30
    ctx->pc = 0x202570u;
    SET_GPR_U32(ctx, 31, 0x202578u);
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x202570u, 0x202578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202578u;
label_202578:
    // 0x202578: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x202578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20257c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20257Cu;
    SET_GPR_U32(ctx, 31, 0x202584u);
    ctx->pc = 0x202580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20257Cu;
    // 0x202580: 0x24846558  addiu       $a0, $a0, 0x6558 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20257Cu, 0x202584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202584u;
label_202584:
    // 0x202584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202588: 0x3e00008  jr          $ra
    ctx->pc = 0x202588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202588u;
        // 0x20258c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202590u;
}
