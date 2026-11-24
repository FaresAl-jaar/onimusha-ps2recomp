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

// Function: sub_0026F7E0
// Address: 0x26f7e0 - 0x26f888
void sub_0026F7E0_0x26f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F7E0_0x26f7e0");
#endif

    switch (ctx->pc) {
        case 0x26f808u: goto label_26f808;
        case 0x26f81cu: goto label_26f81c;
        case 0x26f830u: goto label_26f830;
        case 0x26f838u: goto label_26f838;
        default: break;
    }

    ctx->pc = 0x26f7e0u;

    // 0x26f7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f7e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f7f0: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x26f7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f7f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7f8: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x26f7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f7fc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26f800: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x26F800u;
    SET_GPR_U32(ctx, 31, 0x26F808u);
    ctx->pc = 0x26F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F800u;
    // 0x26f804: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x26F800u, 0x26F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F808u;
label_26f808:
    // 0x26f808: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26f808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26f80c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x26f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26f810: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26f810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26f814: 0xc0951b0  jal         func_2546C0
    ctx->pc = 0x26F814u;
    SET_GPR_U32(ctx, 31, 0x26F81Cu);
    ctx->pc = 0x26F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F814u;
    // 0x26f818: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2546C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2546C0u, 0x26F814u, 0x26F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F81Cu;
label_26f81c:
    // 0x26f81c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26f820: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26f820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f824: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26f828: 0xc095130  jal         func_2544C0
    ctx->pc = 0x26F828u;
    SET_GPR_U32(ctx, 31, 0x26F830u);
    ctx->pc = 0x26F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F828u;
    // 0x26f82c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x26F828u, 0x26F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F830u;
label_26f830:
    // 0x26f830: 0xc09bef8  jal         func_26FBE0
    ctx->pc = 0x26F830u;
    SET_GPR_U32(ctx, 31, 0x26F838u);
    ctx->pc = 0x26FBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FBE0u, 0x26F830u, 0x26F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F838u;
label_26f838:
    // 0x26f838: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x26f838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f83c: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x26f83cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x26f840: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f844: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x26f844u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x26f848: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F848u;
    {
        const bool branch_taken_0x26f848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f848) {
            ctx->pc = 0x26F858u;
            goto label_26f858;
        }
    }
    ctx->pc = 0x26F850u;
    // 0x26f850: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F850u;
    {
        const bool branch_taken_0x26f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F850u;
        // 0x26f854: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f850) {
            ctx->pc = 0x26F860u;
            goto label_26f860;
        }
    }
    ctx->pc = 0x26F858u;
label_26f858:
    // 0x26f858: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26f858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f85c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x26f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_26f860:
    // 0x26f860: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x26f860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x26f864: 0x246325f0  addiu       $v1, $v1, 0x25F0
    ctx->pc = 0x26f864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9712));
    // 0x26f868: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x26f868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26f86c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f870: 0xaf848884  sw          $a0, -0x777C($gp)
    ctx->pc = 0x26f870u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936708), GPR_U32(ctx, 4));
    // 0x26f874: 0xaf838888  sw          $v1, -0x7778($gp)
    ctx->pc = 0x26f874u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936712), GPR_U32(ctx, 3));
    // 0x26f878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f880: 0x3e00008  jr          $ra
    ctx->pc = 0x26F880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F880u;
        // 0x26f884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F888u;
}
