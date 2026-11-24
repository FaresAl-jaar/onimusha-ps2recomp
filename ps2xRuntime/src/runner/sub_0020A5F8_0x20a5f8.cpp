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

// Function: sub_0020A5F8
// Address: 0x20a5f8 - 0x20a6a4
void sub_0020A5F8_0x20a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A5F8_0x20a5f8");
#endif

    switch (ctx->pc) {
        case 0x20a614u: goto label_20a614;
        case 0x20a62cu: goto label_20a62c;
        case 0x20a640u: goto label_20a640;
        case 0x20a660u: goto label_20a660;
        case 0x20a670u: goto label_20a670;
        default: break;
    }

    ctx->pc = 0x20a5f8u;

    // 0x20a5f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a600: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a604: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a60c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A60Cu;
    SET_GPR_U32(ctx, 31, 0x20A614u);
    ctx->pc = 0x20A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A60Cu;
    // 0x20a610: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A60Cu, 0x20A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A614u;
label_20a614:
    // 0x20a614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a618: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A618u;
    {
        const bool branch_taken_0x20a618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A618u;
        // 0x20a61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a618) {
            ctx->pc = 0x20A638u;
            goto label_20a638;
        }
    }
    ctx->pc = 0x20A620u;
    // 0x20a620: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a624: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20A624u;
    SET_GPR_U32(ctx, 31, 0x20A62Cu);
    ctx->pc = 0x20A628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A624u;
    // 0x20a628: 0x24848498  addiu       $a0, $a0, -0x7B68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20A624u, 0x20A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A62Cu;
label_20a62c:
    // 0x20a62c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20A62Cu;
    {
        const bool branch_taken_0x20a62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A62Cu;
        // 0x20a630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a62c) {
            ctx->pc = 0x20A690u;
            goto label_20a690;
        }
    }
    ctx->pc = 0x20A634u;
    // 0x20a634: 0x0  nop
    ctx->pc = 0x20a634u;
    // NOP
label_20a638:
    // 0x20a638: 0xc0828ba  jal         func_20A2E8
    ctx->pc = 0x20A638u;
    SET_GPR_U32(ctx, 31, 0x20A640u);
    ctx->pc = 0x20A2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A2E8u, 0x20A638u, 0x20A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A640u;
label_20a640:
    // 0x20a640: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x20a640u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20a644: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x20A644u;
    {
        const bool branch_taken_0x20a644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A644u;
        // 0x20a648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a644) {
            ctx->pc = 0x20A690u;
            goto label_20a690;
        }
    }
    ctx->pc = 0x20A64Cu;
    // 0x20a64c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A64Cu;
    {
        const bool branch_taken_0x20a64c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x20A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A64Cu;
        // 0x20a650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a64c) {
            ctx->pc = 0x20A668u;
            goto label_20a668;
        }
    }
    ctx->pc = 0x20A654u;
    // 0x20a654: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a658: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20A658u;
    SET_GPR_U32(ctx, 31, 0x20A660u);
    ctx->pc = 0x20A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A658u;
    // 0x20a65c: 0x248484c8  addiu       $a0, $a0, -0x7B38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20A658u, 0x20A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A660u;
label_20a660:
    // 0x20a660: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20A660u;
    {
        const bool branch_taken_0x20a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A660u;
        // 0x20a664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a660) {
            ctx->pc = 0x20A690u;
            goto label_20a690;
        }
    }
    ctx->pc = 0x20A668u;
label_20a668:
    // 0x20a668: 0xc0829b0  jal         func_20A6C0
    ctx->pc = 0x20A668u;
    SET_GPR_U32(ctx, 31, 0x20A670u);
    ctx->pc = 0x20A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A668u;
    // 0x20a66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A6C0u, 0x20A668u, 0x20A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A670u;
label_20a670:
    // 0x20a670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a678: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a67c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a67cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a684: 0x80829b6  j           func_20A6D8
    ctx->pc = 0x20A684u;
    ctx->pc = 0x20A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A684u;
    // 0x20a688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A6D8u;
    sub_0020A6D8_0x20a6d8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A68Cu;
    // 0x20a68c: 0x0  nop
    ctx->pc = 0x20a68cu;
    // NOP
label_20a690:
    // 0x20a690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A69Cu;
        // 0x20a6a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A6A4u;
}
