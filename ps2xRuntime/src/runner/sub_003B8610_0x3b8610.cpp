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

// Function: sub_003B8610
// Address: 0x3b8610 - 0x3b86a8
void sub_003B8610_0x3b8610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8610_0x3b8610");
#endif

    switch (ctx->pc) {
        case 0x3b8624u: goto label_3b8624;
        case 0x3b8630u: goto label_3b8630;
        default: break;
    }

    ctx->pc = 0x3b8610u;

    // 0x3b8610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b8610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b8614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b8614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b8618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b8618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b861c: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3B861Cu;
    SET_GPR_U32(ctx, 31, 0x3B8624u);
    ctx->pc = 0x3B8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B861Cu;
    // 0x3b8620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3B861Cu, 0x3B8624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8624u;
label_3b8624:
    // 0x3b8624: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3b8624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3b8628: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3B8628u;
    SET_GPR_U32(ctx, 31, 0x3B8630u);
    ctx->pc = 0x3B862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8628u;
    // 0x3b862c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3B8628u, 0x3B8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8630u;
label_3b8630:
    // 0x3b8630: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3b8630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b8634: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8634u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8638: 0x2c610046  sltiu       $at, $v1, 0x46
    ctx->pc = 0x3b8638u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x3b863c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B863Cu;
    {
        const bool branch_taken_0x3b863c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b863c) {
            ctx->pc = 0x3B8650u;
            goto label_3b8650;
        }
    }
    ctx->pc = 0x3B8644u;
    // 0x3b8644: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B8644u;
    {
        const bool branch_taken_0x3b8644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8644u;
        // 0x3b8648: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8644) {
            ctx->pc = 0x3B8688u;
            goto label_3b8688;
        }
    }
    ctx->pc = 0x3B864Cu;
    // 0x3b864c: 0x0  nop
    ctx->pc = 0x3b864cu;
    // NOP
label_3b8650:
    // 0x3b8650: 0x2c610055  sltiu       $at, $v1, 0x55
    ctx->pc = 0x3b8650u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x3b8654: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8654u;
    {
        const bool branch_taken_0x3b8654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8654) {
            ctx->pc = 0x3B8668u;
            goto label_3b8668;
        }
    }
    ctx->pc = 0x3B865Cu;
    // 0x3b865c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B865Cu;
    {
        const bool branch_taken_0x3b865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B865Cu;
        // 0x3b8660: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b865c) {
            ctx->pc = 0x3B8688u;
            goto label_3b8688;
        }
    }
    ctx->pc = 0x3B8664u;
    // 0x3b8664: 0x0  nop
    ctx->pc = 0x3b8664u;
    // NOP
label_3b8668:
    // 0x3b8668: 0x2c61005f  sltiu       $at, $v1, 0x5F
    ctx->pc = 0x3b8668u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x3b866c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B866Cu;
    {
        const bool branch_taken_0x3b866c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b866c) {
            ctx->pc = 0x3B8680u;
            goto label_3b8680;
        }
    }
    ctx->pc = 0x3B8674u;
    // 0x3b8674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8674u;
    {
        const bool branch_taken_0x3b8674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8674u;
        // 0x3b8678: 0x64030002  daddiu      $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8674) {
            ctx->pc = 0x3B8688u;
            goto label_3b8688;
        }
    }
    ctx->pc = 0x3B867Cu;
    // 0x3b867c: 0x0  nop
    ctx->pc = 0x3b867cu;
    // NOP
label_3b8680:
    // 0x3b8680: 0x64030003  daddiu      $v1, $zero, 0x3
    ctx->pc = 0x3b8680u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x3b8684: 0x0  nop
    ctx->pc = 0x3b8684u;
    // NOP
label_3b8688:
    // 0x3b8688: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3b8688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3b868c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b868cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8690: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3b8690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3b8694: 0xa2032b85  sb          $v1, 0x2B85($s0)
    ctx->pc = 0x3b8694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11141), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b8698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b869c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b869cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b86a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B86A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86A0u;
        // 0x3b86a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B86A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B86A8u;
}
