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

// Function: sub_0014D4E0
// Address: 0x14d4e0 - 0x14d590
void sub_0014D4E0_0x14d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D4E0_0x14d4e0");
#endif

    switch (ctx->pc) {
        case 0x14d548u: goto label_14d548;
        case 0x14d560u: goto label_14d560;
        case 0x14d574u: goto label_14d574;
        default: break;
    }

    ctx->pc = 0x14d4e0u;

    // 0x14d4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d4e4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x14d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14d4e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14d4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14d4ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d4f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d4f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14d4f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d4fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x14d4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d500: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x14d500u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x14d504: 0x10e30012  beq         $a3, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14D504u;
    {
        const bool branch_taken_0x14d504 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x14D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D504u;
        // 0x14d508: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d504) {
            ctx->pc = 0x14D550u;
            goto label_14d550;
        }
    }
    ctx->pc = 0x14D50Cu;
    // 0x14d50c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x14d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x14d510: 0x10e3000f  beq         $a3, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14D510u;
    {
        const bool branch_taken_0x14d510 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x14D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D510u;
        // 0x14d514: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d510) {
            ctx->pc = 0x14D550u;
            goto label_14d550;
        }
    }
    ctx->pc = 0x14D518u;
    // 0x14d518: 0x10e3000d  beq         $a3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14D518u;
    {
        const bool branch_taken_0x14d518 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d518) {
            ctx->pc = 0x14D550u;
            goto label_14d550;
        }
    }
    ctx->pc = 0x14D520u;
    // 0x14d520: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x14d520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14d524: 0x10e3000a  beq         $a3, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14D524u;
    {
        const bool branch_taken_0x14d524 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d524) {
            ctx->pc = 0x14D550u;
            goto label_14d550;
        }
    }
    ctx->pc = 0x14D52Cu;
    // 0x14d52c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D52Cu;
    {
        const bool branch_taken_0x14d52c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d52c) {
            ctx->pc = 0x14D540u;
            goto label_14d540;
        }
    }
    ctx->pc = 0x14D534u;
    // 0x14d534: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14D534u;
    {
        const bool branch_taken_0x14d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d534) {
            ctx->pc = 0x14D578u;
            goto label_14d578;
        }
    }
    ctx->pc = 0x14D53Cu;
    // 0x14d53c: 0x0  nop
    ctx->pc = 0x14d53cu;
    // NOP
label_14d540:
    // 0x14d540: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D540u;
    SET_GPR_U32(ctx, 31, 0x14D548u);
    ctx->pc = 0x14D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D540u;
    // 0x14d544: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D540u, 0x14D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D548u;
label_14d548:
    // 0x14d548: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14D548u;
    {
        const bool branch_taken_0x14d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d548) {
            ctx->pc = 0x14D578u;
            goto label_14d578;
        }
    }
    ctx->pc = 0x14D550u;
label_14d550:
    // 0x14d550: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x14d550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x14d554: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x14d554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x14d558: 0xc0950d4  jal         func_254350
    ctx->pc = 0x14D558u;
    SET_GPR_U32(ctx, 31, 0x14D560u);
    ctx->pc = 0x14D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D558u;
    // 0x14d55c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254350u, 0x14D558u, 0x14D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D560u;
label_14d560:
    // 0x14d560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D560u;
    {
        const bool branch_taken_0x14d560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D560u;
        // 0x14d564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d560) {
            ctx->pc = 0x14D578u;
            goto label_14d578;
        }
    }
    ctx->pc = 0x14D568u;
    // 0x14d568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d56c: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D56Cu;
    SET_GPR_U32(ctx, 31, 0x14D574u);
    ctx->pc = 0x14D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D56Cu;
    // 0x14d570: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D56Cu, 0x14D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D574u;
label_14d574:
    // 0x14d574: 0x0  nop
    ctx->pc = 0x14d574u;
    // NOP
label_14d578:
    // 0x14d578: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14d578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d57c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d57cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d588: 0x3e00008  jr          $ra
    ctx->pc = 0x14D588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D588u;
        // 0x14d58c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D590u;
}
